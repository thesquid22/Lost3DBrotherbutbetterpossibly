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

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/bob/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_bob_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0(        /*seg*/ 0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _generic_mio0SegmentRomStart, _generic_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x0A, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x05, _group3_mio0SegmentRomStart, _group3_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0C, _group3_geoSegmentRomStart,  _group3_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x06, _group14_mio0SegmentRomStart, _group14_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0D, _group14_geoSegmentRomStart,  _group14_geoSegmentRomEnd),
    LOAD_MIO0(        /*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW(         /*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_4),
    JUMP_LINK(script_func_global_15),
    LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE,      bubbly_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_BOB_CHAIN_CHOMP_GATE, bob_geo_000440),
    LOAD_MODEL_FROM_GEO(MODEL_BOB_SEESAW_PLATFORM,  bob_geo_000458),
    LOAD_MODEL_FROM_GEO(MODEL_BOB_BARS_GRILLS,      bob_geo_000470),
    LOAD_MODEL_FROM_GEO(MODEL_TRAMPOLINE, springboard_top_geo),
    LOAD_MODEL_FROM_GEO(MODEL_TRAMPOLINE_CENTER, springboard_spring_geo),
    LOAD_MODEL_FROM_GEO(MODEL_TRAMPOLINE_BASE, springboard_bottom_geo),
    //LOAD_MODEL_FROM_GEO(MODEL_CASTLE_METAL_DOOR, metal_door_geo), 

	AREA(1, bob_area_1),
        WARP_NODE(/*id*/ 0x0A, /*destLevel*/ LEVEL_BOB, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF0, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x32, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ 0xF1, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 0x02, /*destNode*/ 0x64, /*flags*/ WARP_NO_CHECKPOINT),
        // Objects
        OBJECT(/*model*/ MODEL_NONE,              /*pos*/  -976, -1103,  4477, /*angle*/ 0,  90, 0, /*behParam*/ 0x000A0000, /*beh*/ bhvSpinAirborneWarp), //SpinAirborne Spawn
        OBJECT_WITH_ACTS(/*model*/ MODEL_STAR,    /*pos*/  2230,  2023, -4008, /*angle*/ 0,   0, 0, /*behParam*/ 0x01000000, /*beh*/ bhvStar,              /*acts*/ ALL_ACTS), //2 PRECISE JUMP TO THE FORTRESS
        OBJECT_WITH_ACTS(/*model*/ MODEL_STAR,    /*pos*/  -5373,     3, -7070, /*angle*/ 0,   0, 0, /*behParam*/ 0x04000000, /*beh*/ bhvStar,              /*acts*/ ACT_5),    //5 HOVERING OVER THE FLYING ISLANDS
        OBJECT_WITH_ACTS(/*model*/ MODEL_NONE,    /*pos*/   350, -1712,  4048, /*angle*/ 0,   0, 0, /*behParam*/ 0x03000000, /*beh*/ bhvHiddenRedCoinStar, /*acts*/ ALL_ACTS), //4 8 RED COINS SCATTERED OVER THE FORTRESS
        OBJECT(/*model*/ MODEL_NONE,              /*pos*/   274,   460,  1513,/*angle*/  0,   0, 0, /*behParam*/ 0x00610000, /*beh*/ bhvPoleGrabbing),     //Grabbing Pole
        OBJECT_WITH_ACTS(/*model*/ MODEL_BOBOMB_BUDDY,   /*pos*/ 2460, -282,  -6735, /*angle*/ 0, 0, 0,   /*behParam*/ DIALOG_002 << 16, /*beh*/ bhvBobombBuddy,   /*acts*/ ACT_6), //Easter Egg Buddy

        // Enemies (some in *macro.inc.c*)
        OBJECT(/*model*/ MODEL_WHOMP,             /*pos*/   3449, -1155, -400, /*angle*/ 0, 0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvSmallWhomp),         //Whomp
        OBJECT_WITH_ACTS(/*model*/ MODEL_PIRANHA_PLANT, /*pos*/  1422,  330,  -420, /*angle*/ 0,    0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvFirePiranhaPlant, /*acts*/ ACT_1), //1 PRUNE THE PIRANHA PLANTS
        OBJECT_WITH_ACTS(/*model*/ MODEL_PIRANHA_PLANT, /*pos*/  -742,  330, -2694, /*angle*/ 0,    0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvFirePiranhaPlant, /*acts*/ ACT_1), //1 PRUNE THE PIRANHA PLANTS
        OBJECT_WITH_ACTS(/*model*/ MODEL_PIRANHA_PLANT, /*pos*/ -1904,  330, -3449, /*angle*/ 0,    0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvFirePiranhaPlant, /*acts*/ ACT_1), //1 PRUNE THE PIRANHA PLANTS
        OBJECT_WITH_ACTS(/*model*/ MODEL_PIRANHA_PLANT, /*pos*/  1442,  485,  2461, /*angle*/ 0,    0, 0, /*behParam*/ 0x00010000, /*beh*/ bhvFirePiranhaPlant, /*acts*/ ACT_1), //1 PRUNE THE PIRANHA PLANTS
        OBJECT(/*model*/ MODEL_PIRANHA_PLANT,           /*pos*/ 4056,  -1974,  4309, /*angle*/ 0,  -90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvPiranhaPlant), //Normal sleepy PP
        OBJECT(/*model*/ MODEL_PIRANHA_PLANT,           /*pos*/ 3467,  -2265,  -1934, /*angle*/ 0,  90, 0, /*behParam*/ 0x00000000, /*beh*/ bhvPiranhaPlant), //Normal sleepy PP
        OBJECT(/*model*/ MODEL_PIRANHA_PLANT,           /*pos*/ -1067, -1206,  2000, /*angle*/ 0,  0, 0, /*behParam*/ 0x00000000, /*beh*/ bhvPiranhaPlant), //Normal sleepy PP
        OBJECT_WITH_ACTS(/*model*/ MODEL_KING_BOBOMB,   /*pos*/  -757, 1354, -1960, /*angle*/ 0,  192, 0, /*behParam*/ 0x05000000, /*beh*/ bhvKingBobomb,       /*acts*/ ACT_6), //6 FIGHT WITH THE KING BOB_OMB

		TERRAIN(bob_area_1_collision),
		MACRO_OBJECTS(bob_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		SHOW_DIALOG(0x00, DIALOG_000),
		TERRAIN_TYPE(TERRAIN_STONE),
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(1, 0, 0, 0, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
