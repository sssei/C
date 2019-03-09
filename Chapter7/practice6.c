#include <stdio.h>

int main()
{
    unsigned x = 11923437007;
    unsigned y = 9923405678;
    unsigned long zl = x + y;
    unsigned z = x + y;

    printf("%lu\n",zl);
    printf("%u\n",z);
}