#include <stdio.h>

int main(void){

    int no,i;

    printf("nの値:");
    scanf("%d",&no);

    for (i = 1; i <= no; i++)
        printf("%dの二乗は%d\n",i,i*i);

    return 0;
}