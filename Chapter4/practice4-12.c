#include <stdio.h>

int main(void){
    int no,i=0;

    do{
    printf("正の整数を入力してください。:");
    scanf("%d",&no);
    if (no <= 0)
        printf("正でない数を入力しないでください。\n");
    }while(no<=0);

    printf("%dは",no);

    while(no > 0){
        no /= 10;
        i += 1;
    }
    printf("%d桁です。",i);

    return 0;
}