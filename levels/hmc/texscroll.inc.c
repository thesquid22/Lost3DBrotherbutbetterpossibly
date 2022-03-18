void scroll_hmc_dl_CaveDungeon_mesh_layer_1_vtx_16() {
	int i = 0;
	int count = 56;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(hmc_dl_CaveDungeon_mesh_layer_1_vtx_16);

	deltaY = (int)(-0.10000000149011612 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_hmc_dl_CaveDungeon_mesh_layer_1_vtx_25() {
	int i = 0;
	int count = 44;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(hmc_dl_CaveDungeon_mesh_layer_1_vtx_25);

	deltaX = (int)(0.10000000149011612 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_hmc_dl_CaveDungeon_mesh_layer_1_vtx_31() {
	int i = 0;
	int count = 133;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(hmc_dl_CaveDungeon_mesh_layer_1_vtx_31);

	deltaY = (int)(-0.10000000149011612 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_hmc() {
	scroll_hmc_dl_CaveDungeon_mesh_layer_1_vtx_16();
	scroll_hmc_dl_CaveDungeon_mesh_layer_1_vtx_25();
	scroll_hmc_dl_CaveDungeon_mesh_layer_1_vtx_31();
}
