Lights1 warp_pipe_side_f3d_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 warp_pipe_top_f3d_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx warp_pipe_side_ci8_aligner[] = {gsSPEndDisplayList()};
u8 warp_pipe_side_ci8[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 
	0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 
	0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 
	0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 
	0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 
	0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 
	0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 
	0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 
	0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 
	0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 
	0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 
	0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 
	0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 
	0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 
	0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 
	0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 
	0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 
	0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 
	0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 
	0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 
	0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 
	0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 
	0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 
	0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
	0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 
	0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 
	0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 
	0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 
	0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 
	0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 
	0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 
	0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 
	0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 
	0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 
	0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 
	0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 
	0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 
	0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 
	0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 
	0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 
	0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 
	0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 
	0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 
	0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 
	0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 
	0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 
	0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 
	0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 
	0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 
	0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 
	0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 
	0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 
	0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 
	0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 
	0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 
	0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 
	0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 
	0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 
	0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 
	0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 0x0d, 
	0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 
	0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 
	0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 
	0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 
	0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
	0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
	0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
	0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
	0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
	0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
	0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
	0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
	0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
	0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
	0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
	0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
	0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
	0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
	0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
	0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
	0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
	0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
	0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
	0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
	0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
	0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
	0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
	0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
	0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
	
};

Gfx warp_pipe_side_ci8_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 warp_pipe_side_ci8_pal_rgba16[] = {
	0x2f, 0x4b, 0x27, 0x49, 0x27, 0x09, 0x1e, 0xc7, 
	0x16, 0xc5, 0x16, 0x85, 0x0e, 0x83, 0x0e, 0x43, 
	0x05, 0x81, 0x02, 0xc1, 0x03, 0x01, 0x03, 0x41, 
	0x03, 0xc1, 0x04, 0x41, 0x04, 0xc1, 0x05, 0x41, 
	0x05, 0xc1, 0x06, 0x01, 
};

Gfx warp_pipe_top_ci8_aligner[] = {gsSPEndDisplayList()};
u8 warp_pipe_top_ci8[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x03, 0x02, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x02, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x04, 0x03, 0x03, 0x05, 0x05, 0x04, 0x05, 0x05, 
	0x04, 0x06, 0x05, 0x06, 0x06, 0x06, 0x06, 0x06, 
	0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 
	0x06, 0x06, 0x07, 0x07, 0x07, 0x07, 0x08, 0x07, 
	0x07, 0x07, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
	0x09, 0x09, 0x09, 0x09, 0x0a, 0x09, 0x0a, 0x0a, 
	0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 
	0x0a, 0x0a, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 
	0x0c, 0x0c, 0x0c, 0x0c, 0x0d, 0x0d, 0x0d, 0x0d, 
	0x0d, 0x0e, 0x0e, 0x0e, 0x0e, 0x0f, 0x0e, 0x0f, 
	0x0f, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
	0x10, 0x10, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 
	0x12, 0x12, 0x12, 0x12, 0x13, 0x13, 0x13, 0x13, 
	0x14, 0x15, 0x15, 0x15, 0x15, 0x15, 0x16, 0x16, 
	0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x17, 
	0x17, 0x17, 0x17, 0x17, 0x17, 0x17, 0x17, 0x18, 
	0x18, 0x18, 0x18, 0x19, 0x19, 0x19, 0x19, 0x1a, 
	0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0x1b, 0x1b, 
	0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 
	0x1b, 0x1b, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 
	0x1c, 0x1d, 0x1d, 0x1d, 0x1d, 0x1d, 0x1d, 0x1d, 
	0x1e, 0x1e, 0x1e, 0x1e, 0x1f, 0x1f, 0x1f, 0x1f, 
	0x1f, 0x20, 0x1f, 0x20, 0x20, 0x20, 0x1f, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x21, 0x21, 0x21, 0x21, 0x21, 0x21, 0x21, 
	0x21, 0x21, 0x21, 0x21, 0x22, 0x21, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x23, 
	0x22, 0x22, 0x22, 0x23, 0x23, 0x23, 0x23, 0x23, 
	0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 
	0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 
	0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 
	0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 
	0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 
	0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 
	0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 
	0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 
	0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 
	0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 
	0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 
	0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 
	0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 
	0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 
	0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 
	0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 
	0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 
	0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 
	0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 
	0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 
	0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 
	0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 0x23, 
	0x23, 0x23, 0x22, 0x23, 0x23, 0x23, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 
	0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x21, 
	0x21, 0x21, 0x21, 0x21, 0x21, 0x21, 0x21, 0x21, 
	0x21, 0x21, 0x21, 0x20, 0x20, 0x20, 0x21, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
	0x20, 0x20, 0x20, 0x20, 0x20, 0x1f, 0x1f, 0x1f, 
	0x1f, 0x1e, 0x1e, 0x1e, 0x1e, 0x1d, 0x1d, 0x1d, 
	0x1d, 0x1d, 0x1d, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 
	0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 
	0x1c, 0x1c, 0x1b, 0x1b, 0x1b, 0x1b, 0x1b, 0x1a, 
	0x1b, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0x19, 0x19, 
	0x19, 0x19, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 
	0x18, 0x18, 0x18, 0x18, 0x17, 0x17, 0x17, 0x17, 
	0x17, 0x17, 0x17, 0x16, 0x16, 0x16, 0x16, 0x16, 
	0x16, 0x15, 0x15, 0x14, 0x14, 0x13, 0x13, 0x13, 
	0x13, 0x13, 0x12, 0x12, 0x12, 0x12, 0x11, 0x12, 
	0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x10, 0x11, 
	0x11, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x0f, 
	0x0f, 0x0e, 0x0d, 0x0e, 0x0d, 0x0d, 0x0d, 0x0c, 
	0x0d, 0x0c, 0x0c, 0x0c, 0x0b, 0x0b, 0x0b, 0x0b, 
	0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 
	0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 
	0x09, 0x09, 0x09, 0x09, 0x09, 0x08, 0x08, 0x08, 
	0x08, 0x08, 0x08, 0x08, 0x07, 0x07, 0x07, 0x07, 
	0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x06, 0x07, 
	0x07, 0x06, 0x07, 0x06, 0x06, 0x06, 0x06, 0x06, 
	0x06, 0x06, 0x05, 0x05, 0x05, 0x05, 0x04, 0x04, 
	0x04, 0x04, 0x03, 0x04, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x02, 0x02, 
	0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
	0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
};

Gfx warp_pipe_top_ci8_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 warp_pipe_top_ci8_pal_rgba16[] = {
	0x06, 0x41, 0x0e, 0x43, 0x16, 0x45, 0x1e, 0x47, 
	0x26, 0x49, 0x26, 0x89, 0x2e, 0x8b, 0x36, 0x8d, 
	0x3e, 0x8f, 0x46, 0x91, 0x4e, 0xd3, 0x56, 0xd5, 
	0x5e, 0xd7, 0x66, 0xd9, 0x6e, 0xdb, 0x6f, 0x1b, 
	0x77, 0x1d, 0x7f, 0x1f, 0x87, 0x21, 0x8f, 0x23, 
	0x97, 0x25, 0x97, 0x65, 0x9f, 0x67, 0xa7, 0x69, 
	0xaf, 0x6b, 0xb7, 0x6d, 0xbf, 0xaf, 0xc7, 0xb1, 
	0xcf, 0xb3, 0xd7, 0xb5, 0xdf, 0xb7, 0xdf, 0xf7, 
	0xe7, 0xf9, 0xef, 0xfb, 0xf7, 0xfd, 0xff, 0xff, 
	
};

Vtx warp_pipe_RCP_dokan_NEW_mesh_layer_1_vtx_0[54] = {
	{{{-96, -38, -56},0, {6265, 4080},{0x6E, 0x0, 0x3F, 0xFF}}},
	{{{-96, 263, 56},0, {5506, 2030},{0x6E, 0x0, 0xC1, 0xFF}}},
	{{{-96, -38, 56},0, {5506, 4080},{0x6E, 0x0, 0xC1, 0xFF}}},
	{{{-96, 263, -56},0, {6265, 2030},{0x6E, 0x0, 0x3F, 0xFF}}},
	{{{0, 263, -111},0, {7022, 2030},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{0, -38, -111},0, {7022, 4080},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{96, 263, -56},0, {7780, 2030},{0x92, 0x0, 0x3F, 0xFF}}},
	{{{96, -38, -56},0, {7780, 4080},{0x92, 0x0, 0x3F, 0xFF}}},
	{{{96, -38, 56},0, {8538, 4080},{0x92, 0x0, 0xC1, 0xFF}}},
	{{{96, 263, 56},0, {8538, 2030},{0x92, 0x0, 0xC1, 0xFF}}},
	{{{0, 263, 111},0, {9296, 2030},{0x0, 0x0, 0x81, 0xFF}}},
	{{{0, -38, 111},0, {9296, 4080},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-96, 263, 56},0, {10054, 2030},{0x6E, 0x0, 0xC1, 0xFF}}},
	{{{-96, -38, 56},0, {10054, 4080},{0x6E, 0x0, 0xC1, 0xFF}}},
	{{{154, 163, -90},0, {704, 1626},{0x6E, 0x0, 0xC0, 0xFF}}},
	{{{154, 263, 90},0, {-736, 821},{0x6E, 0x0, 0x40, 0xFF}}},
	{{{154, 163, 90},0, {-736, 1626},{0x6E, 0x0, 0x40, 0xFF}}},
	{{{154, 263, -90},0, {704, 821},{0x6E, 0x0, 0xC0, 0xFF}}},
	{{{-154, 263, -90},0, {700, 821},{0x92, 0x0, 0xC0, 0xFF}}},
	{{{0, 163, -178},0, {-732, 1626},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-154, 163, -90},0, {700, 1626},{0x92, 0x0, 0xC0, 0xFF}}},
	{{{0, 263, -178},0, {-732, 821},{0x0, 0x0, 0x81, 0xFF}}},
	{{{130, -38, -75},0, {2033, 4080},{0x6E, 0x0, 0xC1, 0xFF}}},
	{{{0, 163, -150},0, {3057, 2712},{0x0, 0x0, 0x81, 0xFF}}},
	{{{130, 163, -75},0, {2033, 2712},{0x6E, 0x0, 0xC1, 0xFF}}},
	{{{0, -38, -150},0, {3057, 4080},{0x0, 0x0, 0x81, 0xFF}}},
	{{{-130, 163, -75},0, {4081, 2712},{0x92, 0x0, 0xC1, 0xFF}}},
	{{{-130, -38, -75},0, {4081, 4080},{0x92, 0x0, 0xC1, 0xFF}}},
	{{{-130, -38, 75},0, {5106, 4080},{0x92, 0x0, 0x3F, 0xFF}}},
	{{{-130, 163, 75},0, {5106, 2712},{0x92, 0x0, 0x3F, 0xFF}}},
	{{{-130, -38, 75},0, {5106, 4080},{0x92, 0x0, 0x3F, 0xFF}}},
	{{{0, 163, 150},0, {6130, 2712},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-130, 163, 75},0, {5106, 2712},{0x92, 0x0, 0x3F, 0xFF}}},
	{{{0, -38, 150},0, {6130, 4080},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{130, 163, 75},0, {7154, 2712},{0x6E, 0x0, 0x3F, 0xFF}}},
	{{{130, -38, 75},0, {7154, 4080},{0x6E, 0x0, 0x3F, 0xFF}}},
	{{{130, -38, -75},0, {8179, 4080},{0x6E, 0x0, 0xC1, 0xFF}}},
	{{{130, 163, -75},0, {8179, 2712},{0x6E, 0x0, 0xC1, 0xFF}}},
	{{{0, 263, -178},0, {700, 821},{0x0, 0x0, 0x81, 0xFF}}},
	{{{154, 163, -90},0, {-732, 1626},{0x6E, 0x0, 0xC0, 0xFF}}},
	{{{0, 163, -178},0, {700, 1626},{0x0, 0x0, 0x81, 0xFF}}},
	{{{154, 263, -90},0, {-732, 821},{0x6E, 0x0, 0xC0, 0xFF}}},
	{{{154, 263, 90},0, {700, 821},{0x6E, 0x0, 0x40, 0xFF}}},
	{{{0, 163, 178},0, {-732, 1626},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{154, 163, 90},0, {700, 1626},{0x6E, 0x0, 0x40, 0xFF}}},
	{{{0, 263, 178},0, {-732, 821},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-154, 263, -90},0, {-736, 821},{0x92, 0x0, 0xC0, 0xFF}}},
	{{{-154, 163, 90},0, {704, 1626},{0x92, 0x0, 0x40, 0xFF}}},
	{{{-154, 263, 90},0, {704, 821},{0x92, 0x0, 0x40, 0xFF}}},
	{{{-154, 163, -90},0, {-736, 1626},{0x92, 0x0, 0xC0, 0xFF}}},
	{{{0, 263, 178},0, {700, 821},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-154, 163, 90},0, {-732, 1626},{0x92, 0x0, 0x40, 0xFF}}},
	{{{0, 163, 178},0, {700, 1626},{0x0, 0x0, 0x7F, 0xFF}}},
	{{{-154, 263, 90},0, {-732, 821},{0x92, 0x0, 0x40, 0xFF}}},
};

Gfx warp_pipe_RCP_dokan_NEW_mesh_layer_1_tri_0[] = {
	gsSPVertex(warp_pipe_RCP_dokan_NEW_mesh_layer_1_vtx_0 + 0, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 0, 3, 0),
	gsSP1Triangle(0, 4, 3, 0),
	gsSP1Triangle(4, 0, 5, 0),
	gsSP1Triangle(5, 6, 4, 0),
	gsSP1Triangle(6, 5, 7, 0),
	gsSP1Triangle(8, 6, 7, 0),
	gsSP1Triangle(6, 8, 9, 0),
	gsSP1Triangle(8, 10, 9, 0),
	gsSP1Triangle(10, 8, 11, 0),
	gsSP1Triangle(11, 12, 10, 0),
	gsSP1Triangle(12, 11, 13, 0),
	gsSPVertex(warp_pipe_RCP_dokan_NEW_mesh_layer_1_vtx_0 + 14, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 0, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(5, 4, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(9, 8, 11, 0),
	gsSP1Triangle(11, 12, 9, 0),
	gsSP1Triangle(12, 11, 13, 0),
	gsSP1Triangle(14, 12, 13, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(warp_pipe_RCP_dokan_NEW_mesh_layer_1_vtx_0 + 30, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 0, 3, 0),
	gsSP1Triangle(3, 4, 1, 0),
	gsSP1Triangle(4, 3, 5, 0),
	gsSP1Triangle(6, 4, 5, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(9, 8, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(13, 12, 15, 0),
	gsSPVertex(warp_pipe_RCP_dokan_NEW_mesh_layer_1_vtx_0 + 46, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 0, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(5, 4, 7, 0),
	gsSPEndDisplayList(),
};

Vtx warp_pipe_RCP_dokan_NEW_mesh_layer_1_vtx_1[27] = {
	{{{-154, 163, -90},0, {131, 244},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-130, 163, -75},0, {16, 285},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-154, 163, 90},0, {-16, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{0, 163, -178},0, {-455, -262},{0x0, 0x81, 0x0, 0xFF}}},
	{{{0, 163, -150},0, {-478, -143},{0x0, 0x81, 0x0, 0xFF}}},
	{{{154, 163, -90},0, {-1186, -9},{0x0, 0x81, 0x0, 0xFF}}},
	{{{130, 163, -75},0, {-1095, 72},{0x0, 0x81, 0x0, 0xFF}}},
	{{{130, 163, 75},0, {-1218, 714},{0x0, 0x81, 0x0, 0xFF}}},
	{{{154, 163, 90},0, {-1333, 755},{0x0, 0x81, 0x0, 0xFF}}},
	{{{0, 163, 178},0, {-747, 1261},{0x0, 0x81, 0x0, 0xFF}}},
	{{{0, 163, 150},0, {-724, 1142},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-130, 163, 75},0, {-107, 927},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-154, 263, 90},0, {-1333, 755},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-96, 263, 56},0, {-1058, 658},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-154, 263, -90},0, {-1186, -9},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 263, 178},0, {-747, 1261},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-96, 263, 56},0, {-1058, 658},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 263, 178},0, {-747, 1261},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 263, 111},0, {-692, 975},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{154, 263, 90},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{96, 263, 56},0, {-236, 816},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{96, 263, -56},0, {-144, 341},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{154, 263, -90},0, {131, 244},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 263, -178},0, {-455, -262},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{0, 263, -111},0, {-510, 24},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-96, 263, -56},0, {-967, 183},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-154, 263, -90},0, {-1186, -9},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx warp_pipe_RCP_dokan_NEW_mesh_layer_1_tri_1[] = {
	gsSPVertex(warp_pipe_RCP_dokan_NEW_mesh_layer_1_vtx_1 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 0, 3, 0),
	gsSP1Triangle(1, 3, 4, 0),
	gsSP1Triangle(4, 3, 5, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(6, 5, 7, 0),
	gsSP1Triangle(8, 7, 5, 0),
	gsSP1Triangle(9, 7, 8, 0),
	gsSP1Triangle(9, 10, 7, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(2, 11, 9, 0),
	gsSP1Triangle(11, 2, 1, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(13, 12, 15, 0),
	gsSPVertex(warp_pipe_RCP_dokan_NEW_mesh_layer_1_vtx_1 + 16, 11, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 1, 3, 0),
	gsSP1Triangle(2, 3, 4, 0),
	gsSP1Triangle(4, 3, 5, 0),
	gsSP1Triangle(6, 5, 3, 0),
	gsSP1Triangle(7, 5, 6, 0),
	gsSP1Triangle(7, 8, 5, 0),
	gsSP1Triangle(7, 9, 8, 0),
	gsSP1Triangle(10, 9, 7, 0),
	gsSP1Triangle(9, 10, 0, 0),
	gsSPEndDisplayList(),
};


Gfx mat_warp_pipe_side_f3d[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, warp_pipe_side_ci8_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 17),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, warp_pipe_side_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPSetLights1(warp_pipe_side_f3d_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_warp_pipe_side_f3d[] = {
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx mat_warp_pipe_top_f3d[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, warp_pipe_top_ci8_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 35),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, warp_pipe_top_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(warp_pipe_top_f3d_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_warp_pipe_top_f3d[] = {
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx warp_pipe_RCP_dokan_NEW_mesh_layer_1[] = {
	gsSPDisplayList(mat_warp_pipe_side_f3d),
	gsSPDisplayList(warp_pipe_RCP_dokan_NEW_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_warp_pipe_side_f3d),
	gsSPDisplayList(mat_warp_pipe_top_f3d),
	gsSPDisplayList(warp_pipe_RCP_dokan_NEW_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_warp_pipe_top_f3d),
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

