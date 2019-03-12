#include <stdio.h>

void rev_string(char s[])
{
    int i,len = 0;
    while (s[len]){
        len++;
    }
    len--;
    for (i = 0; i < len/2; i++){
        int temp = s[i];
        s[i] = s[len - i];
        s[len - i] = temp;
    }
}

int main()
{
    int i = 0;
    char str[128];

    printf("str:");
    scanf("%s",str);

    rev_string(str);

    while (str[i]){
        putchar(str[i++]);
    }
    putchar('\n');
    
    return 0;
}