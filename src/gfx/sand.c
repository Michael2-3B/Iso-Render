// convpng v6.8
#include <stdint.h>
#include "logo_gfx.h"

// 8 bpp image
uint8_t sand_data[785] = {
 27,29,  // width,height
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0xB8,0xB8,0xB8,0x36,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x36,0x51,0x66,0x77,0x51,0xB8,0xB2,0x66,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x66,0xB8,0xB8,0xB8,0xAD,0xB8,0x66,0xB8,0xB8,0xB8,0xB2,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x04,0x04,0xB8,0xB2,0x66,0x51,0xB8,0xC7,0x77,0x66,0xB2,0x51,0xB8,0x66,0xB8,0xB2,0xB8,0x04,0x04,0x00,0x00,0x00,0x00,
 0x00,0x00,0x04,0x04,0xB8,0xB8,0x66,0x66,0x51,0x66,0x66,0x66,0x66,0xD4,0xC7,0x66,0x66,0xB8,0x51,0xB8,0x66,0xB8,0xB8,0x04,0x04,0x00,0x00,
 0x00,0x36,0xB2,0x66,0xB8,0x66,0xC0,0x66,0xB8,0x51,0xB8,0xAD,0x51,0x66,0x51,0xC7,0xAD,0x77,0xD4,0xC7,0x51,0xC7,0x66,0xB8,0xC7,0x04,0x00,
 0x00,0x04,0x36,0x04,0x51,0xB8,0xB8,0x66,0x66,0x66,0x66,0xB8,0xD4,0xC0,0xD4,0xB2,0xC7,0xAD,0xC7,0x66,0x66,0xB2,0xB2,0x04,0x36,0x04,0x00,
 0x00,0x04,0xC0,0x9F,0x04,0x04,0xB8,0xB2,0xB2,0xC0,0x51,0xD4,0xB2,0xD4,0x51,0xD4,0x51,0x51,0xB8,0x51,0xB8,0x04,0x04,0x3C,0x88,0x04,0x00,
 0x00,0x04,0x57,0x51,0x57,0x57,0x04,0x04,0x66,0xC7,0x66,0xC7,0x66,0xB2,0xC7,0x66,0x66,0xB8,0xB8,0x36,0x04,0x3C,0xDF,0x7D,0x4F,0x04,0x00,
 0x00,0x04,0xD0,0x57,0x51,0x51,0x51,0x51,0x36,0x04,0xB8,0x51,0x66,0x66,0xB8,0xB8,0xB2,0x04,0x04,0x3C,0x3C,0x4F,0x4F,0x3C,0xD9,0x04,0x00,
 0x00,0x04,0xD0,0xD0,0x9F,0x57,0x57,0xD0,0x51,0x57,0x04,0x04,0x66,0xD4,0xB8,0x36,0x04,0xD9,0x3C,0xDF,0x3C,0x4F,0x7D,0x4F,0xD9,0x04,0x00,
 0x00,0x04,0xD0,0x51,0x9F,0x9F,0x51,0xC3,0x57,0xC3,0x57,0x57,0x04,0x04,0x04,0x7D,0x3C,0x4F,0x4F,0x4F,0xDF,0x3C,0x3C,0x3C,0x88,0x04,0x00,
 0x00,0x04,0x57,0xC8,0xAD,0xC8,0x57,0xAD,0xAD,0x51,0xC3,0x57,0xC8,0x04,0x7D,0x3C,0x4F,0x3C,0x3C,0x7D,0x3C,0x7D,0x4F,0x4F,0xD9,0x04,0x00,
 0x00,0x04,0xC0,0x57,0x51,0x57,0x57,0xD0,0x57,0x51,0xC3,0x51,0xCE,0x36,0x4F,0x7D,0x3C,0x7D,0x7D,0x4F,0x4F,0x4F,0x4F,0x7D,0x88,0x36,0x00,
 0x00,0x04,0xD0,0x9F,0x9F,0xAD,0x9F,0x57,0xC3,0xD0,0x51,0xC3,0x9F,0x04,0x3C,0x3C,0x4F,0x3C,0x7D,0x7D,0x4F,0x4F,0x4F,0x4F,0xD9,0x04,0x00,
 0x00,0x04,0x51,0xC8,0xC0,0xD0,0x9F,0x9F,0x51,0x57,0xC8,0xAD,0xC8,0x04,0x7D,0x3C,0x4F,0x3C,0x7D,0x7D,0x3C,0x3C,0x7D,0x3C,0x88,0x04,0x00,
 0x00,0x04,0x51,0x9F,0x9F,0x57,0x57,0x9F,0x57,0x9F,0x51,0xEE,0xC8,0x04,0x3C,0x3C,0x4F,0x3C,0x4F,0x3C,0x7D,0x3C,0x3C,0x4F,0x88,0x04,0x00,
 0x00,0x04,0xAD,0x57,0xC3,0x51,0xC3,0x9F,0x9F,0x57,0xC3,0xC0,0xCE,0x04,0xDF,0x7D,0x3C,0x4F,0x3C,0x3C,0x4F,0x4F,0x3C,0x4F,0x88,0x04,0x00,
 0x00,0x04,0x57,0x57,0xC3,0x9F,0x51,0xC0,0x9F,0xAD,0x57,0x51,0xC8,0x04,0x4F,0x4F,0x4F,0x7D,0x3C,0x4F,0xD9,0x4F,0x7D,0x7D,0x3C,0x04,0x00,
 0x00,0x04,0x51,0x51,0xAD,0xC0,0xD0,0x57,0xC8,0xC0,0x57,0xC3,0x57,0x04,0x3C,0x7D,0xDF,0xD9,0x4F,0x7D,0x3C,0xD9,0x4F,0x7D,0x3C,0x04,0x00,
 0x00,0x00,0x36,0x18,0x57,0x51,0x51,0x57,0x51,0x9F,0x57,0x57,0x9F,0x04,0x3C,0x4F,0x7D,0x3C,0x4F,0x3C,0x4F,0x4F,0x3C,0x04,0x04,0x00,0x00,
 0x00,0x00,0x00,0x00,0x04,0x04,0x57,0x57,0x57,0xAD,0xD0,0x57,0xC3,0x36,0x3C,0x7D,0xDF,0x3C,0x3C,0x7D,0x3C,0x36,0x04,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x57,0x57,0x57,0xC8,0xC8,0x36,0x3C,0x4F,0x3C,0x3C,0x3C,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x57,0x51,0xCE,0x04,0x7D,0x4F,0x3C,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0xC8,0x04,0x4F,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};
