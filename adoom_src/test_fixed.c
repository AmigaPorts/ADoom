#include "m_fixed.h"
#include "m_swap.h"
#include <stdio.h>

int main(void)
{
    fixed_t a, b, c;

    FixedMul = &FixedMul_040;
    FixedDiv = &FixedDiv_040;

    a = 0x7fff0000;
    b = 0xffffffff;
    c = FixedDiv(a, b);
    printf("%08x\n", c);

    printf("%08x %08x %08x %08x\n", (int)SWAPSHORT(0x0102), (int)SWAPSHORT(0xff01), (int)SWAPSHORT(0x7fff),
           (int)SWAPSHORT(0x8090));
}
