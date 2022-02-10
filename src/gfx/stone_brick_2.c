// convpng v6.8
#include <stdint.h>
#include "logo_gfx.h"

// 8 bpp image
uint8_t stone_brick_2_data[785] = {
 27,29,  // width,height
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x0A,0x0A,0xFB,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x07,0x07,0x07,0x07,0x07,0xFB,0x5F,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x04,0x07,0xFB,0x07,0x0A,0x07,0x07,0x07,0xFB,0xFB,0xFB,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x04,0x04,0x07,0x07,0xFB,0x04,0x04,0x0A,0xFB,0x07,0xFB,0xFB,0xC4,0x07,0xFB,0xFB,0xFB,0x04,0x04,0x00,0x00,0x00,0x00,
 0x00,0x00,0x04,0x04,0x07,0xFB,0x0A,0x0A,0x07,0xFB,0x07,0x04,0x04,0xFB,0x07,0x07,0xFB,0xFB,0x07,0x07,0x0A,0xFB,0xFB,0x04,0x04,0x00,0x00,
 0x00,0x04,0x07,0x07,0xFB,0x0A,0x07,0x0A,0x07,0x07,0x0A,0x0A,0xFB,0x04,0x04,0x07,0x07,0x07,0x07,0x0A,0x0A,0x0A,0x0A,0xFB,0x5F,0x04,0x00,
 0x00,0x04,0x04,0x04,0x07,0x07,0x07,0x07,0x0A,0x0A,0x07,0x07,0xC4,0x07,0x07,0x04,0x04,0x07,0xFB,0x07,0x07,0x07,0x07,0x04,0x04,0x04,0x00,
 0x00,0x04,0x0C,0x0C,0x04,0x04,0x07,0x0A,0x07,0x07,0xFB,0x07,0x07,0xFC,0x0A,0x07,0x07,0x04,0x04,0x0A,0x0A,0x04,0x04,0xF9,0x13,0x04,0x00,
 0x00,0x04,0x08,0x08,0x0C,0x0C,0x04,0x04,0xFB,0xC4,0x07,0x07,0xFB,0x07,0x07,0xFB,0x07,0x0A,0x0A,0x04,0x04,0x0B,0x1C,0xF9,0x13,0x04,0x00,
 0x00,0x04,0x08,0xFC,0x08,0x08,0x08,0x08,0x04,0x04,0xFB,0x07,0x07,0x07,0xFB,0x07,0x07,0x04,0x04,0x04,0x0B,0x1C,0xF9,0xF9,0x13,0x04,0x00,
 0x00,0x04,0x08,0x08,0x0C,0xFC,0x08,0x08,0x08,0xFC,0x04,0x04,0x0A,0x0A,0x07,0x04,0x04,0xF9,0xF9,0x04,0xF9,0xF9,0xF9,0x0B,0x13,0x04,0x00,
 0x00,0x04,0x0C,0x08,0x08,0x08,0x0C,0x08,0x08,0x08,0x08,0x0C,0x04,0x04,0x04,0xF9,0xF9,0x0B,0x0B,0x04,0x0B,0xF9,0x0B,0xF9,0x13,0x04,0x00,
 0x00,0x04,0xFC,0x08,0x08,0x08,0x08,0x08,0xFC,0x08,0x08,0x08,0xFC,0x04,0xF9,0x0B,0x0B,0x1C,0xF9,0x04,0xF9,0xF9,0xF9,0xF9,0x13,0x04,0x00,
 0x00,0x04,0x04,0x04,0x0C,0x0C,0x08,0x08,0x08,0x0C,0x0C,0x08,0x4C,0x04,0x0B,0xF9,0xF9,0xF9,0xF9,0x04,0xF9,0x0B,0xF9,0x04,0x04,0x04,0x00,
 0x00,0x04,0x0C,0x0C,0x04,0x04,0xFC,0x08,0x08,0x08,0x08,0xFC,0xFC,0x04,0xF9,0x0B,0x1C,0xF9,0x0B,0x04,0xF9,0x04,0x04,0xF9,0x13,0x04,0x00,
 0x00,0x04,0xFC,0x08,0x08,0xFC,0x04,0x04,0x0C,0x0C,0x08,0x08,0xFC,0x04,0x0B,0x0B,0xF9,0xF9,0xF9,0x04,0x04,0x0B,0xF9,0xF9,0x13,0x04,0x00,
 0x00,0x04,0x0C,0xFC,0x08,0x08,0x08,0x04,0x04,0x04,0x0C,0x0C,0x4C,0x04,0xF9,0xF9,0x1C,0x04,0x04,0xF9,0xF9,0xF9,0xF9,0xF9,0x13,0x04,0x00,
 0x00,0x04,0x08,0x08,0x0C,0xFC,0xFC,0x04,0x08,0x0C,0x04,0x04,0x4C,0x04,0xF9,0x04,0x04,0xF9,0x0B,0xF9,0x1C,0xF9,0x0B,0xF9,0x13,0x04,0x00,
 0x00,0x04,0x08,0x0C,0x0C,0x08,0x08,0x04,0x08,0x08,0x0C,0x08,0x04,0x04,0x04,0xF9,0xF9,0x0B,0xF9,0xF9,0xF9,0x0B,0xF9,0xF9,0x13,0x04,0x00,
 0x00,0x04,0xFC,0xFC,0x08,0x08,0x08,0x04,0x0C,0x0C,0xFC,0x08,0xFC,0x04,0x0B,0xF9,0x0B,0xF9,0x0B,0xF9,0xF9,0xF9,0xF9,0x0B,0x13,0x04,0x00,
 0x00,0x00,0x04,0x04,0x0C,0x0C,0x08,0x04,0x08,0x08,0x08,0xFC,0x4C,0x04,0xF9,0x0B,0x1C,0xF9,0xF9,0xF9,0xF9,0x0B,0xF9,0x04,0x04,0x00,0x00,
 0x00,0x00,0x00,0x00,0x04,0x04,0x08,0x04,0x08,0xFC,0x08,0x0C,0x4C,0x04,0xF9,0x0B,0xF9,0xF9,0x0B,0xF9,0xF9,0x04,0x04,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x08,0x08,0x0C,0x0C,0xFC,0x04,0x1C,0xF9,0xF9,0x0B,0x1C,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x0C,0x08,0xFC,0x04,0x0B,0xF9,0xF9,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x4C,0x04,0x0B,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
