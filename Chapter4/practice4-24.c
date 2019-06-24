#include <stdio.h>

int main(){
    int no,i,j;

    puts("ピラミッドを作ります。");
    printf("何段ですか:");
    scanf("%d",&no);

    for (i = 0; i < no; i++){
        for (j = 0; j < no - i - 1; j++)
            putchar(' ');
        for (j = 0; j < i*2 + 1; j++)
            putchar('*');
        for (j = 0; j < no - i - 1; j++)
            putchar(' ');
        putchar('\n');
    }

    return 0;
}