/********************************************************************************
	RCP_HmsItemStar [ New New Version ]
														[ Nob 19, 1995 ]
 ********************************************************************************/
 
#include "gex.h"

#define		STAR_POLYGON_R		255
#define		STAR_POLYGON_G		255
#define		STAR_POLYGON_B		 46
#define		STAR_POLYGON_A		255


/********************************************************************************/
/*	Vertex data [common].														*/
/********************************************************************************/
static Vtx vtx_dotstar[] = {
	{ -64, -64, 0,  0,	   0<<5, 31<<5,		STAR_POLYGON_R, STAR_POLYGON_G, STAR_POLYGON_B, STAR_POLYGON_A 	},
	{  64, -64, 0,  0,	  31<<5, 31<<5,		STAR_POLYGON_R, STAR_POLYGON_G, STAR_POLYGON_B, STAR_POLYGON_A	},
	{  64,  64, 0,  0,	  31<<5,  0<<5,		STAR_POLYGON_R, STAR_POLYGON_G, STAR_POLYGON_B, STAR_POLYGON_A	},
	{ -64,  64, 0,  0,	   0<<5,  0<<5,		STAR_POLYGON_R, STAR_POLYGON_G, STAR_POLYGON_B, STAR_POLYGON_A	},
};

/********************************************************************************/
/*	Texture data of star coin.													*/
/********************************************************************************/

static unsigned char dotstar_txt[] = {
#include "actors/transparent_star/dotstar_txt.rgba16.inc.c"
};

/********************************************************************************/
/*	Graphic display list of star coin.											*/
/********************************************************************************/
extern Gfx gfx_dotstar[] = {
	gsSPClearGeometryMode(G_CULL_BACK),
    gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_DECALRGBA),
	gsDPSetTextureFilter(G_TF_POINT),
    gsSPTexture(0xffff, 0xffff, 0, G_TX_RENDERTILE, G_ON),

	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, dotstar_txt),

    gsxDPLoadTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0,
			 G_TX_CLAMP | G_TX_NOMIRROR, G_TX_CLAMP | G_TX_NOMIRROR,
			 5, 5, G_TX_NOLOD, G_TX_NOLOD),

	gsSPVertex(&vtx_dotstar[0], 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),

    gsSPTexture(0xffff, 0xffff, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsDPSetTextureFilter(G_TF_BILERP),
	gsSPSetGeometryMode(G_CULL_BACK),
	gsSPEndDisplayList()
};

// 0x0302C560 - 0x0302C620
const Gfx transparent_star_seg3_dl_0302C560[] = {
    gsSPEndDisplayList(),
};

// 0x0302C620 - 0x0302C658
const Gfx transparent_star_seg3_dl_0302C620[] = {
    gsSPEndDisplayList(),
};
