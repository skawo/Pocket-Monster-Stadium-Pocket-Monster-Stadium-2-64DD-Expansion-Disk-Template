#include "diskInfo.h"

__attribute__((section(".diskInfo")))
diskInfo diskInfoData = 
{
    .magic = "POKE",
    .LBAStart = 561,
    .LBAAmount = 25,
    .destAddr = 0xA0400000,
};