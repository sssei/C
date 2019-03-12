#include <stdio.h>

int str_char(const char s[], int c)
{
    int i = 0;
    while (s[i]){
        if (s[i] == c)
            return i;
        i++;
    }
    return -1;
}

int main()
{
    int i;
    char s[100];

    printf("s:");
    scanf("%s",s);

    printf("cの添字は%dです。\n",str_char(s,'c'));

    return 0;
}