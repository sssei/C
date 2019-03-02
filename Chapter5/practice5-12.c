#include <stdio.h>

int main(void){
    int i,j,k;
    int mark[2][4][3] = {{{91,63,78},{67,72,46},{32,89,23},{34,54,45}},{{34,65,99},{12,58,30},{76,16,87},{45,67,87}}};

    for (i = 0; i < 2; i++){
        printf("%d回目\n",i + 1);
        for (j = 0; j < 4; j++){
            printf("生徒%d:",j + 1);
            for (k = 0; k < 3; k++){
                printf("%4d",mark[i][j][k]);
            }
            printf("\n");
        }
    }
    printf("合計点\n");
    for (i = 0; i < 4; i++){
        printf("生徒%d:",i + 1);
        for (j = 0; j < 3; j++){
            printf("%4d",mark[0][i][j] + mark[1][i][j]);
        }
        printf("\n");
    }
    return 0;
}