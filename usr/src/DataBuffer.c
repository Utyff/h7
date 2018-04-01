#include "DataBuffer.h"

#define __SECTION_AXIRAM __attribute__((section(".RAM_AXI"))) /* AXI SRAM (D1 domain): */

#define __SECTION_RAM_D2 __attribute__((section(".RAM_D2"))) /* AHB SRAM (D2 domain): */

#define __SECTION_RAM_D3 __attribute__((section(".RAM_D3"))) /* AHB SRAM (D3 domain): */

//__SECTION_RAM_D2 int16_t AdcValues_i16[2];

//ALIGN_32BYTES (u8 samplesBuffer[BUF_SIZE]);
__SECTION_AXIRAM u8 samplesBuffer[BUF_SIZE];

u8 firstHalf = 0;
