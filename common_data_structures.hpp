#include <stdint-gcc.h>

union Bitfield8 
{
    uint8_t all;
    struct 
    {
        uint8_t bitfield0 : 1;
        uint8_t bitfield1 : 1;
        uint8_t bitfield2 : 1;
        uint8_t bitfield3 : 1;
        uint8_t bitfield4 : 1;
        uint8_t bitfield5 : 1;
        uint8_t bitfield6 : 1;
        uint8_t bitfield7 : 1;
    } bitfield; 
};

union Bitfield16
{
    uint16_t all;
    struct 
    {
        uint16_t bitfield0  : 1;
        uint16_t bitfield1  : 1;
        uint16_t bitfield2  : 1;
        uint16_t bitfield3  : 1;
        uint16_t bitfield4  : 1;
        uint16_t bitfield5  : 1;
        uint16_t bitfield6  : 1;
        uint16_t bitfield7  : 1;
        uint16_t bitfield8  : 1;
        uint16_t bitfield9  : 1;
        uint16_t bitfield10 : 1;
        uint16_t bitfield11 : 1;
        uint16_t bitfield12 : 1;
        uint16_t bitfield13 : 1;
        uint16_t bitfield14 : 1;
        uint16_t bitfield15 : 1;
    } bitfield; 
};

union Bitfield32
{
    uint32_t all;
    struct
    {
        uint32_t bitfield0   : 1;
        uint32_t bitfield1   : 1;
        uint32_t bitfield2   : 1;
        uint32_t bitfield3   : 1;
        uint32_t bitfield4   : 1;
        uint32_t bitfield5   : 1;
        uint32_t bitfield6   : 1;
        uint32_t bitfield7   : 1;
        uint32_t bitfield8   : 1;
        uint32_t bitfield9   : 1;
        uint32_t bitfield10  : 1;
        uint32_t bitfield11  : 1;
        uint32_t bitfield12  : 1;
        uint32_t bitfield13  : 1;
        uint32_t bitfield14  : 1;
        uint32_t bitfield15  : 1;
        uint32_t bitfield16  : 1;
        uint32_t bitfield17  : 1;
        uint32_t bitfield18  : 1;
        uint32_t bitfield19  : 1;
        uint32_t bitfield20  : 1;
        uint32_t bitfield21  : 1;
        uint32_t bitfield22  : 1;
        uint32_t bitfield23  : 1;
        uint32_t bitfield24  : 1;
        uint32_t bitfield25  : 1;
        uint32_t bitfield26  : 1;
        uint32_t bitfield27  : 1;
        uint32_t bitfield28  : 1;
        uint32_t bitfield29  : 1;
        uint32_t bitfield30  : 1;
        uint32_t bitfield31  : 1;
    } bitfield; 
};

struct Vector3 
{
    float x;
    float y;
    float z; 
};