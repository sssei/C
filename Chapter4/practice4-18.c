#include <stdio.h>

int main(void){
    int no,i;

    printf("何個*を表示しますか:");
    scanf("%d",&no);

    for (i = 1; i <= no; i++){
        putchar('*');
        if (i % 5 == 0)
            printf("\n");
    }
    return 0;
}