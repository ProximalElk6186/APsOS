#include <dos.h>
#include <stdio.h>
#include <conio.h>

unsigned char far *vga_ptr = NULL;

void set_mode_13h() {
    union REGS regs;
    regs.h.ah = 0x00;
    regs.h.al = 0x13;
    int386(0x10, &regs, &regs);
}

void set_text_mode() {
    union REGS regs;
    regs.h.ah = 0x00;
    regs.h.al = 0x03;
    int386(0x10, &regs, &regs);
}

int map_vga_memory() {
    union REGS regs;
    struct SREGS sregs;

    regs.x.ax = 0x0800;       // DPMI: Map conventional memory
    regs.x.bx = 0xA000;       // Segment A000h
    regs.x.cx = 0x1000;       // 64KB (in paragraphs)
    int386x(0x31, &regs, &regs, &sregs);

    if (regs.x.cflag) {
        printf("Failed to map VGA memory!\n");
        return 0;
    }

    vga_ptr = (unsigned char far *)MK_FP(sregs.es, regs.x.di);
    return 1;
}

int main() {
    int y, x;
    set_mode_13h();

    if (!map_vga_memory()) {
        set_text_mode();
        return 1;
    }

    // Draw checkerboard pattern
    for (y = 0; y < 200; y++) {
        for (x = 0; x < 320; x++) {
            vga_ptr[y * 320 + x] = (x ^ y) & 0xFF; // XOR pattern
        }
    }

    getch(); // Wait for keypress

    set_text_mode();
    return 0;
}
