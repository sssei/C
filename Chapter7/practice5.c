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

unsigned make_bits(int pos,int n){
    int i;
    unsigned u = 0U;
    for (i = 0; i < n; i++){
        u = u | (1U << (pos + i - 1));
    }
    return u;
}

unsigned set_n(unsigned x, int pos, int n)
{
    return x | make_bits(pos,n);
}

unsigned reset_n(unsigned x, int pos, int n)
{
    x = set_n(~x,pos,n);
    return ~x;
}

unsigned inverse_n(unsigned x, int pos, int n)
{
    unsigned u1 = set_n(x, pos + n, int_bits() - pos - n + 1);
    unsigned u2 = set_n(u1, 1, pos - 1);
    unsigned u3 = reset_n(x, pos, n);
    return u3 | (~u2);
}

int main()
{
    int no;

    printf("no:"); scanf("%d",&no);
    printf("               no:"); print_bits(no); printf("\n");
    printf("    set_n(no,3,5):"); print_bits(set_n(no,3,5)); printf("\n");
    printf("  reset_n(no,3,5):"); print_bits(reset_n(no,3,5)); printf("\n");
    printf("inverse_n(no,3,5):"); print_bits(inverse_n(no,3,5));
    printf("\n");

    return 0;
}