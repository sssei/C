#include <stdio.h>

int main(){
    int sum = 0;
    int cnt = 0;
    int retry;

    do{
        int t;
        
        printf("数値を入力してください。:");
        scanf("%d",&t);

        sum = sum + t;
        cnt = cnt + 1;

        printf("まだ？:");
        scanf("%d",&retry);
    }while(retry == 0);

    printf("合計は%dで平均は%.2fです。\n",sum,(double)sum/cnt);

    return 0;
}