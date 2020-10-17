/**
 * @brief aGFXL -- ashep's Graphics Library
 *
 * @author    Alexander Shepetko <a@shepetko.com>
 * @copyright MIT License
 */

#ifndef _AGFXL_H_
#define _AGFXL_H_

#include "stdint.h"

/**
 * Errors
 */
typedef enum {
    AGFXL_OK,
    AGFXL_FAIL,
    AGFXL_BAD_ARG,
    AGFXL_NO_MEM,
} agfxl_err_t;

/**
 * Color modes
 */
typedef enum {
    AGFXL_C_MODE_MONO,
    AGFXL_C_MODE_RGB565,
    AGFXL_C_MODE_ARGB888,
} agfxl_cmode_t;

/**
 * Common colors
 */
typedef enum {
    AESPL_C_MONO_0,
    AESPL_C_MONO_1,
} agfxl_color_mono_t;

/**
 * Graphics buffer
 */
typedef struct {
    uint16_t width;       // columns
    uint16_t height;      // rows
    agfxl_cmode_t color;  // color mode
    uint8_t ppw;          // pixels per 2-byte word
    uint8_t wpr;          // 2-byte words per row
    uint32_t **content;   // pixels
} agfxl_buf_t;

/**
 * Array of graphic buffers
 */
typedef struct {
    uint16_t length;       // number of buffers
    agfxl_cmode_t color;   // color mode
    agfxl_buf_t *buffers;  // buffers
} agfxl_buf_array_t;

/**
 * Point
 */
typedef struct {
    int16_t x;
    int16_t y;
} agfxl_point_t;

/**
 * Line
 */
typedef struct {
    agfxl_point_t p1;
    agfxl_point_t p2;
} agfxl_line_t;

/**
 * Polygon
 */
typedef struct {
    uint8_t n_corners;
    agfxl_point_t *corners;
} agfxl_poly_t;

/**
 * Font row's sizes
 */
typedef enum {
    AGFXL_FONT_WIDTH_8 = 8,
    AGFXL_FONT_WIDTH_16 = 16,
    AGFXL_FONT_WIDTH_32 = 32,
    AGFXL_FONT_WIDTH_64 = 64,
} agfxl_font_width_t;

/**
 * Font
 */
typedef struct {
    uint8_t ascii_offset;      // char code offset relative to ASCII table
    uint8_t length;            // number of covered ASCII codes staring from ascii_offset
    agfxl_font_width_t width;  // number of bits per row
    uint8_t height;            // number of rows per character
    union {
        const uint8_t *c8;    // pointer to 1-byte content
        const uint16_t *c16;  // pointer to 2-byte content
        const uint32_t *c32;  // pointer to 4-byte content
        const uint64_t *c64;  // pointer to 8-byte content
    } content;
} agfxl_font_t;

/**
 * @brief Initialize a buffer
 *
 * @param buf    Buffer structure to initialize
 * @param width  Width in pixels
 * @param height Height in pixels
 * @param color  Color mode
 */
agfxl_err_t agfxl_init_buf(agfxl_buf_t *buf, uint16_t width, uint16_t height, agfxl_cmode_t color);

/**
 * @brief Free resources allocated by agfxl_init_buf()
 *
 * @param buf Buffer
 */
void agfxl_free_buf(agfxl_buf_t *buf);

/**
 * @brief Initialize a buffers array
 *
 * @param buf_arr Buffers array structure to initialize
 * @param length  Number of buffers
 * @param width   Width of each buffer
 * @param height  Height of each buffer
 * @param color   Color mode
 */
agfxl_err_t agfxl_init_buf_array(agfxl_buf_array_t *buf_arr, uint8_t length,
                                 uint16_t width, uint16_t height, agfxl_cmode_t color);

/**
 * @brief Free resources allocated by agfxl_init_buf_array()
 *
 * @param buf_arr Buffers array
 */
void agfxl_free_buf_array(agfxl_buf_array_t *buf_arr);

/**
 * @brief Clear a buffer
 *
 * @param buf Buffer
 */
void agfxl_clear(agfxl_buf_t *buf);

/**
 * @brief Dump buffer's content to the console
 *
 * @param buf Buffer
 */
void agfxl_dump(const agfxl_buf_t *buf);

/**
 * @brief Set a pixel's color value
 *
 * @param buf   Buffer
 * @param x     X position
 * @param y     Y position
 * @param color Color value
 */
agfxl_err_t agfxl_set_px(agfxl_buf_t *buf, int16_t x, int16_t y, uint32_t color);

/**
 * @brief Get a pixel's color value
 *
 * @param buf   Buffer
 * @param x     X position
 * @param y     Y position
 * @param color Color value
 */
agfxl_err_t agfxl_get_px(const agfxl_buf_t *buf, int16_t x, int16_t y, uint32_t *color);

/**
 * @brief Merge the `src` buffer into the `dst` buffer
 *
 * @param dst     Target buffer
 * @param src     Source buffer
 * @param dst_pos Coordinates on the target buffer
 * @param src_pos Coordinates on the source buffer
 */
agfxl_err_t agfxl_merge(agfxl_buf_t *dst, const agfxl_buf_t *src,
                        agfxl_point_t dst_pos, agfxl_point_t src_pos);

/**
 * @brief Split a buffer
 *
 * @param dst   Destination array of buffers
 * @param src   Source buffer
 * @param num_x X parts
 * @param num_y Y parts
 */
agfxl_err_t agfxl_split(agfxl_buf_array_t *dst, const agfxl_buf_t *src, uint8_t num_x, uint8_t num_y);

/**
 * @brief Move buffer to a new position
 *
 * @param buf     Buffer
 * @param rel_pos Relative position
 */
agfxl_err_t agfxl_move(agfxl_buf_t *buf, agfxl_point_t rel_pos);

/**
 * @brief Draw a line
 *
 * @param buf   Buffer
 * @param line  Line
 * @param color Color
 */
agfxl_err_t agfxl_line(agfxl_buf_t *buf, const agfxl_line_t *line, uint32_t color);

/**
 * @brief Draw a polygon
 *
 * @param buf   Buffer
 * @param poly  Points
 * @param color Color
 */
agfxl_err_t agfxl_poly(agfxl_buf_t *buf, const agfxl_poly_t *poly, uint32_t color);

/**
 * @brief Draw a rectangle
 *
 * @param buf   Buffer
 * @param p1    Top left point
 * @param p2    Bottom right point
 * @param color Color
 */
agfxl_err_t agfxl_rect(agfxl_buf_t *buf, const agfxl_point_t p1, const agfxl_point_t p2, uint32_t color);

/**
 * @brief Draw a triangle
 *
 * @param buf   Buffer
 * @param p1    Point 1
 * @param p2    Point 2
 * @param p3    Point 3
 * @param color Color
 */
agfxl_err_t agfxl_tri(agfxl_buf_t *buf, const agfxl_point_t p1, const agfxl_point_t p2,
                      const agfxl_point_t p3, uint32_t color);

/**
 * @brief Draw a character
 *
 * After drawing `ch_width` contains drawn character's width.
 *
 * @param buf      Buffer
 * @param font     Font
 * @param pos      Coordinates
 * @param ch       Character
 * @param color    Color
 * @param ch_width Drawn character width
 */
agfxl_err_t agfxl_putc(agfxl_buf_t *buf, const agfxl_font_t *font, agfxl_point_t pos, uint8_t ch,
                       uint32_t color, uint8_t *ch_width);

/**
 * @brief Draw a string
 *
 * After drawing `pos` contains last drawn character's coordinates.
 *
 * @param buf   Buffer
 * @param font  Font
 * @param pos   Coordinates
 * @param s     String
 * @param color Color
 * @param space Space between characters
 */
agfxl_err_t agfxl_puts(agfxl_buf_t *buf, const agfxl_font_t *font, agfxl_point_t *pos, const char *s,
                       uint32_t color, uint8_t space);

#endif
