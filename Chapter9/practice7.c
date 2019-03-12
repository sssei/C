#include <stdio.h>

void put_stringn(const char s[], int n)
{
    int j;
    for (j = 0; j < n; j++){
        int i = 0;
        while (s[i]){
            putchar(s[i++]);
        }
    }
}

int main(void)
{
    int i;
    char str[100];

    printf("str:");
    scanf("%s",str);

    put_stringn(str,1000);
    putchar('\n');

    return 0;
}