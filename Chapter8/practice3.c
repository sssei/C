#include <stdio.h>

void bsort(int v[], int n)
{
    int i,j;
    for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i - 1; j++){
            if (v[j] > v[j + 1]){
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int a[10] = {234,34,45654,345,3,5,77,123};
    int i;

    bsort(a,10);

    for (i = 0; i < 10; i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    return 0;
}