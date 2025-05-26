#include <stdint.h>
#include "inc\font8x8.c"

typedef unsigned char uint8;

//uint8 font8x8[256][8] = {
//    [65] = { 0x18, 0x24, 0x42, 0x7E, 0x42, 0x42, 0x42, 0x00 }, // 'A'
//};
void draw_string(int x, int y, const char* str, uint8 color) {
    while (*str) {
        draw_char(x, y, *str++, color);
        x += 8; // Advance 8 pixels for next character
    }
}

void set_video_mode(uint16_t mode) {
    __asm {
        mov  ax, 0x4F02
        mov  bx, mode
        int  0x10
    }
}

void putpixel(int x, int y, uint8 color) {
    uint8* vram = (uint8*)0xA0000;
    vram[y * 320 + x] = color;
}

void draw_char(int x, int y, char c, uint8 color) {
    int row, col;
    uint8* font = font8x8_basic[(uint8)c];

    for (row = 0; row < 8; ++row) {
        uint8 bits = font[row];
        for (col = 0; col < 8; ++col) {
            if (bits & (1 << 7)) {
                putpixel(x + col, y + row, color);
            }
        }
    }
}
void clear_screen(uint8 color) {
    uint8* vram = (uint8*)0xA0000;
    int i;
    for (i = 0; i < 320 * 200; ++i)
        vram[i] = color;
}

void main() {
    set_video_mode(0x13);
    clear_screen(1); // Blue background
    draw_string(10, 10, "FATAL ERROR: Something went wrong", 15); // White text
    while (1); // Wait
}
