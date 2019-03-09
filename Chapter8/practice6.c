#include <stdio.h>

int factorial(int n)
{
    int i,no = 1;
    for (i = 1; i <= n; i++){
        no *= i;
    }
    return no;
}

int main()
{
    int num;
    printf("num:");
    scanf("%d",&num);
    printf("%d\n",factorial(num));

    return 0;
}