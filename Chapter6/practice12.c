#include <stdio.h>

void mat_mul(const int a[4][3],const int b[3][4],int c[4][4])
{
    int i,j,k;

    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            int sum = 0;
            for (k = 0; k < 3; k++){
                sum += a[i][k]*b[j][k];
            }
            c[i][j] = sum;
        }
    }
}

int main()
{
    int i,j;
    int a[4][3] = {{1,1,1},{1,1,1},{1,1,1},{1,1,1}};
    int b[3][4] = {{1,1,1,1},{1,1,1,1},{1,1,1,1}};
    int c[4][4];
    
    mat_mul(a,b,c);

    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++)
            printf("%3d",c[i][j]);
        putchar('\n');
    }

    return 0;
}