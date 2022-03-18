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
#include "levels/hmc/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_hmc_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _hmc_segment_7SegmentRomStart, _hmc_segment_7SegmentRomEnd), 
	LOAD_MIO0_TEXTURE(0x09, _cave_mio0SegmentRomStart, _cave_mio0SegmentRomEnd), 
	LOAD_MIO0(0x05, _group6_mio0SegmentRomStart, _group6_mio0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group6_geoSegmentRomStart, _group6_geoSegmentRomEnd), 
	LOAD_MIO0(0x06, _group17_mio0SegmentRomStart, _group17_mio0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd), 
	LOAD_MIO0(0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0xa, _cloud_floor_skybox_mio0SegmentRomStart, _cloud_floor_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_7), 
	JUMP_LINK(script_func_global_18), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_WOODEN_DOOR, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_DOOR, metal_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_HAZY_MAZE_DOOR, hazy_maze_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_PLATFORM, hmc_geo_0005A0), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_ARROW_PLATFORM, hmc_geo_0005B8), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_ELEVATOR_PLATFORM, hmc_geo_0005D0), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_ROLLING_ROCK, hmc_geo_000548), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_ROCK_PIECE, hmc_geo_000570), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_ROCK_SMALL_PIECE, hmc_geo_000588), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_RED_GRILLS, hmc_geo_000530), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, hmc_area_1),
        WARP_NODE(/*id*/ 0x0A, /*destLevel*/ LEVEL_HMC, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF0, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x38, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF1, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x68, /*flags*/ WARP_NO_CHECKPOINT),

        //Luigi Spawn
		OBJECT(/*model*/ MODEL_NONE,              /*pos*/  8702, 1008, 2668, /*angle*/ 0,  202, 0, /*behParam*/ 0x000A0000, /*beh*/ bhvSpinAirborneWarp), //SpinAirborne Spawn

        //Enemies
		OBJECT_WITH_ACTS(/*model*/ MODEL_BOO,/*pos*/  -2912,  -2316,  -11872, /*angle*/ 0, 0, 0, /*behParam*/ 0x03000000, /*beh*/ bhvBalconyBigBoo,        /*acts*/ ACT_5), // 5 The dead come back to life!
		OBJECT_WITH_ACTS(/*model*/ MODEL_BOO,/*pos*/ -3904,  -2084, -853, /*angle*/ 0, 171, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvBoo,/*acts*/ ACT_4 | ACT_5),
		OBJECT_WITH_ACTS(/*model*/ MODEL_BOO,/*pos*/ 867,   -1784,  1814, /*angle*/ 0, 91, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvBoo,/*acts*/ ALL_ACTS),
	    OBJECT_WITH_ACTS(/*model*/ MODEL_BOO,/*pos*/ -4680,   -2176,  -394, /*angle*/ 0, 161, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvBoo,/*acts*/ ACT_1 | ACT_3 | ACT_4 | ACT_5 | ACT_6),

        OBJECT_WITH_ACTS(/*model*/ MODEL_BOO,/*pos*/ -2544,   -2016, -4539, /*angle*/ 0, 0, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvBoo,/*acts*/ ACT_1 | ACT_3 | ACT_4 | ACT_5 | ACT_6),

        OBJECT(/*model*/ MODEL_BLARGG,/*pos*/  -1836,   -228, 1004, /*angle*/ 0, 78, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBlargg),
        //OBJECT(/*model*/ MODEL_BLARGG,/*pos*/  -4656,  130,  -6615, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBlargg),
        OBJECT(/*model*/ MODEL_BLARGG,/*pos*/  124,  130,  -7625, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBlargg),
        //OBJECT(/*model*/ MODEL_BLARGG,/*pos*/  -5260,  -2762,  -8671, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBlargg),
        //OBJECT(/*model*/ MODEL_BLARGG,/*pos*/  -1619,  -2762,  -7955, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvBlargg),
        OBJECT_WITH_ACTS(/*model*/ MODEL_NONE, /*pos*/  -1924, -2506,  -12179, /*angle*/ 0, 18, 0, /*behParam*/ 0x05010000, /*beh*/ bhvMrI, /*acts*/ ACT_6), // 6 sinister eyes below
        OBJECT(/*model*/ MODEL_DL_MONTY_MOLE_HOLE, /*pos*/ 8256, 88, -2075, /*angle*/ 0,  0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvMontyMoleHole),


        OBJECT(/*model*/ MODEL_MONTY_MOLE,         /*pos*/      3070, -153, -434, /*angle*/ 0,   0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvMontyMole),
        OBJECT(/*model*/ MODEL_DL_MONTY_MOLE_HOLE, /*pos*/ 3070, -153, -434, /*angle*/ 0,   165, 0, /*behParam*/ 0x00000000, /*beh*/ bhvMontyMoleHole),
       

        //Miscellaneous 
        OBJECT(/*model*/ MODEL_NONE,/*pos*/  3632,  183,   -3548, /*angle*/ 0, 35, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvFlamethrower),
		 OBJECT(/*model*/ MODEL_NONE,/*pos*/  4672,  183,   -4276, /*angle*/ 0, 35, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvFlamethrower),
        OBJECT(/*model*/ MODEL_NONE,/*pos*/  3255,  -1732,  1845,/*angle*/  0,   0, 0, /*behParam*/ 0x00D20000, /*beh*/ bhvPoleGrabbing), //Grabbing Pole

       OBJECT(/*model*/ MODEL_RED_FLAME,                  /*pos*/  2538,  31, 2201, /*angle*/ 0, 0, 0,  /*behParam*/ 0x00000000, /*beh*/ bhvFlame),
       OBJECT(/*model*/ MODEL_RED_FLAME,                  /*pos*/  5927,  348, -3858, /*angle*/ 0, 0, 0,  /*behParam*/ 0x00000000, /*beh*/ bhvFlame),

        //Stars
        OBJECT(/*model*/ MODEL_STAR,    /*pos*/ 2199,   698, -6344, /*angle*/ 0,   0, 0, /*behParam*/ 0x02000000, /*beh*/ bhvStar),    //3 over the lava river
		OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,/*pos*/ 6420, 194,  -5196, /*angle*/ 0, 0, 0, /*behParam*/ 0x04000000, /*beh*/ bhvHiddenRedCoinStar, /*acts*/ ALL_ACTS), //4 8 RED COINS SCATTERED OVER THE FORTRESS
        OBJECT(/*model*/ MODEL_STAR,    /*pos*/ -4151,   112, 785, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvStar),    //5 DON'T DISTURB THE MAGMATIC DINOSAUR


        //Controllable Platform Zone
		OBJECT(/*model*/ MODEL_HMC_METAL_PLATFORM,    /*pos*/  9387,  58, -2772, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvControllablePlatform), // Elevator Madness
        OBJECT(/*model*/ MODEL_NONE,               /*pos*/  13872, 300,   2000, /*angle*/ 0, 180, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvFlamethrower),
        OBJECT(/*model*/ MODEL_NONE,               /*pos*/  11234, 290,   -800, /*angle*/ 0, 180, 0,   /*behParam*/ 0x00000000, /*beh*/ bhvFlamethrower),

        OBJECT(/*model*/ MODEL_HMC_METAL_DOOR, /*pos*/  6482, 88, -3993, /*angle*/ 0, 317, 0, /*behParam*/ 0x00000000, /*beh*/ bhvDoor), //to WF room

        OBJECT(/*model*/ MODEL_HMC_METAL_DOOR, /*pos*/  213, -1894, 1824, /*angle*/ 0, 90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvDoor), //to WF room
        OBJECT(/*model*/ MODEL_HMC_METAL_DOOR, /*pos*/  694, -153, -1057, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvDoor), //to WF room
        OBJECT(/*model*/ MODEL_HMC_METAL_DOOR, /*pos*/  7878, 0, 1221, /*angle*/ 0, 31, 0, /*behParam*/ 0x00000000, /*beh*/ bhvDoor), //to WF room

		TERRAIN(hmc_area_1_collision),





		
		MACRO_OBJECTS(hmc_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_UNDERGROUND),
		SHOW_DIALOG(0x00, DIALOG_001),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(1, 202, 8702, 0, 2668),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
