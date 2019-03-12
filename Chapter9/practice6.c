#include <stdio.h>

int str_chnum(const char s[], int c)
{
    int i = 0, j = 0;
    while (s[i]){
        if (s[i] == c)
            j++;
        i++;
    }
    return j;
}

int main(void)
{
    int i;
    char str[100];

    printf("str:");
    scanf("%s",str);

    printf("%d\n",str_chnum(str,'j'));

    return 0;
}