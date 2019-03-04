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

unsigned rrotate(unsigned x, int n){
    return (x >> n) | (x << (int_bits() - n));
}

unsigned lrotate(unsigned x, int n){
    return (x << n) | (x >> (int_bits() - n));
}

int main()
{
    unsigned no;

    printf("no:"); scanf("%u",&no);
    printf("         no:"); print_bits(no); putchar('\n');
    printf("rrotate(no):"); print_bits(rrotate(no,5)); putchar('\n');
    printf("lrotate(no):"); print_bits(lrotate(no,5)); putchar('\n');

    return 0;
}