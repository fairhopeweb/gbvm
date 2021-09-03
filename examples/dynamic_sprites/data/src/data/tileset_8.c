#pragma bank 255

// Tileset: 8

#include "gbs_types.h"

BANKREF(tileset_8)

const struct tileset_t tileset_8 = {
    .n_tiles = 52,
    .tiles = {
        0x80, 0x80, 0x80, 0x80, 0x40, 0xC0, 0xC0, 0x40, 0xC0, 0x40, 0xC0, 0x40, 0xE0, 0x20, 0x60, 0xA0,
        0x60, 0xA0, 0xA0, 0xE0, 0x50, 0x70, 0x50, 0x70, 0x50, 0x70, 0x50, 0x70, 0x30, 0x30, 0x20, 0x20,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x0D, 0x0E, 0x1F, 0x10, 0x3F, 0x20, 0x3F, 0x20,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x03, 0x03, 0xFD, 0xFE, 0x3F, 0xC0, 0xFF, 0x0C, 0xFF, 0x13, 0xF7, 0x08, 0xC1, 0x3E,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x7F, 0x7F, 0x9F, 0xE0, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x80, 0xFF, 0x40,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0xF0, 0xF0, 0xCF, 0x3F, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0xC0, 0xC0, 0x3C, 0xFC, 0xF3, 0x0F, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00,
        0x3F, 0x20, 0x3F, 0x20, 0x3F, 0x20, 0x3F, 0x20, 0x3F, 0x20, 0x3F, 0x23, 0x3D, 0x23, 0x5E, 0x61,
        0x5E, 0x61, 0x7C, 0x43, 0x78, 0x47, 0x79, 0x47, 0xBB, 0xC7, 0xB3, 0xCF, 0xF2, 0x8E, 0xF4, 0x8C,
        0xC0, 0x3F, 0xC0, 0x3F, 0xC0, 0x3F, 0xCF, 0x30, 0xFF, 0x08, 0xBF, 0xC4, 0xE7, 0xDC, 0x07, 0xFC,
        0x02, 0xFF, 0x03, 0xFF, 0x00, 0xFF, 0x87, 0xFF, 0xFF, 0xFF, 0xC1, 0xC1, 0x01, 0x01, 0x00, 0x00,
        0xFF, 0x20, 0x7F, 0xA0, 0x7F, 0x90, 0xFF, 0x10, 0xFF, 0x10, 0xDF, 0x30, 0xFF, 0x60, 0xBF, 0xC0,
        0xBD, 0xC2, 0x3C, 0xC3, 0x7E, 0x81, 0xFF, 0x80, 0xFF, 0x80, 0xBF, 0xC0, 0xFF, 0xC0, 0xFF, 0xC0,
        0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x3F, 0xC0,
        0x07, 0xF8, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x40, 0xFF, 0x40, 0xFF,
        0xFE, 0x02, 0xFE, 0x02, 0xFD, 0x03, 0xFF, 0x01, 0xFF, 0x01, 0xFF, 0x01, 0xFF, 0x00, 0x7F, 0x80,
        0x7F, 0x80, 0xFF, 0x00, 0xFE, 0x01, 0xFF, 0x01, 0xFD, 0x03, 0xFD, 0x03, 0x79, 0x87, 0x71, 0x8F,
        0xF4, 0x8C, 0xF4, 0x8C, 0xB4, 0xCC, 0xB8, 0xC8, 0xB8, 0xC8, 0x78, 0x48, 0x78, 0x48, 0x78, 0x48,
        0x74, 0x4C, 0x5C, 0x64, 0x3C, 0x24, 0x3E, 0x22, 0x19, 0x17, 0x0B, 0x0F, 0x06, 0x06, 0x00, 0x00,
        0xDF, 0xE0, 0x7F, 0x60, 0x7E, 0x61, 0x6E, 0x71, 0x7E, 0x71, 0x7C, 0x73, 0x70, 0x7F, 0x78, 0x7F,
        0x78, 0x7F, 0x78, 0x7F, 0x7C, 0x7F, 0x7C, 0x7F, 0x7C, 0x7F, 0xFB, 0xFC, 0xFB, 0xFC, 0x0F, 0x0F,
        0x70, 0xFF, 0x4F, 0xCF, 0x41, 0xC1, 0x40, 0xC0, 0x40, 0xC0, 0x40, 0xC0, 0x20, 0xE0, 0x20, 0xE0,
        0x20, 0xE0, 0x20, 0xE0, 0x20, 0xE0, 0x10, 0xF0, 0x10, 0xF0, 0x90, 0x70, 0xD0, 0x30, 0xE0, 0xE0,
        0x02, 0xFF, 0xFE, 0xFF, 0xFE, 0xFF, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x1F, 0x1F,
        0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x00, 0x00,
        0x01, 0xFF, 0x01, 0xFF, 0x01, 0xFF, 0x01, 0xFF, 0x01, 0xFF, 0x82, 0xFE, 0x82, 0xFE, 0xC2, 0xFE,
        0xC2, 0xFE, 0x42, 0x7E, 0x42, 0x7E, 0x42, 0x7E, 0x81, 0xFF, 0xB9, 0xC7, 0xFD, 0x83, 0xFE, 0xFE,
        0x7A, 0x46, 0x7A, 0x46, 0x7A, 0x46, 0xBC, 0xC4, 0xF4, 0x8C, 0xF8, 0x88, 0xF8, 0x88, 0xF8, 0x88,
        0xB8, 0xC8, 0x78, 0x48, 0x74, 0x4C, 0x3C, 0x24, 0x32, 0x2E, 0x16, 0x1E, 0x0C, 0x0C, 0x00, 0x00,
        0x80, 0x80, 0x80, 0x80, 0x40, 0xC0, 0xC0, 0x40, 0xC0, 0x40, 0xE0, 0x60, 0x60, 0xA0, 0xB0, 0xF0,
        0x70, 0x70, 0x50, 0x70, 0x38, 0x38, 0x38, 0x38, 0x28, 0x38, 0x18, 0x18, 0x18, 0x18, 0x08, 0x08,
        0x80, 0x80, 0x80, 0x80, 0x40, 0xC0, 0xC0, 0x40, 0xE0, 0x60, 0xE0, 0x60, 0xF0, 0xB0, 0xB0, 0xF0,
        0x78, 0x78, 0x34, 0x3C, 0x1C, 0x1C, 0x0A, 0x0A, 0x05, 0x05, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00,
        0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x02, 0x03, 0x03, 0x02, 0x03, 0x02, 0x05, 0x06, 0x07, 0x04,
        0x07, 0x04, 0x07, 0x04, 0x07, 0x04, 0x05, 0x06, 0x03, 0x02, 0x02, 0x03, 0x01, 0x01, 0x00, 0x00,
        0x74, 0x8C, 0xF4, 0x0C, 0xE8, 0x18, 0xF8, 0x18, 0xD0, 0x30, 0xE0, 0x20, 0xC0, 0x40, 0x40, 0xC0,
        0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x40, 0xC0, 0x40, 0xC0, 0x40, 0xC0, 0xC0, 0xC0, 0x00, 0x00,
        0x80, 0x80, 0x80, 0x80, 0x40, 0xC0, 0xC0, 0x40, 0xC0, 0x40, 0xE0, 0x60, 0x60, 0xA0, 0xB0, 0xF0,
        0x70, 0x70, 0x50, 0x70, 0x38, 0x38, 0x28, 0x28, 0x28, 0x38, 0x18, 0x18, 0x18, 0x18, 0x08, 0x08,
        0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x02, 0x03, 0x03, 0x02, 0x07, 0x04, 0x07, 0x04, 0x0F, 0x08,
        0x0F, 0x09, 0x15, 0x1B, 0x1E, 0x12, 0x1E, 0x12, 0x1A, 0x16, 0x12, 0x1E, 0x1E, 0x1E, 0x00, 0x00,
        0x74, 0x8C, 0xF4, 0x0C, 0xE8, 0x18, 0xF8, 0x18, 0xD0, 0x30, 0xE0, 0x20, 0xC0, 0x40, 0x80, 0x80,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x80, 0x80, 0x80, 0x80, 0x40, 0xC0, 0xC0, 0x40, 0xC0, 0x40, 0xC0, 0x40, 0x60, 0xA0, 0x20, 0xE0,
        0x60, 0xE0, 0xA0, 0xE0, 0x50, 0x70, 0x50, 0x70, 0x50, 0x70, 0x50, 0x70, 0x30, 0x30, 0x20, 0x20,
        0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x02, 0x03, 0x03, 0x02, 0x07, 0x04, 0x0B, 0x0C, 0x0F, 0x08,
        0x1F, 0x11, 0x1E, 0x12, 0x2A, 0x36, 0x3C, 0x24, 0x24, 0x3C, 0x28, 0x38, 0x38, 0x38, 0x00, 0x00
    }
};
