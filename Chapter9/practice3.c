#include <stdio.h>

#define NUMBER 128

int judge(const char s[], const char a[],int n)
{
    int i,j = 0;
    for (i = 0; i < n; i++){
        if (s[i] == a[i])
            j++;
    }
    if (j == n){
        return 1;
    }else{
        return -1;
    }
}

int main(void)
{
    int i;
    char s[NUMBER][128];
    char a[] = "$$$$$";

    for (i = 0; i < NUMBER; i++){
        printf("s[%d]:",i);
        scanf("%s",s[i]);
        if (judge(s[i],a,6) == 1)
            break;
    }

    for (i = 0; i < NUMBER; i++){
        printf("s[%d]:%10s\n",i,s[i]);
        if (judge(s[i+1],a,6) == 1)
            break;
    }

    return 0;
}