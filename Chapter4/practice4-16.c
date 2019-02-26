#include <stdio.h>

int main(){
    int no,i;

    printf("整数値:");
    scanf("%d",&no);

    for (i = 1; i <= no; i += 2)
        printf("%d ",i);

    printf("\n");

    return 0;
}