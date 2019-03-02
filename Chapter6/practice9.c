#include <stdio.h>

void rev_intary(int v[], int n)
{
    int i;

    for (i = 0; i < n/2; i++){
        int temp = v[i];
        v[i] = v[n - i - 1];
        v[n - i - 1] = temp;
    }
}

int main()
{
    int i;
    int a[] = {1,2,3,4,5,56,656};
    
    for (i = 0; i < 7; i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    rev_intary(a,7);
    for (i = 0; i < 7; i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}