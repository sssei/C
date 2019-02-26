#include <stdio.h>

int main(void){
    int i,no,sum = 0;

    printf("nの値:");
    scanf("%d",&no);

    for (i = 1; i <= no; i++)
        sum += i;

    printf("1から%dまでの和は%dです。",no,sum);
    putchar('\n');

    return 0;
}