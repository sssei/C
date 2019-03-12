#include <stdio.h>

void null_string(char s[])
{
    s[0] = 0;
}

int main()
{
    int i = 0;
    char s[100];

    printf("s:");
    scanf("%s",s);

    while (s[i]){
        putchar(s[i]);
        i++;
    }
    printf("\n");

    null_string(s);
    printf("s:");
    while (s[i]){
        putchar(s[i]);
        i++;
    }
    printf("\n");

    return 0;
}