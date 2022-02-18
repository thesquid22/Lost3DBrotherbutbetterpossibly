//#define ANM_motos_basedata_A    	0
//#define ANM_motos_carry         	1
//#define ANM_motos_carry_run     	2
//#define ANM_motos_carry_start   	3
//#define ANM_motos_down_recover  	4
//#define ANM_motos_down_stop     	5
//#define ANM_motos_pitch         	6
//#define ANM_motos_safe_down     	7
//#define ANM_motos_wait          	8
//#define ANM_motos_walk          	9

void s_motos_hand(void)
{

//	struct Object *firep;

	o->oParentRelativePosX = 100.0f;
//	o->oParentRelativePosY = 0.0f;
	o->oParentRelativePosZ = 150.0f;
	o->oMoveAngleYaw = o->parentObj->oMoveAngleYaw;

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
            gMarioStates[0].forwardVel = 20.0f;
            gMarioStates[0].vel[1] = 10.0f;
			o->oInteractStatus &= ~(INT_STATUS_GRABBED_MARIO);
            o->parentObj->oMotosUnk88 = 0;
			o->parentObj->oMotosUnk100 = 0;
            break;
    }
	



//	if (o->parentObj->oMotosUnk88 != 0){
//		o->parentObj->oMotosUnk88 = 0;
//	 	firep = spawn_object(o, MODEL_UNKNOWN_7D, bhvUnusedParticleSpawn);
//		firep->oForwardVel = 40.0f;
//		firep->oVelY = 20.0f;
//		firep->oMoveAngleYaw = o->parentObj->oMoveAngleYaw;
//	}


}

Gfx *MotosProc1(s32 run, UNUSED struct GraphNode *node, Mat4 mtx) {
    Mat4 sp20;
    struct Object *sp1C;

    if (run == TRUE) {
        sp1C = (struct Object *) gCurGraphNodeObject;
        if (sp1C->prevObj != NULL) {
            create_transformation_from_matrices(sp20, mtx, *gCurGraphNodeCamera->matrixPtr);
            obj_update_pos_from_parent_transformation(sp20, sp1C->prevObj);
            obj_set_gfx_pos_from_pos(sp1C->prevObj);
        }
    }
    return NULL;
}

s32 s_ai_pitch()
{
	return (o->oTimer > 45) || (o->oMoveFlags & OBJ_MOVE_HIT_EDGE); //Credit to Render96 Team	
}

void bhv_motos_anchor_mario_loop(void) {
    common_anchor_mario_behavior(150.0f, 100.0f, 64);
}

void motos_wait(void)
{
    o->oForwardVel = 0.0f;
    o->oVelY = 0.0f;
	cur_obj_init_animation_with_sound(8);

	if ( o->oDistanceToMario < 1000 )	o->oAction = 1;

}

void motos_player_search(void)
{
	if (cur_obj_check_anim_frame(13) | cur_obj_check_if_near_animation_end()) {
	cur_obj_play_sound_2(SOUND_OBJ_BULLY_WALKING);
}
		
	cur_obj_init_animation_with_sound(9);
	o->oForwardVel = 2.5f;
	cur_obj_rotate_yaw_toward(o->oAngleToMario, 0x300);
	if ( o->oDistanceToMario > 2000 )	o->oAction = 0;
	
	if ((o->oPosY < o->oHomeY - 100) & (o->oTimer >= 20)) { //Should not happen unless Light Motos is performed, or the player lures motos of the platform in SL.
			o->oAction = 9;
	}
	if ( o->oInteractStatus & INT_STATUS_GRABBED_MARIO){
		o->oAction = 2;
	 	o->oMotosUnk88 = 1;
	}
}

void motos_carry_start(void)
{
	cur_obj_init_animation_with_sound(3);
	if (cur_obj_check_if_near_animation_end()) o->oAction = 3;	
}

void motos_carry_run(void)
{
    o->oForwardVel = 10.0f;
        if (cur_obj_check_anim_frame(2)| cur_obj_check_anim_frame(11)) 
        cur_obj_play_sound_2(SOUND_OBJ_POUNDING1_HIGHPRIO);

    o->oMotosUnk100 += player_performed_grab_escape_action();
    if (o->oMotosUnk100 > 10) {
        o->oAction = 6;
        o->oInteractStatus &= ~(INT_STATUS_GRABBED_MARIO);
        o->oMotosUnk88 = 3;
        o->oMotosUnk100 = 0;
    }

    cur_obj_init_animation_with_sound(2);
    if ((s_ai_pitch()) & (o->oMotosUnk88 == 1)) {
        o->oAction = 4;
        cur_obj_play_sound_2(SOUND_OBJ_POUNDING1_HIGHPRIO);
    }
}

void motos_pitch(void)
{
	o->oForwardVel = 0.0f;
	if (o->oTimer == 0) {
	cur_obj_init_animation_with_sound(6);
			cur_obj_play_sound_2(SOUND_OBJ_BULLY_METAL);
	}
	if ( cur_obj_check_anim_frame(14) ){
		cur_obj_play_sound_2(SOUND_OBJ_UNKNOWN4);
		o->oMotosUnk88 = 2;
	}
	if ( cur_obj_check_if_near_animation_end() )	
	o->oAction = 0;

}

void motos_fly(void)
{
//   o->oForwardVel = 5.0f;
	cur_obj_init_animation_and_extend_if_at_end(5);
		if ((o->oPosY < 1000.0f)) {
			cur_obj_play_sound_2(SOUND_OBJ_BULLY_EXPLODE_2);
							cur_obj_play_sound_2(SOUND_OBJ2_LARGE_BULLY_ATTACKED);     
			o->oHealth--;
			if (o->oHealth) 
                o->oAction = 9;
            if (o->oHealth == 0) 
                o->oAction = 7;
	}
		if ((o->oFloor->type == SURFACE_BURNING) && ( o->oMoveFlags & OBJ_MOVE_LANDED)) {
			spawn_object_with_scale(o, MODEL_BURN_SMOKE, bhvBlackSmokeBowser, o->header.gfx.scale[0]);
			cur_obj_play_sound_2(SOUND_OBJ_BULLY_EXPLODE_2);
							cur_obj_play_sound_2(SOUND_OBJ2_LARGE_BULLY_ATTACKED);     
			o->oHealth--;
			if (o->oHealth) 
                o->oAction = 9;
            if (o->oHealth == 0) 
                o->oAction = 7;
	}
	if (( o->oMoveFlags & OBJ_MOVE_LANDED) && (o->oFloor->type != SURFACE_BURNING)  ) {
		
		cur_obj_play_sound_2(SOUND_OBJ2_BULLY_ATTACKED);
	o->oAction = 6;
	}

}

void motos_recover(void) {
//   o->oForwardVel = 5.0f;
if (o->oForwardVel > 0.0) { 
    o->oForwardVel -= 0.6;
}
 if (o->oTimer == 0) { cur_obj_become_intangible(); cur_obj_shake_screen(SHAKE_POS_SMALL); }
 
    if (o->oSubAction == 0) {
        
        cur_obj_init_animation_with_sound(5);
        if (o->oTimer == 10) {
            cur_obj_play_sound_2(SOUND_OBJ_THWOMP);
        }
        if (cur_obj_check_if_near_animation_end()) {
            
            o->oSubAction++;
        }
    } else if (o->oSubAction == 1) {
        cur_obj_init_animation_with_sound(4);
        if (cur_obj_check_if_near_animation_end()){
            cur_obj_become_tangible();
            o->oAction = 1;
        }
    }
}

void motos_recover2(void) { //Motos drops down
//   o->oForwardVel = 5.0f;
if (o->oForwardVel > 0.0) { 
    o->oForwardVel -= 0.6;
}
	if (o->oVelY > 0.0) { 
	    o->oVelY -= 1.0f;
	}
	if (o->oTimer == 0) {
		cur_obj_become_intangible();
		cur_obj_play_sound_2(SOUND_OBJ_THWOMP);
		cur_obj_init_animation_with_sound(8);
	}
	
		if (o->oPosY < (o->oHomeY + 15)){
		cur_obj_init_animation_with_sound(7);
	if ( cur_obj_check_if_near_animation_end() )	{
	cur_obj_become_tangible();
	o->oAction = 12;
		}
	}
}

void motos_returnhome(void) {
    switch (o->oSubAction) {
        case 0:
		    cur_obj_become_intangible();
            if (o->oTimer == 0)
                cur_obj_play_sound_2(SOUND_OBJ_KING_BOBOMB_JUMP);
            cur_obj_init_animation_and_extend_if_at_end(5);
            o->oMoveAngleYaw =  cur_obj_angle_to_home();
            if (o->oPosY < o->oHomeY)
                o->oVelY = 60.0f;
            else {
                arc_to_goal_pos(&o->oHomeX, &o->oPosX, 50.0f, -4.0f);
                o->oSubAction++;
				o->oMotosUnk88 = 0;
				o->oMotosUnk100 = 0;
            }
            break;
        case 1:
		cur_obj_init_animation_and_extend_if_at_end(5);
            if (o->oVelY < 0 && o->oPosY < o->oHomeY) {
                o->oPosY = o->oHomeY;
                o->oVelY = 0;
                o->oForwardVel = 0;
                o->oGravity = -4.0f;
				o->oMotosUnk88 = 0;
				o->oMotosUnk100 = 0;
                cur_obj_play_sound_2(SOUND_OBJ_KING_BOBOMB);
                cur_obj_shake_screen(SHAKE_POS_MEDIUM);
                o->oSubAction++;
            }
            break;
        case 2:
		cur_obj_init_animation(4);
		if (cur_obj_check_if_near_animation_end()) {
			cur_obj_become_tangible();
        o->oAction = 1;
		}
            break;
    }
}	

void motos_spawn_minion(s32 arg0, s32 arg1, s32 arg2, s16 arg3) {
    struct Object *mbully =
        spawn_object_abs_with_rot(o, 0, MODEL_CHILL_BULLY, bhvSmallChillBully, arg0, arg1, arg2, 0, arg3, 0);
    mbully->oBehParams2ndByte = BULLY_BP_SIZE_SMALL;
}

void motos_minions(void) {
    motos_spawn_minion(200, 1372, -4500, 0);
    motos_spawn_minion(650, 1372, -4300, 0);
    motos_spawn_minion(450, 1372, -5000, 0);

    o->header.gfx.node.flags |= GRAPH_RENDER_INVISIBLE;

    cur_obj_become_intangible();

    o->oAction = 11;
}

void motos_wait_talk(void)
{
    o->oForwardVel = 0.0f;
    o->oVelY = 0.0f;
    cur_obj_init_animation_with_sound(8);
    if (o->oSubAction == 0) {
    cur_obj_become_intangible();
    gSecondCameraFocus = o;
            if (cur_obj_can_mario_activate_textbox_2(500.0f, 100.0f)) {
            o->oSubAction++;
            seq_player_lower_volume(SEQ_PLAYER_LEVEL, 60, 40);
        }
    } else if (cur_obj_update_dialog_with_cutscene(2, 1, CUTSCENE_DIALOG, DIALOG_117)) { cur_obj_become_tangible(); o->oAction = 1;
  }
}

void motos_inactive(void) {
	
	            if (o->oBullyKBTimerAndMinionKOCounter == 3) {
                play_puzzle_jingle();
                if (o->oTimer >= 91) {
									o->oPosY = 2037.0f;
			o->header.gfx.node.flags &= ~GRAPH_RENDER_INVISIBLE;
                    o->oAction = 8;
            }
		}
}

void motos_death(void) { 
        create_sound_spawner(SOUND_OBJ_KING_WHOMP_DEATH);
        spawn_mist_particles_variable(0, 0, 200.0f);
        spawn_triangle_break_particles(20, 138, 3.0f, 4);
        cur_obj_shake_screen(SHAKE_POS_SMALL);
		cur_obj_hide();
        cur_obj_become_intangible();
        spawn_default_star(300.0f, 1500.0f, -4800.0f);
		o->oAction = 10;
}	
void motos_deactivate(void) {  //Added so motos doesn't make walking sounds after death
		cur_obj_hide();
        cur_obj_become_intangible();
}

void motos_main(void)
{
    cur_obj_update_floor_and_walls();
//cur_obj_move_using_fvel_and_gravity();    
    
    switch (o->oAction) {
    case 0:
    motos_wait();
    break;
    case 1:
    motos_player_search();
    break;
    case 2:
    motos_carry_start();
    break;
    case 3:
    motos_carry_run();
    break;
    case 4:
    motos_pitch();
    break;
    case 5:
    motos_fly();
    break;
    case 6:
    motos_recover();
    break;
    case 7:
    motos_death();
    break;
    case 8:
    motos_recover2();
    break;
    case 9:
    motos_returnhome();
    break;
    case 10:
    motos_deactivate();
    break;
    case 11:
    motos_inactive();
    break;
    case 12:
    motos_wait_talk();
    break;
    }
//    default: rmonpf(("Error objmode motos\n")); }

        cur_obj_move_standard(-78);                            /*    monky moving     */
    if (o->oDistanceToMario < 5000.0f)
        cur_obj_enable_rendering();
    else
        cur_obj_disable_rendering();
}

void s_motos(void)
{
    f32 sp2C = 10.0f;
    f32 sp28 = 25.0f;

	cur_obj_scale(2.0f);

    o->oInteractionSubtype |= INT_SUBTYPE_GRABS_MARIO;

	switch (o->oHeldState) {
        case HELD_FREE:
            motos_main();
            break;
        case HELD_HELD:
            cur_obj_unrender_and_reset_state(8, 1);
            break;
        case HELD_THROWN:
        case HELD_DROPPED:
            cur_obj_get_thrown_or_placed(sp2C, sp28, 5);
            break;
	}
    o->oInteractStatus = 0;
}