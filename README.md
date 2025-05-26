# APsOS
Another PC semi-OS


## What‘s that?
It‘s an another MS-DOS-based OS for retro (and not so) computers running MS-DOS. 
Think of it as of a successor (but not based on) for Windows 9x. 
## Project goals
- Recreate Windows 9x's interface
- Make it bluescreen about as often as 9x does
- Make it support DOS programs and **some** Windows ones (optional goal, doesn't have to be accomplished)
## Requirements



| | Minimal | Recommended |
|---|---|---|
|CPU|i386|Intel Pentium|
|RAM|1MB|24MB|
|HDD|50MB|2GB|
|GPU|VGA MODE X compatible|


## Other software requirements

|Software|Purpose/Description|Requirement level|Use instead of|Notes|Direct download links|License|Source code download links (if not proprietary)|
|---|---|---|---|---|---|---|---|
|MS-DOS 6.22 (or maybe older, didn't really test — but I think higher than 4.00)|Backend, bootloader, compatibility layer, drivers, API provider|Absolutely required|—|FreeDOS and older versions of MS-DOS may work as well, not tested|From Microsoft, no legal way currently|Proprietary, for versions 1.00, 3.00 and 4.00 — MIT|[Here](https://github.com/microsoft/MS-DOS)
|MOUSE.COM|Mouse input|Absolutely required|—|No navigation without it, plus why would you use a GUI without a mouse?|Bundled with MS-DOS|Proprietary
|HIMEM.SYS|High memory manager|Very highly recommended|—|More RAM is usable. On PCs with lots of RAM, use  ```/TESTMEM:OFF```, or else it will hang|Bundled with MS-DOS|Proprietary
|HIMEMX.EXE|Better high memory manager|Very highly recommended|Use instead of HIMEM.SYS. |Fixes its bugs.|[Here](https://github.com/Baron-von-Riedesel/HimemX)|GPL|[Here](https://github.com/Baron-von-Riedesel/HimemX)
|Cutemouse|Better mouse input driver, more features than ```mouse.com```|Very highly recommended|Use instead of MOUSE.COM. |Supports mice with wheel|[Here](https://cutemouse.sourceforge.net/)|GPLv2|[Here](https://sourceforge.net/projects/cutemouse/)
|HIMEMSX.EXE|"Super" high memory manager (supports even more RAM than HIMEMX does)|Highly recommended|Use instead of HIMEM.SYS and HIMEMX.EXE. |Allows for even more RAM, up to 1TB|[Here](https://github.com/Baron-von-Riedesel/HimemSX)|GPL|[Here](https://github.com/Baron-von-Riedesel/HimemSX)
|SBEMU|_**Sound Blaster 1.0**_, _**Sound Blaster 2.0**_, _**Sound Blaster Pro**_, _**Sound Blaster Pro2**_, _**Sound Blaster 16**_ (**8-bit** and **16-bit** **DMA** (*mono*, *stereo*, *high-speed* modes)), _**OPL3**_ emulator for modern sound cards like **Intel ICH / nForce / SIS 7012**, **Intel High Definition Audio (HDA)**, **VIA VT82C686**, **VT8233/37**, **SB Live! / Audigy**, **SB Audigy LS (CA0106)**, **Ensoniq ES1371/1373**, **C-Media CMI8338/8738**|Recommended on modern PCs with AC‘97 or Intel HDA sound chips|—|Emulates the Sound Blaster. For memory management, use the second method with JEMM386. Download the version v5.84 of [JEMM386](https://github.com/Baron-von-Riedesel/Jemm) from [here](https://github.com/Baron-von-Riedesel/Jemm/releases/download/v5.84/JemmB_v584.zip) (starts a 123KB download)|[Here](https://github.com/crazii/SBEMU/releases/tag/Release_1.0.0-beta.5)|GPLv2|[Here](https://github.com/crazii/SBEMU)
## Building and testing
Below the instructions for building and testing the project are listed. Please follow them to ensure that the project builds and then runs correctly.
### Building
Below the instructions for building the project are listed. Please follow them to ensure that the project builds correctly.
#### Prerequesites
|Program|Purpose/Description|Requirement level|Notes|Direct download links|License|Source code download links (if not proprietary)|
|---|---|---|---|---|---|---|
|Open Watcom v2.0|Compiler + IDE|Absolutely required|—|[Open Watcom](https://github.com/open-watcom/open-watcom-v2)|Custom license|[Open Watcom](https://github.com/open-watcom/open-watcom-v2)|
|Visual Studio Code|IDE|Recommended|You can use Open Watcom's code editor instead|[Here](https://code.visualstudio.com/download)|Proprietary|—|
#### Building
1. Navigate to the Open Watcom installation directory
2. Go to binnt64 directory
3. Launch "ide.exe"
4. Open project
5. Navigate to the repo folder and open "AGDS.wpj"
6. Build Source
7. Build Target
8. Done!
### Testing
#### Prerequesites
Just copy-pasted from section "Other software requirements"
|Software|Purpose/Description|Requirement level|Use instead of|Notes|Direct download links|License|Source code download links (if not proprietary)|
|---|---|---|---|---|---|---|---|
|MS-DOS 6.22 (or maybe older, didn't really test — but I think higher than 4.00)|Backend, bootloader, compatibility layer, drivers, API provider|Absolutely required|—|FreeDOS and older versions of MS-DOS may work as well, not tested|From Microsoft, no legal way currently|Proprietary, for versions 1.00, 3.00 and 4.00 — MIT|[Here](https://github.com/microsoft/MS-DOS)
|MOUSE.COM|Mouse input|Absolutely required|—|No navigation without it, plus why would you use a GUI without a mouse?|Bundled with MS-DOS|Proprietary
|DOSBox|DOS Emulator|Absolutely required|—|As an alternative, test on real hardware or with a VM with real DOS (no instructions here)|[Here](https://sourceforge.net/projects/dosbox/files/latest/download)|
|HIMEM.SYS|High memory manager|Very highly recommended|—|More RAM is usable. On PCs with lots of RAM, use  ```/TESTMEM:OFF```, or else it will hang|Bundled with MS-DOS|Proprietary
|HIMEMX.EXE|Better high memory manager|Very highly recommended|Use instead of HIMEM.SYS. |Fixes its bugs.|[Here](https://github.com/Baron-von-Riedesel/HimemX)|GPL|[Here](https://github.com/Baron-von-Riedesel/HimemX)
|Cutemouse|Better mouse input driver, more features than ```mouse.com```|Very highly recommended|Use instead of MOUSE.COM. |Supports mice with wheel|[Here](https://cutemouse.sourceforge.net/)|GPLv2|[Here](https://sourceforge.net/projects/cutemouse/)
|HIMEMSX.EXE|"Super" high memory manager (supports even more RAM than HIMEMX does)|Highly recommended|Use instead of HIMEM.SYS and HIMEMX.EXE. |Allows for even more RAM, up to 1TB|[Here](https://github.com/Baron-von-Riedesel/HimemSX)|GPL|[Here](https://github.com/Baron-von-Riedesel/HimemSX)
|SBEMU|_**Sound Blaster 1.0**_, _**Sound Blaster 2.0**_, _**Sound Blaster Pro**_, _**Sound Blaster Pro2**_, _**Sound Blaster 16**_ (**8-bit** and **16-bit** **DMA** (*mono*, *stereo*, *high-speed* modes)), _**OPL3**_ emulator for modern sound cards like **Intel ICH / nForce / SIS 7012**, **Intel High Definition Audio (HDA)**, **VIA VT82C686**, **VT8233/37**, **SB Live! / Audigy**, **SB Audigy LS (CA0106)**, **Ensoniq ES1371/1373**, **C-Media CMI8338/8738**|Recommended on modern PCs with AC‘97 or Intel HDA sound chips|—|Emulates the Sound Blaster. For memory management, use the second method with JEMM386. Download the version v5.84 of [JEMM386](https://github.com/Baron-von-Riedesel/Jemm) from [here](https://github.com/Baron-von-Riedesel/Jemm/releases/download/v5.84/JemmB_v584.zip) (starts a 123KB download)|[Here](https://github.com/crazii/SBEMU/releases/tag/Release_1.0.0-beta.5)|GPLv2|[Here](https://github.com/crazii/SBEMU)
#### Testing
> ![NOTE]
> This section isn't written yet

## Contributing note
„APsOS“ and the APsOS logo are trademarks of [Andrei „ProximalElk6186“ Kot](https://github.com/ProximalElk6186).
While „APsOS“‘s source code is licensed as MPL 2.0, you may not use the name „APsOS“ or the project‘s logo for modified versions or redistributions without explicit written permission from the trademark owner.

THEREFORE, AS FOUNDER AND COORDINATOR OF THE 'APsOS Project' 
[ESTABLISHED MAY 2025, FIRST USED IN COMMERCE (WEB SITE) 26-May-2025], I HEREBY MAKE TRADEMARK CLAIM TO THE NAME, LOGOTYPE OF 'APSOS' AS IT RELATES TO ``computer operating system 
software to facilitate computer use and operation''.  DATED 26-MAY-2025. 
  SIGNED ANDREI KOT.

Looks official I guess

## Trademarks and registered trademarks note

All trademarks are intellectual rights of their respective owners.
