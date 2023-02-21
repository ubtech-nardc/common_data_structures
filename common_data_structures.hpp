#include <stdint-gcc.h>

union Bitfield8 
{
    uint8_t all;
    struct 
    {
        uint8_t bit0 : 1;
        uint8_t bit1 : 1;
        uint8_t bit2 : 1;
        uint8_t bit3 : 1;
        uint8_t bit4 : 1;
        uint8_t bit5 : 1;
        uint8_t bit6 : 1;
        uint8_t bit7 : 1;
    } bitfield; 
};

union Bitfield16
{
    uint16_t all;
    struct 
    {
        uint16_t bit0  : 1;
        uint16_t bit1  : 1;
        uint16_t bit2  : 1;
        uint16_t bit3  : 1;
        uint16_t bit4  : 1;
        uint16_t bit5  : 1;
        uint16_t bit6  : 1;
        uint16_t bit7  : 1;
        uint16_t bit8  : 1;
        uint16_t bit9  : 1;
        uint16_t bit10 : 1;
        uint16_t bit11 : 1;
        uint16_t bit12 : 1;
        uint16_t bit13 : 1;
        uint16_t bit14 : 1;
        uint16_t bit15 : 1;
    } bitfield; 
};

union Bitfield32
{
    uint32_t all;
    struct
    {
        uint32_t bit0   : 1;
        uint32_t bit1   : 1;
        uint32_t bit2   : 1;
        uint32_t bit3   : 1;
        uint32_t bit4   : 1;
        uint32_t bit5   : 1;
        uint32_t bit6   : 1;
        uint32_t bit7   : 1;
        uint32_t bit8   : 1;
        uint32_t bit9   : 1;
        uint32_t bit10  : 1;
        uint32_t bit11  : 1;
        uint32_t bit12  : 1;
        uint32_t bit13  : 1;
        uint32_t bit14  : 1;
        uint32_t bit15  : 1;
        uint32_t bit16  : 1;
        uint32_t bit17  : 1;
        uint32_t bit18  : 1;
        uint32_t bit19  : 1;
        uint32_t bit20  : 1;
        uint32_t bit21  : 1;
        uint32_t bit22  : 1;
        uint32_t bit23  : 1;
        uint32_t bit24  : 1;
        uint32_t bit25  : 1;
        uint32_t bit26  : 1;
        uint32_t bit27  : 1;
        uint32_t bit28  : 1;
        uint32_t bit29  : 1;
        uint32_t bit30  : 1;
        uint32_t bit31  : 1;
    } bitfield; 
};

struct Vector3 
{
    float x;
    float y;
    float z; 
};