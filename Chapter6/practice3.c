#include <stdio.h>

int cube(int x)
{
    return x*x*x;
}

int main()
{
    int no;
    scanf("%d",&no);
    printf("%d\n",cube(no));

    return 0;
}