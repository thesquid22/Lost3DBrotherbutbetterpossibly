#define CAM_FIELD 1
#define CAM_DUNGEON 4
#define CAM_DUNGEON_O 16
#define Hierarchy const GeoLayout
#define hmsScene(a,b,c,d,e) GEO_NODE_SCREEN_AREA(10,SCREEN_WIDTH/2,SCREEN_HEIGHT/2,SCREEN_WIDTH/2,SCREEN_HEIGHT/2),
#define hmsBegin() GEO_OPEN_NODE(),
#define hmsLayer(a) GEO_ZBUFFER(a),
#define hmsOrtho(a) GEO_NODE_ORTHO(a),
#define hmsClear(a,b) GEO_BACKGROUND_COLOR(a),
#define RGBA16(r,g,b,a) 	(((r)<<11) | ((g)<<6) | ((b)<<1) | (a))
#define hmsEnd() GEO_CLOSE_NODE(),
#define hmsPerspective(a,b,c,d) GEO_CAMERA_FRUSTUM_WITH_FUNC(a,b,c,d),
#define SCREEN_NEAR 100
#define SCREEN_FAR 12800
#define ZoomControl geo_camera_fov
#define hmsCamera(a,b,c,d,e,f,g,h) GEO_CAMERA(a,b,c,d,e,f,g,h),
#define GameCamera geo_camera_main
#define hmsGfx(a,b) GEO_DISPLAY_LIST(a,b),
#define RM_SURF LAYER_OPAQUE
#define hmsCProg(a,b) GEO_ASM(a,b),
#define CtrlMirrorMario geo_render_mirror_mario
#define hmsObject() GEO_RENDER_OBJ(),
#define WeatherProc geo_envfx_main
#define hmsExit() GEO_END(),

Hierarchy RCP_Stage32Scene1[] = {
	hmsScene(160, 120, 160, 120, 10)
	hmsBegin()
		hmsLayer(0)
		hmsBegin()
			hmsOrtho(100)
			hmsBegin()
				hmsClear(RGBA16(0,0,0,1), NULL)
			hmsEnd()
		hmsEnd()

		hmsLayer(1)			/* Zbuffer ON	 */
		hmsBegin()
			hmsPerspective(45, SCREEN_NEAR, 32000, ZoomControl)
			hmsBegin()
				hmsCamera(CAM_FIELD,  0,2000,6000,  0,0,-4000, GameCamera)
				hmsBegin()
					hmsGfx(RM_SURF,  RCP_testmap1)
					hmsObject()
					hmsCProg(0, WeatherProc)
				hmsEnd()
			hmsEnd()
		hmsEnd()

	hmsEnd()
	hmsExit()
};
