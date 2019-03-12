#include <stdio.h>

void del_digit(char s[])
{
    int i = 0, j = 0;
    while (s[i]){
        if (s[j] >= '0' && s[j] <= '9'){
            j++;
        }else{
            s[i++] = s[j++];
        }
    }
}

int main(void)
{
    int i = 0;
    char str[128];

    printf("str:");
    scanf("%s",str);

    del_digit(str);

    while(str[i]){
        putchar(str[i++]);
    }
    putchar('\n');

    return 0;
}