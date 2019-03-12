#include <stdio.h>

void swap(int *n1, int *n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

void sort3(int *n1, int *n2, int *n3)
{
    if (*n1 > *n2)
        swap(n1,n2);
    if (*n2 > *n3)
        swap(n2,n3);
    if (*n1 > *n2)
        swap(n1,n2);
}

int main()
{
    int A,B,C;
    printf("A,B,C:");
    scanf("%d%d%d",&A,&B,&C);

    sort3(&A,&B,&C);
    printf("%3d%3d%3d\n",A,B,C);

    return 0;
}