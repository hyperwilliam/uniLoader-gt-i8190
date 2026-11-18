#include <board.h>
#include <util.h>
#include <drivers/framework.h>
#include <lib/simplefb.h>

static struct video_info golden_fb = {
	.format = FB_FORMAT_ARGB8888,
	.width = 480,
	.height = 800,
	.stride = 4,
	.scale = 1,
	.address = (void *)0x9000000
};

static const struct device golden_devices[] = {
	{ "simplefb", &golden_fb, "fb" },
};

struct board_data board_ops = {
	.name = "samsung-golden",
	.devices = golden_devices,
	.num_devices = ARRAY_SIZE(golden_devices),
	.quirks = 0
};
