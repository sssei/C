#include <stdio.h>

int min3(int a, int b, int c)
{
    int min = a;

    if (b < a) min = b;
    if (c < a) min = c;
    return min;
}

int main()
{
    int i;
    int no[3];

    for (i = 0; i < 3; i++){
        printf("整数%d:",i + 1);
        scanf("%d",&no[i]);
    }
    printf("最小値は%dです。\n",min3(no[0],no[1],no[2]));

    return 0;
}