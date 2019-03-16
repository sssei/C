#include <stdio.h>

int main(void)
{
    FILE *fp;
    char fname[FILENAME_MAX];
    int ch;
    int num[10] = {0};
    int i;

    printf("ファイル名:");
    scanf("%s",fname);

    if ((fp = fopen(fname,"r")) == NULL)
        printf("ファイルをオープンできませんでした。\n");
    else{
        while((ch = fgetc(fp)) != EOF){
            if (ch >= '0' && ch <= '9')
                num[ch - '0']++;
        }
        fclose(fp);
    }

    for (i = 0; i < 10; i++){
        printf("\'%d\':%d個\n",i,num[i]);
    }

    return 0;
}