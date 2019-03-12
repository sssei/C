#include <stdio.h>

void put_stringr(const char s[])
{
    int i = 0, j = 0;
    while (s[i]){
        i++;
    }
    for (j = 0; j < i; j++){
        putchar(s[i - j - 1]);
    }
}

int main()
{
    char str[128];

    printf("str:");
    scanf("%s",str);

    put_stringr(str);
    putchar('\n');

    return 0;
}