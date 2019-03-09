#include <stdio.h>

#define swap(type,a,b) type c = a; a = b; b = c 

int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    swap(int,x,y);
    printf("%d %d\n",x,y);

    return 0;
}