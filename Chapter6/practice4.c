#include <stdio.h>

int sqr(int x)
{
    return x*x;
}

int pow4(int x)
{
    return sqr(x)*sqr(x);
}

int main()
{
    int no;
    scanf("%d",&no);
    printf("%d\n",pow4(no));

    return 0;
}