#include <stdio.h>

int min2(int a, int b)
{
    return (a < b) ? a : b;
}

int main(void)
{
    int a,b;

    printf("二つの整数を入力してください:");
    scanf("%d%d",&a,&b);

    printf("小さい方の値は%dです。\n",min2(a,b));

    return 0;
}