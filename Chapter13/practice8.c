#include <stdio.h>

int main(void)
{
    FILE *sfp;
    FILE *dfp;
    int ch;
    
    if ((sfp = fopen("abc","r")) == NULL)
        puts("コピー元ファイルをオープンできません。");
    else{
        if ((dfp = fopen("def","w")) == NULL)
            puts("コピー先ファイルをオープンできません。");
        else{
            while((ch = fgetc(sfp)) != EOF){
                fputc(ch,dfp);
                putchar(ch);
            }
            fclose(dfp);
        }
        fclose(sfp);
    }

    return 0;
}