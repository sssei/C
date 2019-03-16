#include <stdio.h>

int main(void)
{
    FILE *fp;
    char fname[FILENAME_MAX];
    int ch;
    int no = 0;

    printf("ファイル名:");
    scanf("%s",fname);

    if ((fp = fopen(fname,"r")) == NULL)
        printf("ファイルをオープンできませんでした。\n");
    else{
        while((ch = fgetc(fp)) != EOF){
            if (ch == '\n')
                no++;
        }
        fclose(fp);
    }

    printf("行数:%d\n",no);

    return 0;
}