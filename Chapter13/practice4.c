#include <stdio.h>

#define NAME_LEN 64

typedef struct{
    char name[NAME_LEN];
    int height;
    double weight;
} Student;

void print_std(Student std[], int n)
{
    int i;
    for (i = 0; i < n; i++){
        printf("%-10s%5d%5.1f\n",std[i].name,std[i].height,std[i].weight);
    }
}

int main()
{
    FILE *fp;
    Student std[10];
    char str[64];
    int i;

    if ((fp = fopen("abc","w")) == NULL)
        printf("ファイルをオープンできません。");
    else{
        for (i = 0; i < 5; i++){
            printf("name, height, weight:");
            scanf("%s%d%lf", std[i].name, &std[i].height, &std[i].weight);
            fprintf(fp,"%-10s%5d%5.1f\n", std[i].name, std[i].height, std[i].weight);
        }
        fclose(fp);
    }

    return 0;
}