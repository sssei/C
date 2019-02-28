#include <stdio.h>

#define NUM 80
int main()
{
    int no,i,j;
    int marks[NUM];
    int distribution[11] = {0};

    do{
        printf("人数を入力してください:");
        scanf("%d",&no);

        if (no > 80){
            printf("1〜%dで入力してください。\n",NUM);
        }
    }while (no > 80 || no < 1);

    printf("%d人の点数を入力してください。\n",no);

    for (i = 0; i < no; i++){
        printf("%2d番目:",i + 1);
        do{
            scanf("%d",&marks[i]);

            if (marks[i] > 100 || marks[i] < 0)
                printf("0~100で入力してください。\n");
        }while (marks[i] > 100 || marks[i] < 0);

        distribution[marks[i]/10]++;
    }

    printf("--分布グラフ--\n");

    for (i = 0; i < 10; i++){
        printf("%2d 〜%3d:",i*10,i*10 + 9);
        for (j = 0; j < distribution[i]; j++){
            putchar('*');
        }
        putchar('\n');
    }

    printf("     100:");

    for (i = 0; i < distribution[10]; i++){
        putchar('*');
    }
    putchar('\n');
}