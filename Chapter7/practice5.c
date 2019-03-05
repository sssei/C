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

unsigned set_n(unsigned x, int pos, int n)
{
    unsigned u = (1U << (pos - 1));
    return u | x;
}

unsigned reset(unsigned x, int pos)
{
    unsigned u1,u2;
    u1 = (x >> pos) << pos;
    u2 = (x << (int_bits() - pos)) >> (int_bits() - pos);
    return u1 | u2;
}

unsigned inverse(unsigned x, int pos)
{
    unsigned u1,u2,u3;
    u1 = (x >> pos) << pos;
    u2 = (x << (int_bits() - pos)) >> (int_bits() - pos);
    u3 = ((~x >> (pos - 1)) << (int_bits() - 1)) >> (int_bits() - pos);
    return (u1 | u2) | u3;
}

int main()
{
    int no;

    printf("no:"); scanf("%d",&no);
    printf("           no:"); print_bits(no); printf("\n");
    printf("    set(no,3):"); print_bits(set(no,3)); printf("\n");
    printf("  reset(no,3):"); print_bits(reset(no,3)); printf("\n");
    printf("inverse(no,3):"); print_bits(inverse(no,3));
    printf("\n");

    return 0;
}