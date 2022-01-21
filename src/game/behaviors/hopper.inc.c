
/**
 * Behavior for bhvHopper and bhvHopperTripletSpawner,
 * Hoppers can either be spawned individually, or spawned by a triplet spawner.
 * The triplet spawner comes before its spawned hoppers in processing order.
 */

/**
 * Hitbox for hopper.
 */
static struct ObjectHitbox sHopperHitbox = {
    /* interactType:      */ INTERACT_BOUNCE_TOP,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 1,
    /* health:            */ 0,
    /* numLootCoins:      */ 1,
    /* radius:            */ 72,
    /* height:            */ 50,
    /* hurtboxRadius:     */ 42,
    /* hurtboxHeight:     */ 40,
};

/**
 * Properties that vary based on hopper size.
 */
struct HopperProperties {
    f32 scale;
    u32 deathSound;
    s16 drawDistance;
    s8 damage;
};

/**
 * Properties for regular, huge, and tiny hoppers.
 */
static struct HopperProperties sHopperProperties[] = {
    { 1.5f, SOUND_OBJ_ENEMY_DEATH_HIGH, 4000, 1 },
    { 3.5f, SOUND_OBJ_ENEMY_DEATH_LOW, 4000, 2 },
    { 0.5f, SOUND_OBJ_ENEMY_DEATH_HIGH, 1500, 0 },
};

/**
 * Attack handlers for hoppers.
 */
static u8 sHopperAttackHandlers[][6] = {
    // regular and tiny
    {
        /* ATTACK_PUNCH:                 */ ATTACK_HANDLER_KNOCKBACK,
        /* ATTACK_KICK_OR_TRIP:          */ ATTACK_HANDLER_KNOCKBACK,
        /* ATTACK_FROM_ABOVE:            */ ATTACK_HANDLER_SQUISHED,
        /* ATTACK_GROUND_POUND_OR_TWIRL: */ ATTACK_HANDLER_SQUISHED,
        /* ATTACK_FAST_ATTACK:           */ ATTACK_HANDLER_KNOCKBACK,
        /* ATTACK_FROM_BELOW:            */ ATTACK_HANDLER_KNOCKBACK,
    },
    // huge
    {
        /* ATTACK_PUNCH:                 */ ATTACK_HANDLER_SPECIAL_HUGE_HOPPER_WEAKLY_ATTACKED,
        /* ATTACK_KICK_OR_TRIP:          */ ATTACK_HANDLER_SPECIAL_HUGE_HOPPER_WEAKLY_ATTACKED,
        /* ATTACK_FROM_ABOVE:            */ ATTACK_HANDLER_SQUISHED,
        /* ATTACK_GROUND_POUND_OR_TWIRL: */ ATTACK_HANDLER_SQUISHED_WITH_BLUE_COIN,
        /* ATTACK_FAST_ATTACK:           */ ATTACK_HANDLER_SPECIAL_HUGE_HOPPER_WEAKLY_ATTACKED,
        /* ATTACK_FROM_BELOW:            */ ATTACK_HANDLER_SPECIAL_HUGE_HOPPER_WEAKLY_ATTACKED,
    },
};

/**
 * Update function for hopper triplet spawner.
 */
void bhv_hopper_triplet_spawner_update(void) {
    UNUSED s32 unused1;
    s16 hopperFlag;
    UNUSED s16 unused2;
    s32 angle;
    s32 dAngle;
    s16 dx;
    s16 dz;

    // If mario is close enough and the hoppers aren't currently loaded, then
    // spawn them
    if (o->oAction == HOPPER_TRIPLET_SPAWNER_ACT_UNLOADED) {
        if (o->oDistanceToMario < 3000.0f) {
            // The spawner is capable of spawning more than 3 hoppers, but this
            // is not used in the game
            dAngle =
                0x10000
                / (((o->oBehParams2ndByte & HOPPER_TRIPLET_SPAWNER_BP_EXTRA_HOPPERS_MASK) >> 2) + 3);

            for (angle = 0, hopperFlag = 1 << 8; angle < 0xFFFF; angle += dAngle, hopperFlag <<= 1) {
                // Only spawn hoppers which haven't been killed yet
                if (!(o->oBehParams & hopperFlag)) {
                    dx = 500.0f * coss(angle);
                    dz = 500.0f * sins(angle);

                    spawn_object_relative((o->oBehParams2ndByte & HOPPER_TRIPLET_SPAWNER_BP_SIZE_MASK)
                                              | (hopperFlag >> 6),
                                          dx, 0, dz, o, MODEL_HOPPER, bhvHopper);
                }
            }

            o->oAction += 1;
        }
    } else if (o->oDistanceToMario > 4000.0f) {
        // If mario is too far away, enter the unloaded action. The hoppers
        // will detect this and unload themselves
        o->oAction = HOPPER_TRIPLET_SPAWNER_ACT_UNLOADED;
    }
}

/**
 * Initialization function for hopper.
 */
void bhv_hopper_init(void) {
    o->oHopperSize = o->oBehParams2ndByte & HOPPER_BP_SIZE_MASK;

    o->oHopperScale = sHopperProperties[o->oHopperSize].scale;
    o->oDeathSound = sHopperProperties[o->oHopperSize].deathSound;

    obj_set_hitbox(o, &sHopperHitbox);

    o->oDrawingDistance = sHopperProperties[o->oHopperSize].drawDistance;
    o->oDamageOrCoinValue = sHopperProperties[o->oHopperSize].damage;

    o->oGravity = -8.0f / 3.0f * o->oHopperScale;
}

/**
 * Enter the jump action and set initial y velocity.
 */
static void hopper_begin_jump(void) {
    cur_obj_play_sound_2(SOUND_OBJ_HOPPER_ALERT);
    o->oAction = HOPPER_ACT_JUMP;
    o->oForwardVel = 0.0f;
    o->oVelY = 50.0f / 3.0f * o->oHopperScale;
}

/**
 * If spawned by a triplet spawner, mark the flag in the spawner to indicate that
 * this hopper died. This prevents it from spawning again when mario leaves and
 * comes back.
 */
static void mark_hopper_as_dead(void) {
    if (o->parentObj != o) {
        set_object_respawn_info_bits(o->parentObj,
                                     (o->oBehParams2ndByte & HOPPER_BP_TRIPLET_FLAG_MASK) >> 2);

        o->parentObj->oBehParams =
            o->parentObj->oBehParams | (o->oBehParams2ndByte & HOPPER_BP_TRIPLET_FLAG_MASK) << 6;
    }
}

/**
 * Walk around randomly occasionally jumping. If mario comes within range,
 * chase him.
 */
static void hopper_act_walk(void) {
    treat_far_home_as_mario(1000.0f);

    obj_forward_vel_approach(o->oHopperRelativeSpeed * o->oHopperScale, 0.4f);

    // If walking fast enough, play footstep sounds
    if (o->oHopperRelativeSpeed > 4.0f / 3.0f) {
        cur_obj_play_sound_at_anim_range(2, 17, SOUND_OBJ_HOPPER_WALK);
    }

    //! By strategically hitting a wall, steep slope, or another hopper, we can
    //  prevent the hopper from turning back toward home for a while (hopper
    //  chase extension)
    //! It seems theoretically possible to get 2-3 hoppers to repeatedly touch
    //  each other and move arbitrarily far from their home, but it's
    //  extremely precise and chaotic in practice, so probably can't be performed
    //  for nontrivial distances
    if (o->oHopperTurningAwayFromWall) {
        o->oHopperTurningAwayFromWall = obj_resolve_collisions_and_turn(o->oHopperTargetYaw, 0x200);
    } else {
        // If far from home, walk toward home.
        if (o->oDistanceToMario >= 25000.0f) {
            o->oHopperTargetYaw = o->oAngleToMario;
            o->oHopperWalkTimer = random_linear_offset(20, 30);
        }

        if (!(o->oHopperTurningAwayFromWall =
                  obj_bounce_off_walls_edges_objects(&o->oHopperTargetYaw))) {
            if (o->oDistanceToMario < 500.0f) {
                // If close to mario, begin chasing him. If not already chasing
                // him, jump first

                if (o->oHopperRelativeSpeed <= 2.0f) {
                    hopper_begin_jump();
                }

                o->oHopperTargetYaw = o->oAngleToMario;
                o->oHopperRelativeSpeed = 20.0f;
            } else {
                // If mario is far away, walk at a normal pace, turning randomly
                // and occasionally jumping

                o->oHopperRelativeSpeed = 4.0f / 3.0f;
                if (o->oHopperWalkTimer != 0) {
                    o->oHopperWalkTimer -= 1;
                } else {
                    if (random_u16() & 3) {
                        o->oHopperTargetYaw = obj_random_fixed_turn(0x2000);
                        o->oHopperWalkTimer = random_linear_offset(100, 100);
                    } else {
                        hopper_begin_jump();
                        o->oHopperTargetYaw = obj_random_fixed_turn(0x6000);
                    }
                }
            }
        }

        cur_obj_rotate_yaw_toward(o->oHopperTargetYaw, 0x200);
    }
}

/**
 * This action occurs when either the hopper attacks mario normally, or mario
 * attacks a huge hopper with an attack that doesn't kill it.
 */
static void hopper_act_attacked_mario(void) {
    if (o->oHopperSize == HOPPER_SIZE_TINY) {
        mark_hopper_as_dead();
        o->oNumLootCoins = 0;
        obj_die_if_health_non_positive();
    } else {
        //! This can happen even when the hopper is already in the air. It's
        //  hard to chain these in practice
        hopper_begin_jump();
        o->oHopperTargetYaw = o->oAngleToMario;
        o->oHopperTurningAwayFromWall = FALSE;
    }
}

/**
 * Move until landing, and rotate toward target yaw.
 */
static void hopper_act_jump(void) {
    obj_resolve_object_collisions(NULL);

    //! If we move outside the hopper's drawing radius the frame it enters the
    //  jump action, then it will keep its velY, but it will still be counted
    //  as being on the ground.
    //  Next frame, the jump action will think it has already ended because it is
    //  still on the ground.
    //  This puts the hopper back in the walk action, but the positive velY will
    //  make it hop into the air. We can then trigger another jump.
    if (o->oMoveFlags & OBJ_MOVE_MASK_ON_GROUND) {
        o->oAction = HOPPER_ACT_WALK;
    } else {
        cur_obj_rotate_yaw_toward(o->oHopperTargetYaw, 0x800);
    }
}

/**
 * Attack handler for when mario attacks a huge hopper with an attack that
 * doesn't kill it.
 * From the hopper's perspective, this is the same as the hopper attacking
 * mario.
 */
void huge_hopper_weakly_attacked(void) {
    o->oAction = HOPPER_ACT_ATTACKED_MARIO;
}

/**
 * Update function for hopper.
 */
void bhv_hopper_update(void) {
    // PARTIAL_UPDATE

    f32 animSpeed;

    if (obj_update_standard_actions(o->oHopperScale)) {
        // If this hopper has a spawner and mario moved away from the spawner,
        // unload
        if (o->parentObj != o) {
            if (o->parentObj->oAction == HOPPER_TRIPLET_SPAWNER_ACT_UNLOADED) {
                obj_mark_for_deletion(o);
            }
        }

        cur_obj_scale(o->oHopperScale);
        obj_update_blinking(&o->oHopperBlinkTimer, 30, 50, 5);
        cur_obj_update_floor_and_walls();

        if ((animSpeed = o->oForwardVel / o->oHopperScale * 0.4f) < 1.0f) {
            animSpeed = 1.0f;
        }
        cur_obj_init_animation_with_accel_and_sound(0, animSpeed);

        switch (o->oAction) {
            case HOPPER_ACT_WALK:
                hopper_act_walk();
                break;
            case HOPPER_ACT_ATTACKED_MARIO:
                hopper_act_attacked_mario();
                break;
            case HOPPER_ACT_JUMP:
                hopper_act_jump();
                break;
        }

        //! @bug Weak attacks on huge hoppers in a triplet mark them as dead even if they're not.
        // obj_handle_attacks returns the type of the attack, which is non-zero
        // even for Mario's weak attacks. Thus, if Mario weakly attacks a huge hopper
        // without harming it (e.g. by punching it), the hopper will be marked as dead
        // and will not respawn if Mario leaves and re-enters the spawner's radius
        // even though the hopper isn't actually dead.
        if (obj_handle_attacks(&sHopperHitbox, HOPPER_ACT_ATTACKED_MARIO,
                               sHopperAttackHandlers[o->oHopperSize & 1])) {
            mark_hopper_as_dead();
        }

        cur_obj_move_standard(-78);
    } else {
        o->oAnimState = TRUE;
    }
}
