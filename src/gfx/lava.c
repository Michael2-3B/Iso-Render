// convpng v6.8
#include <stdint.h>
#include "logo_gfx.h"

// 8 bpp image
uint8_t lava_data[678] = {
 26,26,  // width,height
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0B,0x0B,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0B,0x0B,0x11,0x11,0x0B,0x0B,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0B,0x0B,0x11,0x11,0x11,0x11,0x11,0x11,0x0B,0x0B,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x0B,0x0B,0x11,0x11,0x11,0x11,0x11,0x0B,0x11,0x11,0x11,0x11,0x0B,0x0B,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x0B,0x0B,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x0B,0x0B,0x11,0x11,0x11,0x11,0x0B,0x0B,0x00,0x00,0x00,0x00,
 0x00,0x00,0x0B,0x0B,0x11,0x11,0x11,0x11,0x0B,0x0B,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x0B,0x0B,0x00,0x00,
 0x0B,0x0B,0x11,0x11,0x11,0x11,0x11,0x0B,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x0B,0x0B,
 0x0B,0x16,0x0B,0x0B,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x0B,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x0B,0x0B,0x13,0x0B,
 0x0B,0x16,0x16,0x16,0x0B,0x0B,0x11,0x11,0x11,0x11,0x11,0x11,0x0B,0x0B,0x11,0x11,0x11,0x11,0x11,0x11,0x0B,0x0B,0x13,0x13,0x13,0x0B,
 0x0B,0x16,0x16,0x16,0x16,0x16,0x0B,0x0B,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x0B,0x0B,0x13,0x13,0x13,0x13,0x13,0x0B,
 0x0B,0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x0B,0x0B,0x11,0x11,0x11,0x11,0x11,0x11,0x0B,0x0B,0x13,0x13,0x13,0x13,0x13,0x13,0x13,0x0B,
 0x0B,0x16,0x16,0x0B,0x16,0x16,0x16,0x16,0x16,0x16,0x0B,0x0B,0x11,0x11,0x0B,0x0B,0x13,0x13,0x13,0x13,0x0B,0x13,0x13,0x13,0x13,0x0B,
 0x0B,0x16,0x16,0x16,0x0B,0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x0B,0x0B,0x13,0x13,0x13,0x13,0x0B,0x0B,0x13,0x13,0x13,0x13,0x13,0x0B,
 0x0B,0x16,0x16,0x16,0x0B,0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x0B,0x13,0x13,0x13,0x13,0x0B,0x13,0x13,0x13,0x13,0x13,0x13,0x13,0x0B,
 0x0B,0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x0B,0x13,0x13,0x13,0x13,0x13,0x13,0x13,0x13,0x13,0x0B,0x0B,0x13,0x0B,
 0x0B,0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x0B,0x13,0x13,0x13,0x13,0x13,0x13,0x13,0x13,0x0B,0x13,0x13,0x13,0x0B,
 0x0B,0x16,0x16,0x16,0x16,0x16,0x16,0x0B,0x16,0x16,0x16,0x16,0x0B,0x13,0x13,0x13,0x13,0x13,0x13,0x13,0x13,0x13,0x13,0x13,0x13,0x0B,
 0x0B,0x0B,0x16,0x16,0x16,0x16,0x16,0x16,0x0B,0x0B,0x16,0x16,0x0B,0x13,0x13,0x13,0x0B,0x0B,0x13,0x13,0x13,0x13,0x13,0x13,0x0B,0x0B,
 0x00,0x00,0x0B,0x0B,0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x0B,0x13,0x13,0x0B,0x13,0x13,0x13,0x13,0x13,0x13,0x0B,0x0B,0x00,0x00,
 0x00,0x00,0x00,0x00,0x0B,0x0B,0x16,0x16,0x16,0x16,0x16,0x16,0x0B,0x13,0x13,0x13,0x13,0x13,0x13,0x13,0x0B,0x0B,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x0B,0x0B,0x16,0x16,0x16,0x16,0x0B,0x13,0x13,0x13,0x13,0x13,0x0B,0x0B,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0B,0x0B,0x16,0x16,0x0B,0x13,0x13,0x13,0x0B,0x0B,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0B,0x0B,0x0B,0x13,0x0B,0x0B,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0B,0x0B,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
