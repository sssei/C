#include <stdio.h>
#include <string.h>

char *str_char(const char *s, int c)
{
    int i;
    char *p = NULL;
    for (i = 0; i < strlen(s); i++){
        if (*(s + i) == c){
            p = s + i;            
            break;
        }
    }
    return p;
}

int main()
{
    char *s;
    printf("文字列:");
    scanf("%s",s);
    printf("cのポインタ:%p\n",str_char(s,'c'));

    return 0;
}