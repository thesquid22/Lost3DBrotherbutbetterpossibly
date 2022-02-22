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
#include "actors/common0.h"

#include "make_const_nonconst.h"
#include "levels/castle_inside/header.h"

const LevelScript level_castle_inside_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _castle_inside_segment_7SegmentRomStart, _castle_inside_segment_7SegmentRomEnd), 
	LOAD_MIO0_TEXTURE(0x09, _inside_mio0SegmentRomStart, _inside_mio0SegmentRomEnd), 
	LOAD_MIO0(0x05, _group9_mio0SegmentRomStart, _group9_mio0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group9_geoSegmentRomStart, _group9_geoSegmentRomEnd), 
	LOAD_MIO0(0x06, _group15_mio0SegmentRomStart, _group15_mio0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group15_geoSegmentRomStart, _group15_geoSegmentRomEnd), 
	LOAD_MIO0(0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0xa, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_16), 
	JUMP_LINK(script_func_global_10), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_BOWSER_TRAP, castle_geo_000F18), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WATER_LEVEL_PILLAR, castle_geo_001940), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_MINUTE_HAND, castle_geo_001530), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_HOUR_HAND, castle_geo_001548), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_PENDULUM, castle_geo_001518), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_METAL_DOOR, metal_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR_UNUSED, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR_UNUSED, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_0_STARS, castle_door_0_star_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_1_STAR, castle_door_1_star_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_3_STARS, castle_door_3_stars_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_KEY_DOOR, key_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_BLUE, castle_geo_blue_star_door), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_RED, castle_geo_red_star_door), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_GREEN, castle_geo_green_star_door), 
	LOAD_MODEL_FROM_GEO(MODEL_COURTYARD_WOODEN_DOOR, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_TRAMPOLINE, springboard_top_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_TRAMPOLINE_CENTER, springboard_spring_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_TRAMPOLINE_BASE, springboard_bottom_geo), 

    AREA(1, castle_inside_area_1),       //Dark Hall Way!!!
        //Death node eventually?
        WARP_NODE(/*id*/ 0x01, /*destLevel*/ LEVEL_CASTLE_COURTYARD, /*destArea*/ 0x01, /*destNode*/ 0x02, /*flags*/ WARP_NO_CHECKPOINT), //To Courtyard Spawn
        WARP_NODE(/*id*/ 0x03, /*destLevel*/ LEVEL_CASTLE,           /*destArea*/ 0x02, /*destNode*/ 0x04, /*flags*/ WARP_NO_CHECKPOINT), //To Area1 (Pre1stFloor)
        OBJECT(/*model*/ MODEL_COURTYARD_WOODEN_DOOR, /*pos*/  -3, -414,  4489, /*angle*/ 0, 0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvDoorWarp), //Door to Courtyard Spawn
		OBJECT(/*model*/ MODEL_CASTLE_CASTLE_DOOR,    /*pos*/  -2, -412, -4044, /*angle*/ 0, 0, 0, /*behParam*/ 0x00030000, /*beh*/ bhvDoorWarp), //Door to Area1 (Pre1stFloor)
        TERRAIN(castle_inside_area_1_collision),
        MACRO_OBJECTS(castle_inside_area_1_macro_objs),
        STOP_MUSIC(0),
        MARIO_POS(0x01, -92, -414, 4137, 10150),
        TERRAIN_TYPE(TERRAIN_GRASS),
    END_AREA(),

    AREA(2, castle_inside_area_2),       //Pre 1st Floor!!!
	    PAINTING_WARP_NODE(/*id*/ 0x00, /*destLevel*/ LEVEL_BOB, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
        PAINTING_WARP_NODE(/*id*/ 0x01, /*destLevel*/ LEVEL_BOB, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
        PAINTING_WARP_NODE(/*id*/ 0x02, /*destLevel*/ LEVEL_BOB, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
       PAINTING_WARP_NODE(/*id*/ 0x09, /*destLevel*/ LEVEL_JRB, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ 0x0A, /*destLevel*/ LEVEL_JRB, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ 0x0B, /*destLevel*/ LEVEL_JRB, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
        PAINTING_WARP_NODE(/*id*/ 0x06, /*destLevel*/ LEVEL_WF, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
        PAINTING_WARP_NODE(/*id*/ 0x07, /*destLevel*/ LEVEL_WF, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
        PAINTING_WARP_NODE(/*id*/ 0x08, /*destLevel*/ LEVEL_WF, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ 0x03, /*destLevel*/ LEVEL_CCM, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ 0x04, /*destLevel*/ LEVEL_CCM, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ 0x05, /*destLevel*/ LEVEL_CCM, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
        //PAUSE EXIT
		WARP_NODE(/*id*/ 0x1F, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x1F, /*flags*/ WARP_NO_CHECKPOINT),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/ -1191,  -628,   0, /*angle*/ 0,  90, 0, /*behParam*/ 0x001F0000, /*beh*/ bhvInstantActiveWarp),
		OBJECT(/*model*/ MODEL_NONE, /*pos*/ -1191,  -628,   0, /*angle*/ 0,  90, 0, /*behParam*/ 0x001E0000, /*beh*/ bhvInstantActiveWarp),
		WARP_NODE(/*id*/ 0x1E, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x1E, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0x20, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x20, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0x21, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x21, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0x22, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x22, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0x23, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x23, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0x24, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x24, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0x25, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x25, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0x26, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x26, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0x27, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x27, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0x28, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x28, /*flags*/ WARP_NO_CHECKPOINT),


        // Warp nodes need to be fixed
		//BOB
        WARP_NODE(/*id*/ 0x32, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x32, /*flags*/ WARP_NO_CHECKPOINT),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/ 1790,-527,  -1029, /*angle*/ 0, 90, 0, /*behParam*/ 0x00320000, /*beh*/ bhvPaintingStarCollectWarp),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/  1790,-527,  -1029, /*angle*/ 0, 90, 0, /*behParam*/ 0x00640000, /*beh*/ bhvPaintingDeathWarp),
		WARP_NODE(/*id*/ 0x64, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x64, /*flags*/ WARP_NO_CHECKPOINT),

		//WF
		OBJECT(/*model*/ MODEL_NONE, /*pos*/ -949, 97,  -3880, /*angle*/ 0,   180, 0, /*behParam*/ 0x00340000, /*beh*/ bhvPaintingStarCollectWarp),
		WARP_NODE(/*id*/ 0x34, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x34, /*flags*/ WARP_NO_CHECKPOINT),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/  -949, 97,  -3880, /*angle*/ 0,   180, 0, /*behParam*/ 0x00660000, /*beh*/ bhvPaintingDeathWarp),
        WARP_NODE(/*id*/ 0x66, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x66, /*flags*/ WARP_NO_CHECKPOINT),

		//CCM
		OBJECT(/*model*/ MODEL_NONE, /*pos*/ -931, -278,  3595, /*angle*/ 0,   0, 0, /*behParam*/ 0x00330000, /*beh*/ bhvPaintingStarCollectWarp),
		WARP_NODE(/*id*/ 0x33, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x33, /*flags*/ WARP_NO_CHECKPOINT),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/   -931, -278,  3595, /*angle*/ 0,   0, 0, /*behParam*/ 0x00670000, /*beh*/ bhvPaintingDeathWarp),
        WARP_NODE(/*id*/ 0x67, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x67, /*flags*/ WARP_NO_CHECKPOINT),

		//WDW
		OBJECT(/*model*/ MODEL_NONE, /*pos*/ -931, -278,  3595, /*angle*/ 0,   0, 0, /*behParam*/ 0x00330000, /*beh*/ bhvPaintingStarCollectWarp),
		WARP_NODE(/*id*/ 0x37, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x33, /*flags*/ WARP_NO_CHECKPOINT),
        OBJECT(/*model*/ MODEL_NONE, /*pos*/   -931, -278,  3595, /*angle*/ 0,   0, 0, /*behParam*/ 0x00670000, /*beh*/ bhvPaintingDeathWarp),
        WARP_NODE(/*id*/ 0x68, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x67, /*flags*/ WARP_NO_CHECKPOINT),


        WARP_NODE(/*id*/ 0x04, /*destLevel*/ LEVEL_CASTLE,         /*destArea*/ 0x01, /*destNode*/ 0x03, /*flags*/ WARP_NO_CHECKPOINT), //to Area1 (DarkHallway)
        WARP_NODE(/*id*/ 0x05, /*destLevel*/ LEVEL_CASTLE_GROUNDS, /*destArea*/ 0x01, /*destNode*/ 0x00, /*flags*/ WARP_NO_CHECKPOINT), //to Castle Grounds
        WARP_NODE(/*id*/ 0x06, /*destLevel*/ LEVEL_CASTLE_GROUNDS, /*destArea*/ 0x01, /*destNode*/ 0x01, /*flags*/ WARP_NO_CHECKPOINT), //to Castle Grounds 
		WARP_NODE(/*id*/ 0x07, /*destLevel*/ LEVEL_CASTLE,         /*destArea*/ 0x03, /*destNode*/ 0x08, /*flags*/ WARP_NO_CHECKPOINT), //to Area3 (Main 1st Floor)
		WARP_NODE(/*id*/ 0x09, /*destLevel*/ LEVEL_CASTLE,         /*destArea*/ 0x03, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT), //to Area3 (Main 1st Floor)
        TERRAIN(castle_inside_area_2_collision),
        MACRO_OBJECTS(castle_inside_area_2_macro_objs),
        OBJECT(/*model*/ MODEL_CASTLE_CASTLE_DOOR, /*pos*/ 3412, -806,   2, /*angle*/ 0,  90, 0, /*behParam*/ 0x00040000, /*beh*/ bhvDoorWarp), //Door to Area 1 (DarkHallway)		
        OBJECT(/*model*/ MODEL_CASTLE_CASTLE_DOOR, /*pos*/ -933, -400,  1923, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvDoor), //to DDD room
        OBJECT(/*model*/ MODEL_CASTLE_CASTLE_DOOR, /*pos*/ -933, -400, -1924, /*angle*/ 0,   0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvDoor), //to SS room
        OBJECT(/*model*/ MODEL_CASTLE_CASTLE_DOOR, /*pos*/ 198, -628,  1030, /*angle*/ 0, 90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvDoor), //to LLL room
        OBJECT(/*model*/ MODEL_CASTLE_CASTLE_DOOR, /*pos*/  196, -628, -1029, /*angle*/ 0, -90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvDoor), //to WF room
        OBJECT(/*model*/ MODEL_CASTLE_CASTLE_DOOR, /*pos*/ 0, -628,   615, /*angle*/ 0, -36, 0, /*behParam*/ 0x00000000, /*beh*/ bhvDoor), //to main inside
        OBJECT(/*model*/ MODEL_CASTLE_CASTLE_DOOR, /*pos*/ 0, -628,    -616, /*angle*/ 0,  36, 0, /*behParam*/ 0x00000000, /*beh*/ bhvDoor), //to main inside
        SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_INSIDE_CASTLE),
        TERRAIN_TYPE(TERRAIN_GRASS),
    END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(1, 0, 0, 0, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};


