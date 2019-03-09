#include <stdio.h>

int gcd(int x, int y)
{
    int a = (x > y) ? x : y;
    int b = (x > y) ? y : x;
    if (b == 0){
        return a;
    }else{
        return gcd(b,a%b);
    }
}

int main()
{
    int x,y;
    printf("x,y:");
    scanf("%d%d",&x,&y);

    printf("%d\n",gcd(x,y));

    return 0;
}