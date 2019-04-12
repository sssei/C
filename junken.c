#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("じゃんけんをします\n");

    while(1){   //勝敗が着くまで繰り返す
        srand(10);  //乱数を取得（理解しなくてok)
        int c_hand = rand() % 3; //乱数rnd()を３で割った余りをコンピュータの出す手とする
        int hand;
        
        printf("あなたの出すを入力してください。【0:グー、1:チョキ、2:パー】");
        scanf("%d",&hand);

        printf("コンピュータは");
        if (c_hand == 0) printf("グー");
        else if (c_hand == 1) printf("チョキ");
        else printf("パー");
        printf("を出しました。\n");

        if(c_hand == hand) {
            printf("あいこです。\n");    //あいこならまたwhileの最初に戻る。
        }else if(c_hand == hand + 1 || c_hand == hand - 2){
            printf("あなたの勝ちです。\n");
            break; //勝負がついたのでwhileの繰り返しから抜ける。
        }else{
            printf("コンピュータの勝ちです。\n");
            break;
        }
    }

    return 0;

}