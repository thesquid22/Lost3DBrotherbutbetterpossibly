#include <ultra64.h>
#include "sm64.h"
#include "geo_commands.h"

#include "game/level_geo.h"
#include "game/geo_misc.h"
#include "game/camera.h"
#include "game/moving_texture.h"
#include "game/screen_transition.h"
#include "game/paintings.h"
#include "menu/debug_level_select.h"
#include "menu/intro_geo.h"

#include "make_const_nonconst.h"

#include "levels/intro/header.h"

// 0x0E0002D0
const GeoLayout intro_geo_0002D0[] = {
   GEO_NODE_SCREEN_AREA(0, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
   GEO_OPEN_NODE(),
      GEO_ZBUFFER(0),
      GEO_OPEN_NODE(),
         GEO_NODE_ORTHO(100),
         GEO_OPEN_NODE(),
            GEO_BACKGROUND_COLOR(0x0001),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
      GEO_ZBUFFER(1),
      GEO_OPEN_NODE(),
         GEO_CAMERA_FRUSTUM(45, 128, 16384),
         GEO_OPEN_NODE(),
            GEO_CAMERA(0, 0, 0, 3200, 0, 0, 0, 0x00000000),
            GEO_OPEN_NODE(),
               GEO_ASM(0, geo_intro_super_mario_64_logo),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
      GEO_ZBUFFER(0),
      GEO_OPEN_NODE(),
         GEO_ASM(0, geo_intro_tm_copyright),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};

// 0x0E00035C
const GeoLayout intro_geo_mario_head_regular[] = {
   GEO_NODE_SCREEN_AREA(0, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
   GEO_OPEN_NODE(),
      GEO_ZBUFFER(0),
      GEO_OPEN_NODE(),
         GEO_NODE_ORTHO(100),
         GEO_OPEN_NODE(),
            GEO_ASM(0, geo_intro_regular_backdrop),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
      GEO_ZBUFFER(1),
      GEO_OPEN_NODE(),
         GEO_CAMERA_FRUSTUM(45, 128, 16384),
         GEO_OPEN_NODE(),
            GEO_CAMERA(0, 0, 0, 1200, 0, 0, 0, 0x00000000),
            GEO_OPEN_NODE(),
		         GEO_DISPLAY_LIST(1, title_mario_title_mesh),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};


// 0x0E0003B8
const GeoLayout intro_geo_mario_head_dizzy[] = {
   GEO_NODE_SCREEN_AREA(0, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
   GEO_OPEN_NODE(),
      GEO_ZBUFFER(0),
      GEO_OPEN_NODE(),
         GEO_NODE_ORTHO(100),
         GEO_OPEN_NODE(),
            GEO_ASM(0, geo_intro_regular_backdrop),
#ifdef VERSION_SH
            GEO_ASM(0, geo_intro_face_easter_egg),
#endif
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
      GEO_ZBUFFER(1),
      GEO_OPEN_NODE(),
         GEO_CAMERA_FRUSTUM(45, 128, 16384),
         GEO_OPEN_NODE(),
            GEO_ASM(3, geo_draw_mario_head_goddard),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
#ifdef VERSION_SH
      GEO_ZBUFFER(0),
      GEO_OPEN_NODE(),
         GEO_ASM(1, geo_intro_rumble_pak_graphic),
      GEO_CLOSE_NODE(),
#endif
   GEO_CLOSE_NODE(),
   GEO_END(),
};

// 0x0E000414
const GeoLayout intro_geo_000414[] = {
   GEO_NODE_SCREEN_AREA(0, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
   GEO_OPEN_NODE(),
      GEO_ZBUFFER(0),
      GEO_OPEN_NODE(),
         GEO_NODE_ORTHO(100),
         GEO_OPEN_NODE(),
            GEO_ASM(0, geo_intro_regular_backdrop),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
      GEO_ZBUFFER(1),
      GEO_OPEN_NODE(),
         GEO_CAMERA_FRUSTUM(45, 128, 16384),
         GEO_OPEN_NODE(),
            GEO_CAMERA(0, 0, 0, 1200, 0, 0, 0, 0x00000000),
            GEO_OPEN_NODE(),
			   GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE,  -925, -340,-2000, RCP_TitleLeft1),
			   GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE,  950,  -340,-2000, RCP_TitleRight2),
			   GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE,  0, 0, -175, RCP_TitleFace),
			   GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE,  0,  0,-500, RCP_TitleCube),
		         GEO_DISPLAY_LIST(1, title_mario_title_mesh),
            GEO_CLOSE_NODE(),
         GEO_CLOSE_NODE(),
      GEO_CLOSE_NODE(),
   GEO_CLOSE_NODE(),
   GEO_END(),
};

