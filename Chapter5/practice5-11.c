#include <stdio.h>

int main(void){
    
    int i,j;
    int mark[6][2];
    int subject_sum[2] = {},student_sum[6] = {};

    for (i = 0; i < 6; i++){
        printf("生徒%d:",i + 1);
        scanf("%d%d",&mark[i][0],&mark[i][1]);
    }

    for (i = 0; i < 6; i++){
        for (j = 0; j < 2; j++){
            subject_sum[j] += mark[i][j];
            student_sum[i] += mark[i][j];
        }
    }
    for (i = 0; i < 6; i++){
        printf("生徒%d:国語%3d点,数学%3d点\n",i + 1, mark[i][0],mark[i][1]);
    }

    printf("国語の合計:%d\n",subject_sum[0]);
    printf("国語の平均:%.2f\n",(double)subject_sum[0]/6);
    printf("数学の合計:%d\n",subject_sum[1]);
    printf("数学の平均:%.2f\n",(double)subject_sum[1]/6);

    for (i = 0; i < 6; i++){
        printf("生徒%dの合計:%d\n", i + 1, student_sum[i]);
    }
    for (i = 0; i < 6; i++){
        printf("生徒%dの平均:%.2f\n", i + 1, (double)student_sum[i]/2);
    }
    return 0;

}