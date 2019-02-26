#include <stdio.h>

int main(){
    int no, i=0;

    printf("正の整数:");
    scanf("%d",&no);

    while(i++<no){
        putchar('*');
        putchar('\n');
    }
    return 0;
}