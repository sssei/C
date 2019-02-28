#include <stdio.h>

int main(void){

    int i,j,k;
    int A[4][3];
    int B[3][4];
    int C[4][4];

    printf("行列A\n");
    for (i = 0; i < 4; i++){
        printf("%d行目:",i+1);
        scanf("%d%d%d",&A[i][0],&A[i][1],&A[i][2]);
    }

    printf("行列B\n");
    for (i = 0; i < 3; i++){
        printf("%d行目:",i+1);
        scanf("%d%d%d%d",&B[i][0],&B[i][1],&B[i][2],&B[i][3]);
    }

    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            int sum = 0;
            for ( k = 0; k < 3; k++)    
                sum  += A[i][k]*B[k][j];
            C[i][j] = sum;
        }
    }

    printf("行列C\n");

    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++)
            printf("%4d",C[i][j]);
        putchar('\n');
    }

    return 0;
}