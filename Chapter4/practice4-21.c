#include <stdio.h>

int main(){

    int i,j,no;

    puts("正方形を作ります。");
    printf("何段ですか:");
    scanf("%d",&no);

    for (i = 0; i < no; i++){
        for (j = 0; j < no; j++)
            putchar('*');
        putchar('\n');
    }
    
    return 0;
}