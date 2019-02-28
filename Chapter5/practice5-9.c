#include <stdio.h>

#define NUM 80
int main()
{
    int no,i,j,max;
    int marks[NUM];
    int distribution[11] = {0};

    do{                                                 /*人数の入力*/
        printf("人数を入力してください:");
        scanf("%d",&no);

        if (no > 80){
            printf("1〜%dで入力してください。\n",NUM);
        }
    }while (no > 80 || no < 1);

    printf("%d人の点数を入力してください。\n",no);

    for (i = 0; i < no; i++){                           /*点数の入力*/
        printf("%2d番目:",i + 1);
        do{
            scanf("%d",&marks[i]);

            if (marks[i] > 100 || marks[i] < 0)
                printf("0~100で入力してください。\n");
        }while (marks[i] > 100 || marks[i] < 0);

        distribution[marks[i]/10]++;
    }

    max = distribution[0];                              /*最大の分布*/
    for (i = 1; i < 11; i++)
        if (max < distribution[i])
            max = distribution[i];

    for (i = 0; i < max; i++){                          /*分布の表示*/
        for (j = 0; j < 11; j++){
            if (distribution[j] >= max)
                printf("   *");
            else 
                printf("    ");
            distribution[j]++;
        }
        putchar('\n');
    }

    for (i = 0; i < 11; i++) 
        printf("----");
    printf("\n");

    for (i = 0; i < 11; i++)
        printf("%4d",i*10);

    printf("\n");

    return 0;
    
}