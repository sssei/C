#include <stdio.h>

void del_digit(char *s)
{
    char *temp = s;
    while(*s){
        if (*temp >= '0' && *temp <= '9'){
            temp++;
        }else{
            *s = *temp;
            s++;
            temp++;
        }
    }
}

int main()
{
    char str[128];
    printf("文字列:");
    scanf("%s",str);
    del_digit(str);
    printf("%s\n",str);

    return 0;
}