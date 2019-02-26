#include <stdio.h>

int main(){
    int no,i=0;

    printf("正の整数:");
    scanf("%d",&no);

    while (i++<no){
        putchar((i%2)?'+':'-');
    }
    printf("\n");
    return 0;
}