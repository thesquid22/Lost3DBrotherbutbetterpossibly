#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/jrb/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_jrb_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _jrb_segment_7SegmentRomStart, _jrb_segment_7SegmentRomEnd), 
	LOAD_MIO0(0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd), 
	LOAD_MIO0_TEXTURE(0x09, _water_mio0SegmentRomStart, _water_mio0SegmentRomEnd), 
    LOAD_MIO0(        /*seg*/ 0x0A, _wdw_skybox_mio0SegmentRomStart, _wdw_skybox_mio0SegmentRomEnd),
	LOAD_MIO0(0x05, _group4_mio0SegmentRomStart, _group4_mio0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group4_geoSegmentRomStart, _group4_geoSegmentRomEnd), 
	LOAD_MIO0(0x06, _group13_mio0SegmentRomStart, _group13_mio0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group13_geoSegmentRomStart, _group13_geoSegmentRomEnd), 
	LOAD_MIO0(0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_5), 
	JUMP_LINK(script_func_global_14), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_LEFT_HALF_PART, jrb_geo_000978), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_BACK_LEFT_PART, jrb_geo_0009B0), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_RIGHT_HALF_PART, jrb_geo_0009E8), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_BACK_RIGHT_PART, jrb_geo_000A00), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_SUNKEN_SHIP, jrb_geo_000990), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_SUNKEN_SHIP_BACK, jrb_geo_0009C8), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_ROCK, jrb_geo_000930), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_SLIDING_BOX, jrb_geo_000960), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_FALLING_PILLAR, jrb_geo_000900), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_FALLING_PILLAR_BASE, jrb_geo_000918), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_FLOATING_PLATFORM, jrb_geo_000948), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, jrb_area_1),
        WARP_NODE(/*id*/ 0x0A, /*destLevel*/ LEVEL_JRB, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF0, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x33, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF1, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x67, /*flags*/ WARP_NO_CHECKPOINT),
		TERRAIN(jrb_area_1_collision),
		MACRO_OBJECTS(jrb_area_1_macro_objs),
		OBJECT(/*model*/ MODEL_NONE, /*pos*/  -3933, -471,  7661, /*angle*/ 0, 180, 0, /*behParam*/ 0x000A0000, /*beh*/ bhvSwimmingWarp), //Luigi Spawn

		OBJECT(/*model*/ MODEL_NONE,/*pos*/ 1180, -1107,  -7619, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFishGroup), //oxygen bubbles
		OBJECT(/*model*/ MODEL_NONE,/*pos*/ -1597, 665,  -8666, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFishGroup), 
		OBJECT(/*model*/ MODEL_NONE, /*pos*/ -1597, 746,  -8666, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvJetStream),
	    OBJECT(/*model*/ MODEL_NONE, /*pos*/ 1065, 12, -7767, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvJetStream),

		OBJECT_WITH_ACTS(/*model*/ MODEL_NONE, /*pos*/ 1180, -928,  -7619, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvJetStreamRingSpawner, /*acts*/ ALL_ACTS), // 1 THE SUBMARINE'S TREASURE
		OBJECT_WITH_ACTS(/*model*/ MODEL_UNAGI, /*pos*/ -1627, 1133, -11185, /*angle*/ 0, 0, 0, /*behParam*/ 0x01010000, /*beh*/ bhvUnagi, /*acts*/ ACT_2), // 2 SINISTER GUEST IN THE TRENCH
        OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,  /*pos*/ -6869, -2626, 6611, /*angle*/ 0,   96, 0, /*behParam*/ 0x02000000, /*beh*/ bhvTreasureChestsJrb, /*acts*/ ACT_3), // 3 The mystery of the hole
		OBJECT_WITH_ACTS(/*model*/ MODEL_MANTA_RAY, /*pos*/ -1557, 0, 5157, /*angle*/ 0, 0, 0, /*behParam*/ 0x04000000, /*beh*/ bhvMantaRay,       /*acts*/ ACT_5), // 5 The manta want to play

        OBJECT(/*model*/ MODEL_NONE,         /*pos*/ -4043,  -698,  -3245, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFewBlueFishSpawner),
        OBJECT(/*model*/ MODEL_NONE,         /*pos*/ -3080, -2664, 8091, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvFewBlueFishSpawner),
        OBJECT(/*model*/ MODEL_NONE,         /*pos*/ -2848,1132, -8990, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvChirpChirp),
        OBJECT(/*model*/ MODEL_NONE,         /*pos*/ -3966,-299, 5058, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvChirpChirp),

        OBJECT(/*model*/ MODEL_NONE,         /*pos*/ -3470, -234,  6167, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvManyBlueFishSpawner),
        OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,/*pos*/ -5753, 1546,   -10481,/*angle*/ 0, 0, 0,/*behParam*/ 0x03000000,/*beh*/ bhvHiddenRedCoinStar,/*acts*/ ALL_ACTS), // 4 Deep Dive for 8 Red Coins
        OBJECT(/*model*/ MODEL_SUSHI,        /*pos*/ -3970,  -4820, 6376, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSushiShark),

        // Main Zone
	    OBJECT(/*model*/ MODEL_WATER_MINE, /*pos*/  -5621,-2230, 4348, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowserBomb),
		OBJECT(/*model*/ MODEL_WATER_MINE, /*pos*/  -1989,-2532,5017, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowserBomb),
		OBJECT(/*model*/ MODEL_WATER_MINE, /*pos*/  -1158,-2170, 6773, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowserBomb),
		OBJECT(/*model*/ MODEL_WATER_MINE, /*pos*/  -3050,-2199, 8185, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowserBomb),




        // Hole
		OBJECT(/*model*/ MODEL_WATER_MINE, /*pos*/  -4011,-567, 1618, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowserBomb),
		OBJECT(/*model*/ MODEL_WATER_MINE, /*pos*/  -4247,-1085, 1023, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowserBomb),
		OBJECT(/*model*/ MODEL_WATER_MINE, /*pos*/  -3521,-301, 527, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowserBomb),
		OBJECT(/*model*/ MODEL_WATER_MINE, /*pos*/  -4452,-361, -594, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowserBomb),
		
	    OBJECT(/*model*/ MODEL_WATER_MINE, /*pos*/ -4450,-810,1515, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowserBomb),
	    OBJECT(/*model*/ MODEL_WATER_MINE, /*pos*/ -4358,-1326,1595, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowserBomb),
	
	    OBJECT(/*model*/ MODEL_WATER_MINE, /*pos*/ -3873,-153,1418, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowserBomb),
	    OBJECT(/*model*/ MODEL_WATER_MINE, /*pos*/-4519,0,1062, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowserBomb),
	   
	    
	    OBJECT(/*model*/ MODEL_WATER_MINE, /*pos*/-4011,-567,1618, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowserBomb),
	    OBJECT(/*model*/ MODEL_WATER_MINE, /*pos*/-3754,-413,925, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowserBomb),
	    OBJECT(/*model*/ MODEL_WATER_MINE, /*pos*/-4261,-581,923, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowserBomb),
	    OBJECT(/*model*/ MODEL_WATER_MINE, /*pos*/-3499,-336,1543, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowserBomb),
	    OBJECT(/*model*/ MODEL_WATER_MINE, /*pos*/-3524,-780,408, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowserBomb),

	    OBJECT(/*model*/ MODEL_WATER_MINE, /*pos*/-4200,-290,1273, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowserBomb),
	    OBJECT(/*model*/ MODEL_WATER_MINE, /*pos*/-4375,-609,1405, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowserBomb),
	    OBJECT(/*model*/ MODEL_WATER_MINE, /*pos*/-3623,-994,833, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowserBomb),
	    OBJECT(/*model*/ MODEL_WATER_MINE, /*pos*/-3280,-688,1008, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowserBomb),
	    OBJECT(/*model*/ MODEL_WATER_MINE, /*pos*/-3950,-779,980, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowserBomb),
		OBJECT(/*model*/ MODEL_WATER_MINE, /*pos*/  -3989,-489, 425, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowserBomb),
		OBJECT(/*model*/ MODEL_WATER_MINE, /*pos*/  -3573,-686, 688, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowserBomb),
	
	    OBJECT(/*model*/ MODEL_WATER_MINE, /*pos*/  -3107,-652, 1440, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowserBomb),
	    OBJECT(/*model*/ MODEL_WATER_MINE, /*pos*/  -3808,-112, 845, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowserBomb),
	    OBJECT(/*model*/ MODEL_WATER_MINE, /*pos*/  -3883, 104, 1078, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowserBomb),
	 

	    OBJECT(/*model*/ MODEL_WATER_MINE, /*pos*/  -3902,-1186, 1493, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowserBomb),
		OBJECT(/*model*/ MODEL_WATER_MINE, /*pos*/  -4766,-596, 1185, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowserBomb),

		OBJECT(/*model*/ MODEL_WATER_MINE, /*pos*/  -4759,-1040, 1271, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowserBomb),
	    OBJECT(/*model*/ MODEL_WATER_MINE, /*pos*/-4123,-198,653, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowserBomb),
	    OBJECT(/*model*/ MODEL_WATER_MINE, /*pos*/-3153,-214,1440, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowserBomb),
	    OBJECT(/*model*/ MODEL_WATER_MINE, /*pos*/  -3560, -220, 800, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowserBomb),
	    OBJECT(/*model*/ MODEL_WATER_MINE, /*pos*/-3213,-1086,1222, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowserBomb),

	
		OBJECT(/*model*/ MODEL_WATER_MINE, /*pos*/  -4484,-241, 1223, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowserBomb),
		OBJECT(/*model*/ MODEL_WATER_MINE, /*pos*/  -3864,-967,332, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowserBomb),
		OBJECT(/*model*/ MODEL_WATER_MINE, /*pos*/  -4388,-783,100, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBowserBomb),

		SET_BACKGROUND_MUSIC(0x00, SEQ_WATER_SHOSHINKAI),
		SHOW_DIALOG(0x00, DIALOG_008),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(1, 0, 0, 0, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
