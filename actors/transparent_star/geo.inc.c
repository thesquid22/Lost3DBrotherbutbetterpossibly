
extern Gfx  gfx_dotstar[];
extern Gfx  gfx_shadestar[];

const GeoLayout transparent_star_geo[] = { 
   GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 0x9B, 100),
    	GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_ALPHA, gfx_dotstar),
		GEO_CLOSE_NODE(),
  	GEO_END(),
};



