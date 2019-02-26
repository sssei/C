#include <stdio.h>

int main(){
    int retry;

    do {
        int no;

        printf("整数を入力してください。:");
        scanf("%d",&no);

        if (no == 0)
            puts("その数はゼロです。");
        else if (no > 0)
            puts("その数は正です。");
        else 
            puts("その数は負です。");
        
        printf("続けますか? <Yes> = 0 , <No> = 1:");
        scanf("%d",&retry);
    }while(retry == 0);

    return 0;
}