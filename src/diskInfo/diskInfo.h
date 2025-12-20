#ifndef DISKINFO_H 
#define DISKINFO_H

#include "../common.h"
#include "../diskCode/diskCode.h"

typedef struct diskInfo 
{
    /* 0x0000 */ char magic[4];
    /* 0x0004 */ u16 LBAStart;
    /* 0x0006 */ u16 LBAAmount;
    /* 0x000  */ u32 destAddr;
} diskInfo;

#endif // DISKINFO_H