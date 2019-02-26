#include <stdio.h>

int main(void){
    int no,i,cnt = 0;

    printf("整数値:");
    scanf("%d",&no);

    for (i = 1; i <= no; i++){
        if (no % i == 0){
            printf("%d\n",i);
            cnt++;
        }
    }
    printf("約数は%d個です。\n",cnt);

    return 0;
}