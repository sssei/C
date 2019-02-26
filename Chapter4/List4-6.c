#include <stdio.h>

int main(){
    int i ,no;

    printf("正の整数を入力してください。:");
    scanf("%d", &no);

    i = 0;
    while(i <= no)
        printf("%d ",i++);
    printf("\n");

    return 0;
}