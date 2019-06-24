#include <stdio.h>

int main(){

    int no,i,j;

    puts("下向き数字ピラミッドを作ります。");
    printf("何段ですか:");
    scanf("%d",&no);

    for (i = 0; i < no; i++){
        for (j = 0; j < i; j++)
            putchar(' ');
        for (j = 0; j < (no - i - 1)*2 + 1; j++)
            printf("%d",(i + 1)%10);
        for (j = 0; j < i; j++)
            putchar(' ');
        printf("\n");
    }

    return 0;
}
