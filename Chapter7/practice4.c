#include <stdio.h>

int count_bits(unsigned x)
{
    int bits = 0;
    while (x){
        if (x & 1U)
            bits += 1;
        x >>= 1;
    }
    return bits;
}

int int_bits(void)
{
    return count_bits(~0U);
}

void print_bits(unsigned x)
{
    int i;
    for (i = int_bits() - 1; i >= 0; i--){
        printf(((x >> i) & 1U) ? "1" : "0");
    }
}

unsigned set(unsigned x, int pos)
{
    unsigned u = (1U << (pos - 1));
    return u & x;
}

unsigned reset(unsigned x, int pos)
{
    unsigned u1,u2;
    u1 = (x >> pos) << pos;
    u2 = (x << (int_bits() - pos)) >> (int_bits() - pos);
    return u1 & u2;
}

unsigned inverse(unsigned x, int pos)
{
    
}