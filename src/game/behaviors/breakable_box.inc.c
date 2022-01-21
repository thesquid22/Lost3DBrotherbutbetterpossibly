// breakable_box.c.inc

void bhv_breakable_box_loop(void) {
    obj_set_hitbox(o, &sBreakableBoxHitbox);
    cur_obj_set_model(MODEL_BREAKABLE_BOX_SMALL);
    if (o->oTimer == 0)
        breakable_box_init();
    if (cur_obj_was_attacked_or_ground_pounded() != 0) {
        obj_explode_and_spawn_coins(46.0f, 1);
        create_sound_spawner(SOUND_GENERAL_BREAK_BOX);
    }
	if (cur_obj_dist_to_nearest_object_with_behavior(bhvMario) < 225.0f && gMarioState->action == ACT_CHARGE) {
		obj_explode_and_spawn_coins(80.0f, 1);
		create_sound_spawner(SOUND_GENERAL_BREAK_BOX);
	}
}
