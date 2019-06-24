#include <stdio.h>
#include <ctype.h>

char *str_toupsper(char *s)
{
    char *temp = s;
    while(*s){
        *s = toupper(*s);
        s++;
    }
    return temp;
}

char *str_tolower(char *s)
{
    char *temp = s;
    while(*s){
        *s = tolower(*s);
        s++;
    }
    return temp;
}

int main(void)
{
    char *str;

    printf("文字列:");
    scanf("%s",str);

    printf("大文字:%s\n",str_toupper(str));
    printf("小文字:%s\n",str_tolower(str));

    return 0;
}