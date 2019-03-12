#include <stdio.h>

void adjust_point(int *n)
{
    if (*n < 0)
        *n = 0;
    else if (*n > 100)
        *n = 100;
}

int main()
{
    int no;
    
    printf("no:");
    scanf("%d",&no);

    adjust_point(&no);

    printf("%d\n",no);

    return 0;
}