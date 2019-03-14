#include <stdio.h>
#include <string.h>

void put_string(const char *s)
{
    unsigned u = (unsigned)strlen(s);
    int i;
    for (i = 0; i < u; i++){
        putchar(*(s+i));
    }
    putchar('\n');
}

int main()
{
    char *s;

    printf("文字列:");
    scanf("%s",s);
    put_string(s);

    return 0;
}