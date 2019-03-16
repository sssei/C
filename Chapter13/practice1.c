#include <stdio.h>

int main(void)
{
    FILE *fp;
    char str[129];

    printf("file name:"); scanf("%s",str);
    fp = fopen(str,"r");

    if (fp == NULL)
        printf("ファイル\"%s\"を開ませんでした。\n",str);
    else{
        printf("ファイル\"%s\"を開きました。\n",str);
        fclose(fp);
    }

    return 0;
}