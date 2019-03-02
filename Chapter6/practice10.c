#include <stdio.h>

void rev_intary(int v1[], const int v2[],int n)
{
    int i;

    for (i = 0; i < n; i++){
        v1[i] = v2[n - 1 - i];
    }
}

int main()
{
    int i;
    int a[5];
    int b[5] = {1,2,3,4,5};

    printf("a:");
    for (i = 0; i < 5; i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    printf("b:");
    for (i = 0; i < 5; i++){
        printf("%d ",b[i]);
    }
    printf("\n");

    rev_intary(a,b,5);

    printf("a:");
    for (i = 0; i < 5; i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    printf("b:");
    for (i = 0; i < 5; i++){
        printf("%d ",b[i]);
    }
    printf("\n");
    return 0;

}