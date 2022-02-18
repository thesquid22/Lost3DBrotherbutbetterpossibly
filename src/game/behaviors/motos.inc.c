enum sMotosActions {
    MOTOS_ACT_WAIT,
    MOTOS_ACT_PLAYER_SEARCH,
    MOTOS_ACT_PLAYER_CARRY,
    MOTOS_ACT_PLAYER_PITCH,
    MOTOS_ACT_CARRY_RUN,
    MOTOS_ACT_THROWN,
    MOTOS_ACT_RECOVER,
    MOTOS_ACT_DEATH
};

enum sMotosAnimations {
    MOTOS_ANIM_BASE,
    MOTOS_ANIM_CARRY,
    MOTOS_ANIM_CARRY_RUN,
    MOTOS_ANIM_CARRY_START,
    MOTOS_ANIM_DOWN_RECOVER,
    MOTOS_ANIM_DOWN_STOP,
    MOTOS_ANIM_PITCH,
    MOTOS_ANIM_SAFE_DOWN,
    MOTOS_ANIM_WAIT,
    MOTOS_ANIM_WALK,
    MOTOS_ANIM_END
};

// All changes made to the original code have been commented.

// Modified, original did not make sense, it checked if Mario was close and in front, but he is always close and in front when being held
// Now it goes off either a timer or when reached an edge
s32 bhv_motos_do_throw_mario() {
    return (o->oTimer > 45) || (o->oMoveFlags & OBJ_MOVE_HIT_EDGE);
    // Original:
    // return (cur_obj_rotate_yaw_toward(o->oAngleToMario, 0x200)) || (o->oDistanceToMario < 500.f)
}

void bhv_motos_hand_loop(void) {
	o->oParentRelativePosX = 100.0f;
	o->oParentRelativePosZ = 150.0f;

    common_anchor_mario_behavior(50.0f, 30.0f, 64); // Used common func instead of repeating code
	
	switch (o->parentObj->oMotosUnk88 ){
	 	case	0:
			break;
		case	1:
			obj_set_gfx_pos_at_obj_pos(gMarioObject, o);
			vec3f_copy(gMarioState->pos, gMarioObject->header.gfx.pos); // Added to fix camera
			break;
		case	2:
                gMarioObject->oInteractStatus |= (INT_STATUS_MARIO_UNK6 + INT_STATUS_MARIO_UNK2);
			gMarioStates[0].forwardVel = 40.0f;
			gMarioStates[0].vel[1] = 20.0f;
			o->oInteractStatus &= ~(INT_STATUS_GRABBED_MARIO);
			o->parentObj->oMotosUnk88 = 0;
			o->parentObj->oMotosUnk100 = 0;
			break;
		case 3:
            gMarioObject->oInteractStatus |=
                (INT_STATUS_MARIO_UNK2 + INT_STATUS_MARIO_UNK6); // loads 2 interactions at once?
            gMarioStates[0].forwardVel = 30.0f;
            gMarioStates[0].vel[1] = 10.0f;
			o->oInteractStatus &= ~(INT_STATUS_GRABBED_MARIO);
            o->parentObj->oMotosUnk88 = 0;
			o->parentObj->oMotosUnk100 = 0;
            break;
    }
	
}

void bhv_motos_wait(void) {
    o->oForwardVel = 0.f;
    o->oVelY = 0.f;
    
    cur_obj_init_animation_with_sound(MOTOS_ANIM_WAIT);
    
    if (o->oDistanceToMario < 1000.f) {
        o->oAction = MOTOS_ACT_PLAYER_SEARCH;
    }
}

void bhv_motos_player_search(void) {
		if (cur_obj_check_anim_frame(13) | cur_obj_check_if_near_animation_end()) {
	cur_obj_play_sound_2(SOUND_OBJ_BULLY_WALKING);
}
    cur_obj_init_animation_with_sound(MOTOS_ANIM_WALK);
    o->oForwardVel = 2.5f; // Sped up (was 2.f)
    cur_obj_rotate_yaw_toward(o->oAngleToMario, 600);
    
    if (o->oInteractStatus & INT_STATUS_GRABBED_MARIO) {
        o->oAction = MOTOS_ACT_PLAYER_CARRY;
        o->oMotosUnk88 = 1;
    }
}

void bhv_motos_player_carry(void) {
    // Replaced with the similar MOTOS_ACT_CARRY_START, which allows for running
    cur_obj_init_animation_with_sound(MOTOS_ANIM_CARRY_START);
    
    if (cur_obj_check_if_near_animation_end()) {
        if (bhv_motos_do_throw_mario())
            o->oAction = MOTOS_ACT_PLAYER_PITCH;
        else
            o->oAction = MOTOS_ACT_CARRY_RUN;
    }
}

void bhv_motos_player_pitch(void) {
    o->oForwardVel = 0.f;
    cur_obj_init_animation_with_sound(MOTOS_ANIM_PITCH);
    	if (o->oTimer == 0) {
			cur_obj_play_sound_2(SOUND_OBJ_BULLY_METAL);
}
    if (cur_obj_check_anim_frame(14)) {
        o->oMotosUnk88 = 2;
    }
    
    if (cur_obj_check_if_near_animation_end()) {
        o->oAction = MOTOS_ACT_WAIT;
        o->oInteractStatus &= (~INT_STATUS_GRABBED_MARIO);
    }
}

void bhv_motos_carry_run(void) {
	s32 sp1C = gGlobalTimer;
    o->oForwardVel = 10.f; // Sped up (was 5.f)
    cur_obj_init_animation_with_sound(MOTOS_ANIM_CARRY_RUN);
		if ((sp1C & 6) == 0) {
cur_obj_play_sound_2(SOUND_OBJ_POUNDING1_HIGHPRIO);
}	
    o->oMotosUnk100 += player_performed_grab_escape_action();
    if (o->oMotosUnk100 > 10) {
	o->oAction = 6;
	o->oInteractStatus &= ~(INT_STATUS_GRABBED_MARIO);
	o->oMotosUnk88 = 3;
}
    if (bhv_motos_do_throw_mario())
        o->oAction = MOTOS_ACT_PLAYER_PITCH;
    // Useless else clause removed
}

void bhv_motos_thrown(void) {
    cur_obj_init_animation_with_sound(MOTOS_ANIM_DOWN_STOP);
    
    if (o->oMoveFlags & OBJ_MOVE_LANDED) {
        o->oAction = MOTOS_ACT_RECOVER; // New action: recover (used to go straight back into wait)
        cur_obj_play_sound_2(SOUND_OBJ2_LARGE_BULLY_ATTACKED);
    }
}

void bhv_motos_recover(void) {
//   o->oForwardVel = 5.0f;
if (o->oForwardVel > 0.0) { 
    o->oForwardVel -= 1;
}
    if (o->oSubAction == 0) {
        cur_obj_init_animation_with_sound(MOTOS_ANIM_DOWN_STOP);
		if (o->oTimer == 10) {
		cur_obj_play_sound_2(SOUND_OBJ_THWOMP);
		}
        if (cur_obj_check_if_near_animation_end()) {
			
            o->oSubAction++;
}
    } else if (o->oSubAction == 1) {
        cur_obj_init_animation_with_sound(MOTOS_ANIM_DOWN_RECOVER);
        if (cur_obj_check_if_near_animation_end())
            o->oAction = MOTOS_ACT_WAIT;
}
}


void bhv_motos_death(void) {
    // Taken from bully code to handle death
    if (obj_lava_death()) {
        struct Object *coin = spawn_object(o, MODEL_BLUE_COIN, bhvBlueCoinMotos);
        cur_obj_play_sound_2(SOUND_GENERAL_COIN_SPURT_2);
        coin->oForwardVel = 10.0f;
        coin->oVelY = 100.0f;
        coin->oPosY = o->oPosY + 310.0f;
        coin->oMoveAngleYaw = (f32)(o->oFaceAngleYaw + 0x8000) + random_float() * 1024.0f;
    }
}

void bhv_motos_main() {
    f32 floorY;

    cur_obj_update_floor_and_walls();

    switch (o->oAction) {
        case MOTOS_ACT_WAIT:
            bhv_motos_wait();
            break;
        case MOTOS_ACT_PLAYER_SEARCH:
            bhv_motos_player_search();
            break;
        case MOTOS_ACT_PLAYER_CARRY:
            bhv_motos_player_carry();
            break;
        case MOTOS_ACT_PLAYER_PITCH:
            bhv_motos_player_pitch();
            break;
        case MOTOS_ACT_CARRY_RUN:
            bhv_motos_carry_run();
            break;
        case MOTOS_ACT_THROWN:
            bhv_motos_thrown();
            break;
        case MOTOS_ACT_RECOVER:
            bhv_motos_recover();
            break;
    }
    
    cur_obj_move_standard(-78);
    
    // Added to detect lava death
    floorY = find_floor(o->oPosX, o->oPosY, o->oPosZ, &sObjFloor);
    if (sObjFloor != NULL) {
        if ((floorY + 1.f > o->oPosY) && (sObjFloor->type == SURFACE_BURNING)) {
            o->oAction = MOTOS_ACT_DEATH;
        }
    }
}

void bhv_motos_loop(void) {
    cur_obj_scale(2.0f);
    o->oInteractionSubtype |= INT_SUBTYPE_GRABS_MARIO;
    
    switch (o->oHeldState) {
        case HELD_FREE:
            // If clause to prevent Motos from updating physics while dying from lava
            if (o->oAction == MOTOS_ACT_DEATH)
                bhv_motos_death();
            else
                bhv_motos_main();
            break;
        case HELD_HELD:
            cur_obj_unrender_and_reset_state(MOTOS_ANIM_WALK, MOTOS_ACT_WAIT);
            break;
        case HELD_THROWN:
        case HELD_DROPPED:
            cur_obj_get_thrown_or_placed(15.f, 35.f, MOTOS_ACT_THROWN);
            break;
    }
    
    o->oInteractStatus = 0; // Added because it doesnt work without this, cmon Nintendo
    set_object_visibility(o, 8000); // Increased from 2000
}
