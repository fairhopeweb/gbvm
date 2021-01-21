#pragma bank 255

// SpriteSheet: elephant

#include "gbs_types.h"

const void __at(255) __bank_spritesheet_10;

const metasprite_t spritesheet_10_metasprite_0  = {
    19, 
    {
        {0,  0,  8,  0,  0}, 
        {1,  0, 16,  2,  0}, 
        {1,  0, 24,  4,  0}, 
        {1,  0, 32,  6,  0}, 
        {1,  0, 40,  8,  0}, 
        {1,  0, 48,  0, 32}, 

        {1, 16,  8, 10,  0}, 
        {1, 16, 16, 12,  0}, 
        {1, 16, 24, 14,  0}, 
        {1, 16, 32, 16,  0}, 
        {1, 16, 40, 16, 32}, 
        {1, 16, 48, 18,  0}, 
        {1, 16, 56, 20,  0}, 

        {1, 32,  8, 22,  0}, 
        {1, 32, 24, 24,  0}, 
        {1, 32, 32, 26,  0}, 
        {1, 32, 40, 28,  0}, 
        {1, 32, 48, 30,  0}, 
        {1, 32, 56, 32,  0}, 

        {metasprite_end}
    }
};

const metasprite_t *spritesheet_10_metasprites[] = {
    &spritesheet_10_metasprite_0
};

const struct spritesheet_t spritesheet_10 = {
    .n_tiles = 17,
    .n_metasprites = 1,
    .metasprites = spritesheet_10_metasprites,
    .tiles = {
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x03,0x0d,0x0e,0x1f,0x10,0x3f,0x20,0x3f,0x20,
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0x00,0x00,0x03,0x03,0xfd,0xfe,0x3f,0xc0,0xff,0x0c,0xff,0x13,0xf7,0x08,0xc1,0x3e,
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0x7f,0x7f,0x9f,0xe0,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x80,0xff,0x40,
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0xf0,0xf0,0xcf,0x3f,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
        0x00,0x00,0xc0,0xc0,0x3c,0xfc,0xf3,0x0f,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
        0x3f,0x20,0x3f,0x20,0x3f,0x20,0x3f,0x20,0x3f,0x20,0x3f,0x23,0x3d,0x23,0x5e,0x61,
        0x5e,0x61,0x7c,0x43,0x78,0x47,0x79,0x47,0xbb,0xc7,0xb3,0xcf,0xf2,0x8e,0xf4,0x8c,
        0xc0,0x3f,0xc0,0x3f,0xc0,0x3f,0xcf,0x30,0xff,0x08,0xbf,0xc4,0xe7,0xdc,0x07,0xfc,
        0x02,0xff,0x03,0xff,0x00,0xff,0x87,0xff,0xff,0xff,0xc1,0xc1,0x01,0x01,0x00,0x00,
        0xff,0x20,0x7f,0xa0,0x7f,0x90,0xff,0x10,0xff,0x10,0xdf,0x30,0xff,0x60,0xbf,0xc0,
        0xbd,0xc2,0x3c,0xc3,0x7e,0x81,0xff,0x80,0xff,0x80,0xbf,0xc0,0xff,0xc0,0xff,0xc0,
        0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0x3f,0xc0,
        0x07,0xf8,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x00,0xff,0x40,0xff,0x40,0xff,
        0xfe,0x02,0xfe,0x02,0xfd,0x03,0xff,0x01,0xff,0x01,0xff,0x01,0xff,0x00,0x7f,0x80,
        0x7f,0x80,0xff,0x00,0xfe,0x01,0xff,0x01,0xfd,0x03,0xfd,0x03,0x79,0x87,0x71,0x8f,
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x80,0x80,0x80,
        0x40,0xc0,0xc0,0x40,0xc0,0x40,0xc0,0x40,0xe0,0x20,0x60,0xa0,0x60,0xa0,0xa0,0xe0,
        0xf4,0x8c,0xf4,0x8c,0xb4,0xcc,0xb8,0xc8,0xb8,0xc8,0x78,0x48,0x78,0x48,0x78,0x48,
        0x74,0x4c,0x5c,0x64,0x3c,0x24,0x3e,0x22,0x19,0x17,0x0b,0x0f,0x06,0x06,0x00,0x00,
        0xdf,0xe0,0x7f,0x60,0x7e,0x61,0x6e,0x71,0x7e,0x71,0x7c,0x73,0x70,0x7f,0x78,0x7f,
        0x78,0x7f,0x78,0x7f,0x7c,0x7f,0x7c,0x7f,0x7c,0x7f,0xfb,0xfc,0xfb,0xfc,0x0f,0x0f,
        0x70,0xff,0x4f,0xcf,0x41,0xc1,0x40,0xc0,0x40,0xc0,0x40,0xc0,0x20,0xe0,0x20,0xe0,
        0x20,0xe0,0x20,0xe0,0x20,0xe0,0x10,0xf0,0x10,0xf0,0x90,0x70,0xd0,0x30,0xe0,0xe0,
        0x02,0xff,0xfe,0xff,0xfe,0xff,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x1f,0x1f,
        0x1f,0x1f,0x1f,0x1f,0x1f,0x1f,0x1f,0x1f,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x00,0x00,
        0x01,0xff,0x01,0xff,0x01,0xff,0x01,0xff,0x01,0xff,0x82,0xfe,0x82,0xfe,0xc2,0xfe,
        0xc2,0xfe,0x42,0x7e,0x42,0x7e,0x42,0x7e,0x81,0xff,0xb9,0xc7,0xfd,0x83,0xfe,0xfe,
        0x50,0x70,0x50,0x70,0x50,0x70,0x50,0x70,0x30,0x30,0x20,0x20,0x00,0x00,0x00,0x00,
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    }
};
