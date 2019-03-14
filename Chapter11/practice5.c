#include <stdio.h>
#include <string.h>

int str_chnum(const char *s, int c)
{
    int i,num = 0;
    for (i = 0; i < strlen(s); i++){
        if (*(s + i) == c)
            num++;
    }
    return num;
}

int main()
{
    char *s;
    
    printf("文字列:");
    scanf("%s",s);
    printf("number of 'c' is %d\n",str_chnum(s,'c'));

    return 0;
}