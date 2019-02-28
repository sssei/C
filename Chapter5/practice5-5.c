#include <stdio.h>

#define NUM 7

int main()
{
    int i;
    int x[NUM];

    for (i = 0; i < NUM; i++){
        printf("x[%d] : ",i);
        scanf("%d",&x[i]);
    }
    
    for (i = 0; i < NUM/2; i++){
        int temp = x[i];
        x[i] = x[NUM-i];
        x[NUM-i] = temp;
    } 

    puts("反転しました。");
    for (i = 0; i < NUM; i++){
        printf("x[%d] = %d\n",i,x[i]);
    }
    
    return 0;
}