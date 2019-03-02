#include <stdio.h>

void mat_add(const int a[4][3],const int b[4][3],int c[2][4][3])
{
    int i,j;

    for (i = 0; i < 4; i++){
        for (j = 0; j < 3; j++){
            c[0][i][j] = a[i][j];
            c[1][i][j] = b[i][j];
        }
    }
}

void mat_print(const int m[4][3])
{
    int i,j;

    for (i = 0; i < 4; i++){
        for (j = 0; j < 3; j++){
            printf("%4d",m[i][j]);
        }
        printf("\n");
    }
}
