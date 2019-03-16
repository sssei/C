#include <stdio.h>
#include <string.h>

#define NUMBER 5
#define NAME_LEN 64

typedef struct {
    char name[NAME_LEN];
    int height;
    float weight;
    long schols;
} Students;

void swap_Student(Students *x, Students *y)
{
    Students temp = *x;
    *x = *y;
    *y = temp;
}

void sort_by_height(Students a[], int n)
{
    int i,j;
    for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i - 1; j++){
            if (a[j].height > a[j + 1].height){
                swap_Student(&a[j],&a[j + 1]);
            }
        }
    }
}

void sort_by_name(Students a[], int n)
{
    int i,j;
    for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i - 1; j++){
            if (strcmp(a[j].name, a[j + 1].name) > 0){
                swap_Student(&a[j], &a[j + 1]);
            }
        }
    }
}

int main(void)
{
    int i,sort;
    Students std[NUMBER];

    for (i = 0; i < NUMBER; i++){
        printf("name,height,weight,schols:");
        scanf("%s%d%f%ld", std[i].name,&std[i].height,&std[i].weight,&std[i].schols);
    }

    printf("0:身長 1:名前  ");
    scanf("%d",&sort);

    if(sort == 0) sort_by_height(std, NUMBER);
    if(sort == 1) sort_by_name(std, NUMBER);

    for (i = 0; i < NUMBER; i++){
        printf("%-8s %6d%6.1f%7ld\n",std[i].name,std[i].height,std[i].weight,std[i].schols);
    }

    return 0;

}