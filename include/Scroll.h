#ifndef SCROLL_H
#define SCROLL_H

#include <gb/gb.h>

#define SCROLL_BANK 1
#define SCREEN_TILES_W 20  // 160 >> 3 = 20
#define SCREEN_TILES_H 18  // 144 >> 3 = 18
#define SCREEN_PAD_LEFT 1
#define SCREEN_PAD_RIGHT 2
#define SCREEN_PAD_TOP 1
#define SCREEN_PAD_BOTTOM 2
#define SCREEN_TILE_REFRES_W (SCREEN_TILES_W + SCREEN_PAD_LEFT + SCREEN_PAD_RIGHT)
#define SCREEN_TILE_REFRES_H (SCREEN_TILES_H + SCREEN_PAD_TOP + SCREEN_PAD_BOTTOM)
#define PENDING_BATCH_SIZE 7

extern INT16 scroll_x;
extern INT16 scroll_y;
extern INT16 draw_scroll_x;
extern INT16 draw_scroll_y;
extern UINT16 scroll_x_max;
extern UINT16 scroll_y_max;
extern BYTE scroll_offset_x;
extern BYTE scroll_offset_y;
extern UINT8 pending_w_i;
extern UINT8 pending_h_i;

/**
 * Initialise scroll variables, call on scene load
 */
void scroll_init() __banked;

/**
 * Update scroll position and load in any newly visible background tiles and actors
 */
void scroll_update() __banked;

/**
 * Set vram tile at memory location to a value from a second memory location
 * 
 * @param r address of tile to write to
 * @param t address of new tile value
 */
void SetTile(UBYTE * r, UINT8 t) __preserves_regs(b, c);

/**
 * Wait for LCD controller mode 1 or 0 (Can access OAM)
 */
void WaitForMode0Or1() __preserves_regs(b, c, d, e, h, l);

UINT8 * GetWinAddr() __preserves_regs(b, c, h, l);
UINT8 * GetBkgAddr() __preserves_regs(b, c, h, l);

void set_win_tile_xy(UBYTE x, UBYTE y, UBYTE t) __preserves_regs(b, c);
void set_bkg_tile_xy(UBYTE x, UBYTE y, UBYTE t) __preserves_regs(b, c);

/**
 * extract tile map from buffer, containing another tilemap with image_tile_width X image_tile_width dimentions, stored in global variables
 */
void get_map_from_buf(UBYTE x, UBYTE y, UBYTE w, UBYTE h, unsigned char * dest, unsigned char * image) __preserves_regs(b, c);

/**
 * put tile map from buffer onto screen, containing another tilemap with image_tile_width X image_tile_width dimentions, stored in global variables
 */
void map_to_screen(UBYTE x, UBYTE y, UBYTE w, UBYTE h, unsigned char * dest, unsigned char * image);

#endif
