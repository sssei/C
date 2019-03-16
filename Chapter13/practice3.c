#include <stdio.h>

#define NUMBER 10
#define NAME_LEN 64

struct Data{
    char name[NAME_LEN];
    int height;
    int weight;
};

void sort_by_height(struct Data dt[], int n)
{
    int i,j;
    for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i - 1; j++){
            if (dt[j].height > dt[j + 1].height){
                struct Data temp = dt[j];
                dt[j] = dt[j + 1];
                dt[j + 1] = temp;
            }
        }
    }
}

int main()
{
    FILE *fp;
    char str[12];
    struct Data dt[NUMBER] = {0};
    int i, len;

    printf("file name:");
    scanf("%s",str);

    if ((fp = fopen(str, "r")) == NULL )
        printf("ファイルをオープンできません。\n");
    else
        for(i = 0; fscanf(fp,"%s%d%d",dt[i].name, &dt[i].height, &dt[i].weight) == 3 && i < NUMBER; i++)
            printf("%-10s%5d%5d\n", dt[i].name, dt[i].height, dt[i].weight);

    len = i;
    sort_by_height(dt, len);

    for (i = 0; i < len; i++){
        printf("%-10s%5d%5d\n", dt[i].name, dt[i].height, dt[i].weight);
    }

    return 0;
}