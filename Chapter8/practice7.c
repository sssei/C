#include <stdio.h>

int combination(int n, int r)
{
    if (r == 0 || r == n){
        return 1;
    }else if (r == 1){
        return n;
    }else if(n == 1){
        return 1;
    }else{
        return combination(n - 1, r - 1) + combination(n - 1, r);
    }
}

int main()
{
    int n,r;
    printf("n,r:");
    scanf("%d%d",&n,&r);
    printf("combination(n,r):%d\n",combination(n,r));

    return 0;
}