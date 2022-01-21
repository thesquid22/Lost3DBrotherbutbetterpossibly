Lights1 warp_pipe_Material2_001_f3d_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 warp_pipe_Material1_001_f3d_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx warp_pipe_Material2_ci4_aligner[] = {gsSPEndDisplayList()};
u8 warp_pipe_Material2_ci4[] = {
	0x01, 0x00, 0x11, 0x00, 0x00, 0x00, 0x00, 0x10, 
	0x01, 0x00, 0x10, 0x00, 0x10, 0x00, 0x00, 0x00, 
	0x01, 0x10, 0x11, 0x00, 0x00, 0x00, 0x01, 0x10, 
	0x00, 0x10, 0x01, 0x00, 0x10, 0x10, 0x00, 0x01, 
	0x10, 0x10, 0x01, 0x00, 0x20, 0x00, 0x00, 0x10, 
	0x00, 0x01, 0x01, 0x01, 0x10, 0x11, 0x00, 0x10, 
	0x00, 0x11, 0x10, 0x01, 0x00, 0x00, 0x00, 0x00, 
	0x10, 0x00, 0x01, 0x11, 0x00, 0x10, 0x00, 0x00, 
	0x00, 0x10, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x01, 0x01, 0x20, 0x01, 0x00, 0x11, 
	0x00, 0x00, 0x00, 0x00, 0x10, 0x11, 0x00, 0x10, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x10, 0x11, 
	0x01, 0x00, 0x00, 0x10, 0x00, 0x10, 0x01, 0x10, 
	0x10, 0x00, 0x10, 0x00, 0x00, 0x20, 0x00, 0x11, 
	0x01, 0x01, 0x00, 0x01, 0x10, 0x01, 0x01, 0x00, 
	0x10, 0x00, 0x10, 0x11, 0x30, 0x01, 0x11, 0x10, 
	0x00, 0x01, 0x00, 0x01, 0x01, 0x10, 0x00, 0x01, 
	0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x10, 0x01, 
	0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 
	0x11, 0x11, 0x10, 0x01, 0x00, 0x10, 0x10, 0x10, 
	0x00, 0x01, 0x01, 0x11, 0x00, 0x10, 0x00, 0x01, 
	0x00, 0x10, 0x02, 0x01, 0x10, 0x10, 0x00, 0x10, 
	0x01, 0x11, 0x01, 0x00, 0x10, 0x11, 0x01, 0x00, 
	0x10, 0x00, 0x00, 0x00, 0x02, 0x01, 0x00, 0x10, 
	0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x20, 0x10, 
	0x00, 0x11, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 
	0x01, 0x00, 0x01, 0x11, 0x01, 0x00, 0x00, 0x01, 
	0x10, 0x10, 0x00, 0x00, 0x10, 0x10, 0x00, 0x01, 
	0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x01, 0x00, 
	0x01, 0x00, 0x00, 0x01, 0x00, 0x01, 0x01, 0x01, 
	0x01, 0x10, 0x10, 0x01, 0x00, 0x00, 0x00, 0x10, 
	0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x10, 0x01, 
	0x11, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 
	0x10, 0x00, 0x10, 0x00, 0x00, 0x10, 0x01, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x01, 0x10, 0x00, 0x10, 0x01, 0x00, 0x11, 
	0x11, 0x00, 0x00, 0x11, 0x00, 0x01, 0x10, 0x10, 
	0x01, 0x11, 0x10, 0x00, 0x00, 0x00, 0x00, 0x10, 
	0x01, 0x00, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 
	0x01, 0x00, 0x11, 0x00, 0x00, 0x00, 0x01, 0x10, 
	0x01, 0x11, 0x01, 0x00, 0x10, 0x10, 0x00, 0x01, 
	0x10, 0x10, 0x01, 0x00, 0x11, 0x00, 0x00, 0x10, 
	0x00, 0x01, 0x01, 0x01, 0x10, 0x01, 0x11, 0x10, 
	0x00, 0x11, 0x10, 0x01, 0x00, 0x00, 0x00, 0x01, 
	0x10, 0x00, 0x01, 0x11, 0x00, 0x10, 0x00, 0x00, 
	0x00, 0x10, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x01, 0x00, 0x01, 0x01, 0x10, 0x00, 0x00, 0x21, 
	0x01, 0x00, 0x10, 0x00, 0x00, 0x11, 0x00, 0x00, 
	0x01, 0x01, 0x00, 0x01, 0x00, 0x11, 0x10, 0x11, 
	0x01, 0x00, 0x10, 0x10, 0x00, 0x00, 0x01, 0x11, 
	0x10, 0x00, 0x11, 0x00, 0x00, 0x20, 0x01, 0x01, 
	0x01, 0x01, 0x00, 0x01, 0x10, 0x01, 0x01, 0x00, 
	0x10, 0x00, 0x10, 0x11, 0x30, 0x01, 0x01, 0x10, 
	0x00, 0x01, 0x00, 0x11, 0x01, 0x10, 0x00, 0x00, 
	0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x11, 0x01, 
	0x01, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 
	0x11, 0x11, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 
	0x00, 0x01, 0x11, 0x01, 0x00, 0x00, 0x00, 0x01, 
	0x00, 0x10, 0x01, 0x00, 0x10, 0x10, 0x00, 0x10, 
	0x01, 0x11, 0x01, 0x00, 0x10, 0x01, 0x01, 0x00, 
	0x10, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x10, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x00, 
	
};

Gfx warp_pipe_Material2_ci4_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 warp_pipe_Material2_ci4_pal_rgba16[] = {
	0x45, 0x91, 0x45, 0xd1, 0x4d, 0xd3, 0x3d, 0x8f, 
	
};

Gfx warp_pipe_Material1_ci4_aligner[] = {gsSPEndDisplayList()};
u8 warp_pipe_Material1_ci4[] = {
	0x01, 0x12, 0x34, 0x45, 0x66, 0x78, 0x99, 0x9a, 
	0xab, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 
	0x01, 0x12, 0x34, 0x56, 0x66, 0x78, 0x99, 0x9a, 
	0xab, 0xbb, 0xbb, 0xcb, 0xbb, 0xbb, 0xbb, 0xbb, 
	0xd1, 0x12, 0x44, 0x56, 0x66, 0x78, 0x99, 0x9a, 
	0xab, 0xbb, 0xbc, 0xcc, 0xbb, 0xbb, 0xbb, 0xba, 
	0xd1, 0x12, 0x44, 0x56, 0x66, 0x78, 0x99, 0x9a, 
	0xab, 0xbb, 0xbc, 0xcc, 0xbb, 0xbb, 0xbb, 0xba, 
	0xd1, 0x12, 0x44, 0x56, 0x66, 0x78, 0x99, 0x9a, 
	0xbb, 0xbb, 0xcc, 0xcb, 0xbb, 0xbb, 0xbb, 0xba, 
	0xd1, 0x12, 0x44, 0x56, 0x66, 0x78, 0x99, 0x9a, 
	0xbb, 0xbc, 0xcc, 0xcb, 0xbb, 0xbb, 0xbb, 0xba, 
	0xd1, 0x12, 0x34, 0x45, 0x66, 0x78, 0x99, 0x9a, 
	0xab, 0xbc, 0xcc, 0xbb, 0xbb, 0xbb, 0xbb, 0xba, 
	0xd1, 0x12, 0x34, 0x45, 0x66, 0x77, 0x89, 0x99, 
	0xab, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xba, 
	0xd1, 0x12, 0x34, 0x45, 0x66, 0x67, 0x89, 0x99, 
	0x9a, 0xab, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xba, 
	0xd1, 0x11, 0x24, 0x45, 0x66, 0x67, 0x78, 0x99, 
	0x9a, 0xab, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xba, 
	0xd1, 0x11, 0x23, 0x45, 0x66, 0x67, 0x78, 0x99, 
	0x99, 0xaa, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xba, 
	0xd1, 0x11, 0x23, 0x45, 0x66, 0x67, 0x88, 0x99, 
	0x99, 0xaa, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xba, 
	0xd1, 0x11, 0x24, 0x45, 0x66, 0x77, 0x89, 0x99, 
	0x99, 0xaa, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 
	0xd1, 0x12, 0x34, 0x45, 0x66, 0x78, 0x99, 0x99, 
	0x9a, 0xab, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 
	0xd1, 0x12, 0x34, 0x45, 0x67, 0x88, 0x99, 0x9a, 
	0xaa, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 
	0xd1, 0x23, 0x44, 0x56, 0x67, 0x89, 0x99, 0xaa, 
	0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 
	0xd1, 0x13, 0x44, 0x56, 0x67, 0x89, 0x99, 0xab, 
	0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 
	0xd1, 0x13, 0x44, 0x56, 0x67, 0x89, 0x9a, 0xab, 
	0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 
	0xd1, 0x12, 0x44, 0x56, 0x67, 0x89, 0x9a, 0xbb, 
	0xbc, 0xcb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 
	0xd1, 0x12, 0x34, 0x56, 0x67, 0x89, 0x9a, 0xab, 
	0xbb, 0xcb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 
	0xd1, 0x11, 0x34, 0x56, 0x67, 0x89, 0x99, 0xaa, 
	0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 
	0xd1, 0x11, 0x24, 0x46, 0x67, 0x88, 0x99, 0x9a, 
	0xaa, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 
	0xdd, 0x11, 0x24, 0x46, 0x67, 0x78, 0x99, 0x99, 
	0xaa, 0xab, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 
	0x0d, 0x11, 0x23, 0x45, 0x67, 0x78, 0x99, 0x99, 
	0x9a, 0xaa, 0xbb, 0xbb, 0xbb, 0xbb, 0xcc, 0xbb, 
	0x0d, 0x11, 0x23, 0x45, 0x67, 0x88, 0x99, 0x99, 
	0xaa, 0xab, 0xbb, 0xbb, 0xbb, 0xbb, 0xcc, 0xbb, 
	0x0d, 0x11, 0x13, 0x45, 0x66, 0x78, 0x99, 0x9a, 
	0xaa, 0xbb, 0xbb, 0xbb, 0xbb, 0xbc, 0xcc, 0xcb, 
	0x0d, 0x11, 0x12, 0x44, 0x66, 0x78, 0x99, 0xaa, 
	0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xcc, 0xcc, 0xcb, 
	0x0d, 0x11, 0x22, 0x44, 0x56, 0x78, 0x99, 0xab, 
	0xbb, 0xbb, 0xbb, 0xbc, 0xcc, 0xcc, 0xcc, 0xcb, 
	0x0d, 0x11, 0x23, 0x44, 0x56, 0x68, 0x99, 0xab, 
	0xbb, 0xbb, 0xbc, 0xcb, 0xcc, 0xcc, 0xcc, 0xcb, 
	0x0d, 0x12, 0x34, 0x44, 0x45, 0x67, 0x89, 0xab, 
	0xbb, 0xbb, 0xbb, 0xbb, 0xcc, 0xcc, 0xcc, 0xcb, 
	0x01, 0x13, 0x44, 0x44, 0x55, 0x67, 0x89, 0xab, 
	0xbb, 0xbb, 0xbb, 0xbb, 0xcc, 0xcc, 0xcc, 0xcb, 
	0x01, 0x24, 0x44, 0x55, 0x56, 0x66, 0x89, 0x9a, 
	0xbb, 0xbb, 0xbb, 0xbb, 0xcc, 0xcc, 0xcc, 0xcb, 
	0x01, 0x24, 0x55, 0x66, 0x66, 0x66, 0x79, 0x9a, 
	0xab, 0xbb, 0xbb, 0xbb, 0xcc, 0xcc, 0xcc, 0xcc, 
	0x01, 0x24, 0x56, 0x66, 0x66, 0x67, 0x88, 0x99, 
	0xaa, 0xbb, 0xbb, 0xbb, 0xcc, 0xcc, 0xcc, 0xcc, 
	0x01, 0x24, 0x56, 0x66, 0x66, 0x77, 0x89, 0x99, 
	0xaa, 0xab, 0xbb, 0xbc, 0xcc, 0xcc, 0xcc, 0xcc, 
	0x01, 0x24, 0x56, 0x66, 0x77, 0x78, 0x89, 0x99, 
	0x9a, 0xaa, 0xbb, 0xbc, 0xcc, 0xcc, 0xcc, 0xcc, 
	0x0d, 0x13, 0x46, 0x66, 0x77, 0x88, 0x99, 0x99, 
	0x99, 0xaa, 0xbb, 0xbb, 0xcc, 0xcc, 0xcc, 0xcc, 
	0x0d, 0x13, 0x45, 0x66, 0x77, 0x88, 0x99, 0x99, 
	0x99, 0xaa, 0xab, 0xbb, 0xbb, 0xbc, 0xcc, 0xcc, 
	0x0d, 0x12, 0x44, 0x66, 0x77, 0x89, 0x99, 0x99, 
	0x9a, 0xaa, 0xaa, 0xbb, 0xbb, 0xbc, 0xcc, 0xcc, 
	0x0d, 0x12, 0x34, 0x56, 0x67, 0x89, 0x99, 0x99, 
	0xaa, 0xaa, 0xaa, 0xab, 0xbb, 0xbb, 0xcc, 0xcc, 
	0x0d, 0x11, 0x34, 0x56, 0x67, 0x89, 0x99, 0x9a, 
	0xaa, 0xaa, 0xaa, 0xab, 0xbb, 0xbb, 0xcc, 0xcc, 
	0x01, 0x11, 0x34, 0x56, 0x67, 0x89, 0x99, 0xaa, 
	0xaa, 0xaa, 0xaa, 0xbb, 0xbb, 0xbb, 0xbc, 0xcc, 
	0x01, 0x12, 0x34, 0x56, 0x78, 0x99, 0x9a, 0xab, 
	0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xcc, 0xcc, 
	0x01, 0x12, 0x34, 0x56, 0x78, 0x99, 0xaa, 0xbb, 
	0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xcc, 0xcc, 
	0xd1, 0x12, 0x34, 0x56, 0x78, 0x99, 0xab, 0xbc, 
	0xcc, 0xcc, 0xcc, 0xbb, 0xcc, 0xcc, 0xcc, 0xcc, 
	0xd1, 0x12, 0x34, 0x46, 0x67, 0x99, 0xab, 0xbc, 
	0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 
	0xd1, 0x12, 0x34, 0x45, 0x67, 0x89, 0x9a, 0xbc, 
	0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 
	0xd1, 0x11, 0x23, 0x44, 0x66, 0x78, 0x9a, 0xbc, 
	0xcc, 0xce, 0xee, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 
	0xd1, 0x11, 0x23, 0x44, 0x56, 0x68, 0x99, 0xab, 
	0xcc, 0xce, 0xee, 0xcc, 0xcc, 0xcc, 0xcc, 0xcb, 
	0xd1, 0x11, 0x23, 0x34, 0x45, 0x67, 0x89, 0xab, 
	0xbc, 0xce, 0xee, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 
	0xd1, 0x12, 0x33, 0x44, 0x45, 0x66, 0x89, 0x9a, 
	0xbb, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcb, 
	0xd1, 0x23, 0x34, 0x44, 0x45, 0x66, 0x89, 0x9a, 
	0xbb, 0xbc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcb, 
	0xd1, 0x23, 0x44, 0x44, 0x55, 0x66, 0x89, 0x9a, 
	0xab, 0xbc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 
	0xd1, 0x24, 0x45, 0x55, 0x56, 0x67, 0x89, 0x9a, 
	0xaa, 0xbb, 0xbc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcb, 
	0xd1, 0x24, 0x45, 0x56, 0x66, 0x67, 0x89, 0x9a, 
	0xaa, 0xbb, 0xbc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 
	0xd1, 0x24, 0x45, 0x66, 0x66, 0x78, 0x89, 0x9a, 
	0xab, 0xbb, 0xbc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcb, 
	0x01, 0x13, 0x45, 0x66, 0x67, 0x78, 0x99, 0x9a, 
	0xbb, 0xbb, 0xbb, 0xbc, 0xcc, 0xcc, 0xcc, 0xcb, 
	0x0d, 0x12, 0x44, 0x66, 0x67, 0x88, 0x99, 0xaa, 
	0xbb, 0xbb, 0xbb, 0xbc, 0xcc, 0xbb, 0xbc, 0xcb, 
	0x0d, 0x12, 0x44, 0x56, 0x67, 0x88, 0x99, 0xaa, 
	0xab, 0xbb, 0xbb, 0xbb, 0xcc, 0xbb, 0xbb, 0xcb, 
	0x0d, 0x11, 0x34, 0x56, 0x67, 0x88, 0x99, 0x9a, 
	0xaa, 0xaa, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xcb, 
	0x0d, 0x11, 0x34, 0x46, 0x67, 0x78, 0x99, 0x9a, 
	0xaa, 0xaa, 0xaa, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 
	0x0d, 0x11, 0x34, 0x45, 0x66, 0x78, 0x99, 0x9a, 
	0xaa, 0xaa, 0xaa, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 
	0x0d, 0x12, 0x34, 0x45, 0x66, 0x78, 0x99, 0x9a, 
	0xaa, 0xaa, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 
	0x01, 0x12, 0x34, 0x45, 0x66, 0x78, 0x99, 0x9a, 
	0xaa, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 
	
};

Gfx warp_pipe_Material1_ci4_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 warp_pipe_Material1_ci4_pal_rgba16[] = {
	0x19, 0xc7, 0x1a, 0x47, 0x22, 0x89, 0x22, 0xc9, 
	0x23, 0x09, 0x23, 0x49, 0x2b, 0x8b, 0x2b, 0xcb, 
	0x2c, 0x0b, 0x34, 0x4d, 0x34, 0x8d, 0x34, 0xcd, 
	0x3c, 0xcf, 0x1a, 0x07, 0x3d, 0x0f, 
};

Vtx warp_pipe_pipe_001_mesh_layer_1_vtx_0[44] = {
	{{{42, 37, -92},0, {4525, 3633},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-76, 37, -74},0, {-16, 4893},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-90, 37, -105},0, {-16, 6257},{0x0, 0x81, 0x0, 0xFF}}},
	{{{22, 37, -64},0, {3344, 2950},{0x0, 0x81, 0x0, 0xFF}}},
	{{{97, 37, 29},0, {4525, -1617},{0x0, 0x81, 0x0, 0xFF}}},
	{{{63, 37, 25},0, {3344, -934},{0x0, 0x81, 0x0, 0xFF}}},
	{{{6, 37, 106},0, {-16, -2877},{0x0, 0x81, 0x0, 0xFF}}},
	{{{20, 37, 137},0, {-16, -4241},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-112, 37, 124},0, {-4557, -1617},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-92, 37, 96},0, {-3376, -934},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-133, 37, 7},0, {-3376, 2950},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-167, 37, 3},0, {-4557, 3633},{0x0, 0x81, 0x0, 0xFF}}},
	{{{56, 178, -113},0, {5365, 4131},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-90, 178, -105},0, {-16, 6257},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-101, 178, -127},0, {-16, 7228},{0x0, 0x81, 0x0, 0xFF}}},
	{{{42, 178, -92},0, {4525, 3633},{0x0, 0x81, 0x0, 0xFF}}},
	{{{42, 178, -92},0, {4525, 3633},{0x0, 0x81, 0x0, 0xFF}}},
	{{{56, 178, -113},0, {5365, 4131},{0x0, 0x81, 0x0, 0xFF}}},
	{{{122, 178, 31},0, {5365, -2115},{0x0, 0x81, 0x0, 0xFF}}},
	{{{97, 178, 29},0, {4525, -1617},{0x0, 0x81, 0x0, 0xFF}}},
	{{{20, 178, 137},0, {-16, -4241},{0x0, 0x81, 0x0, 0xFF}}},
	{{{31, 178, 160},0, {-16, -5212},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-126, 178, 145},0, {-5397, -2115},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-112, 178, 124},0, {-4557, -1617},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-167, 178, 3},0, {-4557, 3633},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-192, 178, 1},0, {-5397, 4131},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-90, 178, -105},0, {-16, 6257},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-101, 178, -127},0, {-16, 7228},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-192, 248, 1},0, {-1394, -4},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-76, 248, -74},0, {-2472, 149},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-101, 248, -127},0, {-2472, 617},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-133, 248, 7},0, {-1799, -240},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-133, 248, 7},0, {-1799, -240},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-192, 248, 1},0, {-1394, -4},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-126, 248, 145},0, {-1394, -1255},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-92, 248, 96},0, {-1799, -1019},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{6, 248, 106},0, {-2472, -1408},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{31, 248, 160},0, {-2472, -1876},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{122, 248, 31},0, {-3551, -1255},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{63, 248, 25},0, {-3146, -1019},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{22, 248, -64},0, {-3146, -240},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{56, 248, -113},0, {-3551, -4},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-76, 248, -74},0, {-2472, 149},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-101, 248, -127},0, {-2472, 617},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx warp_pipe_pipe_001_mesh_layer_1_tri_0[] = {
	gsSPVertex(warp_pipe_pipe_001_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 0, 3, 0),
	gsSP1Triangle(3, 0, 4, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(5, 4, 6, 0),
	gsSP1Triangle(6, 4, 7, 0),
	gsSP1Triangle(8, 6, 7, 0),
	gsSP1Triangle(8, 9, 6, 0),
	gsSP1Triangle(8, 10, 9, 0),
	gsSP1Triangle(11, 10, 8, 0),
	gsSP1Triangle(11, 1, 10, 0),
	gsSP1Triangle(1, 11, 2, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(13, 12, 15, 0),
	gsSPVertex(warp_pipe_pipe_001_mesh_layer_1_vtx_0 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(4, 2, 5, 0),
	gsSP1Triangle(6, 4, 5, 0),
	gsSP1Triangle(6, 7, 4, 0),
	gsSP1Triangle(6, 8, 7, 0),
	gsSP1Triangle(9, 8, 6, 0),
	gsSP1Triangle(9, 10, 8, 0),
	gsSP1Triangle(10, 9, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(13, 12, 15, 0),
	gsSPVertex(warp_pipe_pipe_001_mesh_layer_1_vtx_0 + 32, 12, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(3, 2, 4, 0),
	gsSP1Triangle(4, 2, 5, 0),
	gsSP1Triangle(6, 4, 5, 0),
	gsSP1Triangle(6, 7, 4, 0),
	gsSP1Triangle(6, 8, 7, 0),
	gsSP1Triangle(9, 8, 6, 0),
	gsSP1Triangle(9, 10, 8, 0),
	gsSP1Triangle(10, 9, 11, 0),
	gsSPEndDisplayList(),
};

Vtx warp_pipe_pipe_001_mesh_layer_1_vtx_1[72] = {
	{{{97, 37, 29},0, {-8171, 5554},{0x67, 0x0, 0x4A, 0xFF}}},
	{{{20, 178, 137},0, {-7356, 4945},{0x67, 0x0, 0x4A, 0xFF}}},
	{{{20, 37, 137},0, {-8171, 4945},{0x67, 0x0, 0x4A, 0xFF}}},
	{{{97, 178, 29},0, {-7356, 5554},{0x67, 0x0, 0x4A, 0xFF}}},
	{{{42, 178, -92},0, {-7356, 6165},{0x74, 0x0, 0xCB, 0xFF}}},
	{{{97, 37, 29},0, {-8171, 5554},{0x74, 0x0, 0xCB, 0xFF}}},
	{{{42, 37, -92},0, {-8171, 6165},{0x74, 0x0, 0xCB, 0xFF}}},
	{{{97, 178, 29},0, {-7356, 5554},{0x74, 0x0, 0xCB, 0xFF}}},
	{{{42, 178, -92},0, {-7356, 6165},{0xC, 0x0, 0x82, 0xFF}}},
	{{{-90, 37, -105},0, {-8171, 6774},{0xC, 0x0, 0x82, 0xFF}}},
	{{{-90, 178, -105},0, {-7356, 6774},{0xC, 0x0, 0x82, 0xFF}}},
	{{{42, 37, -92},0, {-8171, 6165},{0xC, 0x0, 0x82, 0xFF}}},
	{{{-90, 178, -105},0, {-7356, 6774},{0x99, 0x0, 0xB6, 0xFF}}},
	{{{-167, 37, 3},0, {-8171, 7384},{0x99, 0x0, 0xB6, 0xFF}}},
	{{{-167, 178, 3},0, {-7356, 7384},{0x99, 0x0, 0xB6, 0xFF}}},
	{{{-90, 37, -105},0, {-8171, 6774},{0x99, 0x0, 0xB6, 0xFF}}},
	{{{-112, 178, 124},0, {-7356, 7994},{0x8C, 0x0, 0x35, 0xFF}}},
	{{{-167, 37, 3},0, {-8171, 7384},{0x8C, 0x0, 0x35, 0xFF}}},
	{{{-112, 37, 124},0, {-8171, 7994},{0x8C, 0x0, 0x35, 0xFF}}},
	{{{-167, 178, 3},0, {-7356, 7384},{0x8C, 0x0, 0x35, 0xFF}}},
	{{{20, 37, 137},0, {-8171, 4945},{0xF4, 0x0, 0x7E, 0xFF}}},
	{{{-112, 178, 124},0, {-7356, 3909},{0xF4, 0x0, 0x7E, 0xFF}}},
	{{{-112, 37, 124},0, {-8171, 3909},{0xF4, 0x0, 0x7E, 0xFF}}},
	{{{20, 178, 137},0, {-7356, 4945},{0xF4, 0x0, 0x7E, 0xFF}}},
	{{{122, 178, 31},0, {-8089, 7325},{0x67, 0x0, 0x4A, 0xFF}}},
	{{{31, 248, 160},0, {-7417, 6131},{0x67, 0x0, 0x4A, 0xFF}}},
	{{{31, 178, 160},0, {-8089, 6131},{0x67, 0x0, 0x4A, 0xFF}}},
	{{{122, 248, 31},0, {-7417, 7325},{0x67, 0x0, 0x4A, 0xFF}}},
	{{{56, 248, -113},0, {-7417, 8526},{0x74, 0x0, 0xCB, 0xFF}}},
	{{{122, 178, 31},0, {-8089, 7325},{0x74, 0x0, 0xCB, 0xFF}}},
	{{{56, 178, -113},0, {-8089, 8526},{0x74, 0x0, 0xCB, 0xFF}}},
	{{{122, 248, 31},0, {-7417, 7325},{0x74, 0x0, 0xCB, 0xFF}}},
	{{{56, 248, -113},0, {-7417, 8526},{0xB, 0x0, 0x81, 0xFF}}},
	{{{-101, 178, -127},0, {-8089, 9720},{0xB, 0x0, 0x81, 0xFF}}},
	{{{-101, 248, -127},0, {-7417, 9720},{0xB, 0x0, 0x81, 0xFF}}},
	{{{56, 178, -113},0, {-8089, 8526},{0xB, 0x0, 0x81, 0xFF}}},
	{{{-101, 248, -127},0, {-7417, 4965},{0x99, 0x0, 0xB6, 0xFF}}},
	{{{-192, 178, 1},0, {-8089, 6993},{0x99, 0x0, 0xB6, 0xFF}}},
	{{{-192, 248, 1},0, {-7417, 6993},{0x99, 0x0, 0xB6, 0xFF}}},
	{{{-101, 178, -127},0, {-8089, 4965},{0x99, 0x0, 0xB6, 0xFF}}},
	{{{-126, 248, 145},0, {-7417, 4103},{0x8C, 0x0, 0x35, 0xFF}}},
	{{{-192, 178, 1},0, {-8089, 2902},{0x8C, 0x0, 0x35, 0xFF}}},
	{{{-126, 178, 145},0, {-8089, 4103},{0x8C, 0x0, 0x35, 0xFF}}},
	{{{-192, 248, 1},0, {-7417, 2902},{0x8C, 0x0, 0x35, 0xFF}}},
	{{{31, 178, 160},0, {-8089, 6131},{0xF5, 0x0, 0x7F, 0xFF}}},
	{{{-126, 248, 145},0, {-7417, 4103},{0xF5, 0x0, 0x7F, 0xFF}}},
	{{{-126, 178, 145},0, {-8089, 4103},{0xF5, 0x0, 0x7F, 0xFF}}},
	{{{31, 248, 160},0, {-7417, 6131},{0xF5, 0x0, 0x7F, 0xFF}}},
	{{{63, 248, 25},0, {-7254, 1712},{0x99, 0x0, 0xB6, 0xFF}}},
	{{{6, 37, 106},0, {-8183, 2056},{0x99, 0x0, 0xB6, 0xFF}}},
	{{{6, 248, 106},0, {-7254, 2056},{0x99, 0x0, 0xB6, 0xFF}}},
	{{{63, 37, 25},0, {-8183, 1712},{0x99, 0x0, 0xB6, 0xFF}}},
	{{{63, 248, 25},0, {-7254, 1712},{0x8C, 0x0, 0x35, 0xFF}}},
	{{{22, 37, -64},0, {-8183, 1369},{0x8C, 0x0, 0x35, 0xFF}}},
	{{{63, 37, 25},0, {-8183, 1712},{0x8C, 0x0, 0x35, 0xFF}}},
	{{{22, 248, -64},0, {-7254, 1369},{0x8C, 0x0, 0x35, 0xFF}}},
	{{{22, 37, -64},0, {-8183, 1369},{0xF4, 0x0, 0x7E, 0xFF}}},
	{{{-76, 248, -74},0, {-7254, 1025},{0xF4, 0x0, 0x7E, 0xFF}}},
	{{{-76, 37, -74},0, {-8183, 1025},{0xF4, 0x0, 0x7E, 0xFF}}},
	{{{22, 248, -64},0, {-7254, 1369},{0xF4, 0x0, 0x7E, 0xFF}}},
	{{{-76, 37, -74},0, {-8183, 1025},{0x67, 0x0, 0x4A, 0xFF}}},
	{{{-133, 248, 7},0, {-7254, 682},{0x67, 0x0, 0x4A, 0xFF}}},
	{{{-133, 37, 7},0, {-8183, 682},{0x67, 0x0, 0x4A, 0xFF}}},
	{{{-76, 248, -74},0, {-7254, 1025},{0x67, 0x0, 0x4A, 0xFF}}},
	{{{-133, 248, 7},0, {-7254, 2742},{0x74, 0x0, 0xCB, 0xFF}}},
	{{{-92, 37, 96},0, {-8183, 2399},{0x74, 0x0, 0xCB, 0xFF}}},
	{{{-133, 37, 7},0, {-8183, 2742},{0x74, 0x0, 0xCB, 0xFF}}},
	{{{-92, 248, 96},0, {-7254, 2399},{0x74, 0x0, 0xCB, 0xFF}}},
	{{{6, 248, 106},0, {-7254, 2056},{0xC, 0x0, 0x82, 0xFF}}},
	{{{-92, 37, 96},0, {-8183, 2399},{0xC, 0x0, 0x82, 0xFF}}},
	{{{-92, 248, 96},0, {-7254, 2399},{0xC, 0x0, 0x82, 0xFF}}},
	{{{6, 37, 106},0, {-8183, 2056},{0xC, 0x0, 0x82, 0xFF}}},
};

Gfx warp_pipe_pipe_001_mesh_layer_1_tri_1[] = {
	gsSPVertex(warp_pipe_pipe_001_mesh_layer_1_vtx_1 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 0, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(5, 4, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(9, 8, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(13, 12, 15, 0),
	gsSPVertex(warp_pipe_pipe_001_mesh_layer_1_vtx_1 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 0, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(5, 4, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(9, 8, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(13, 12, 15, 0),
	gsSPVertex(warp_pipe_pipe_001_mesh_layer_1_vtx_1 + 32, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 0, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(5, 4, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(9, 8, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(13, 12, 15, 0),
	gsSPVertex(warp_pipe_pipe_001_mesh_layer_1_vtx_1 + 48, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 0, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(5, 4, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(9, 8, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(13, 12, 15, 0),
	gsSPVertex(warp_pipe_pipe_001_mesh_layer_1_vtx_1 + 64, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 0, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(5, 4, 7, 0),
	gsSPEndDisplayList(),
};


Gfx mat_warp_pipe_Material2_001_f3d[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, warp_pipe_Material2_ci4_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 3),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b, 16, warp_pipe_Material2_ci4),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 2, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 62, 124),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_4b, 2, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(warp_pipe_Material2_001_f3d_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_warp_pipe_Material2_001_f3d[] = {
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx mat_warp_pipe_Material1_001_f3d[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, warp_pipe_Material1_ci4_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 14),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b, 16, warp_pipe_Material1_ci4),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 2, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadTile(7, 0, 0, 62, 252),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_4b, 2, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPSetLights1(warp_pipe_Material1_001_f3d_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_warp_pipe_Material1_001_f3d[] = {
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx warp_pipe_pipe_001_mesh_layer_1[] = {
	gsSPDisplayList(mat_warp_pipe_Material2_001_f3d),
	gsSPDisplayList(warp_pipe_pipe_001_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_warp_pipe_Material2_001_f3d),
	gsSPDisplayList(mat_warp_pipe_Material1_001_f3d),
	gsSPDisplayList(warp_pipe_pipe_001_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_warp_pipe_Material1_001_f3d),
	gsSPEndDisplayList(),
};

Gfx warp_pipe_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};
