#include <stdio.h>

#define NUM 80  /*人数の上限*/

int main(void)
{
    int no,i;
    int data[NUM];

    do{
    printf("データ数:");
    scanf("%d",&no);
    
    if (no > NUM)
        printf("〜%dで入力してください。\n",NUM);
    }while(no > NUM);

    for (i = 0; i < no; i++){
        printf("%d番:",i + 1);
        scanf("%d",&data[i]);
    }
    
    printf("{%d",data[0]);

    for (i = 1; i < no; i++){
        printf(", %d",data[i]);
    }

    printf("}\n");

    return 0;

}