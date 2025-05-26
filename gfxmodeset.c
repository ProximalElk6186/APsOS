#include <dos.h>
#include <process.h>
int main()
{
    union REGS regs;

    // Set VGA 320x200x256 mode (mode 13h)
    regs.h.ah = 0x00;
    regs.h.al = 0x13;
    int86(0x10, &regs, &regs);

    // Launch the PMODE app
    exec("agds.exe");

    // If failed, return to DOS
}