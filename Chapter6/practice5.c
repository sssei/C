#include <stdio.h>

int sumup(int n)
{
    int i,sum = 0;

    for (i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}

int main()
{
    int no;
    scanf("%d",&no);
    printf("%d\n",sumup(no));

    return 0;
}