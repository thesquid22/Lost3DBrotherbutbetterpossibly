void scroll_bob_dl_SkyHighFortress_mesh_layer_1_vtx_19() {
	int i = 0;
	int count = 16;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(bob_dl_SkyHighFortress_mesh_layer_1_vtx_19);

	deltaX = (int)(-0.10000000149011612 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_bob() {
	scroll_bob_dl_SkyHighFortress_mesh_layer_1_vtx_19();
}
