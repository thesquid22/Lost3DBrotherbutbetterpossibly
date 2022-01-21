// 0x0E000F00
const GeoLayout castle_geo_blue_star_door[] = {
   GEO_CULLING_RADIUS(400),
   GEO_OPEN_NODE(),
      GEO_DISPLAY_LIST(LAYER_OPAQUE, inside_castle_seg7_dl_0703BFA8),
   GEO_CLOSE_NODE(),
   GEO_END(),
};

const GeoLayout castle_geo_red_star_door[] = {
   GEO_CULLING_RADIUS(400),
   GEO_OPEN_NODE(),
      GEO_DISPLAY_LIST(LAYER_OPAQUE, inside_castle_seg7_dl_red_main),
   GEO_CLOSE_NODE(),
   GEO_END(),
};

const GeoLayout castle_geo_green_star_door[] = {
   GEO_CULLING_RADIUS(400),
   GEO_OPEN_NODE(),
      GEO_DISPLAY_LIST(LAYER_OPAQUE, inside_castle_seg7_dl_green_main),
   GEO_CLOSE_NODE(),
   GEO_END(),
};
