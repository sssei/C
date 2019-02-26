#include <stdio.h>

int main(){
    int a,b,max,min,num,sum = 0;

    puts("二つの整数を入力してください。");
    printf("整数a:");scanf("%d",&a);
    printf("整数b:");scanf("%d",&b);

    max = (a>b)?a:b;
    min = (a>b)?b:a;
    num = min;

    do{
        sum = sum + num;
        num = num + 1;
    }while (num <= max);

    printf("%d以上%d以下の全整数の和は%dです。\n",min,max,sum);

    return 0;
}