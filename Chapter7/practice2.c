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

int main()
{
    unsigned no;

    printf("非負整数:"); scanf("%u",&no);
    printf("no:%u\n",no); 
    print_bits(no);
    printf("\nno >> 1:%u\n",no >> 1);
    print_bits(no >> 1);
    printf("\nno/2:%u\n",no/2); 
    printf("\nno << 1:%u\n",no << 1); 
    print_bits(no << 1);
    printf("\nno*2:%u\n",no*2);

    return 0;
}