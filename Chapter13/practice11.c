#include <stdio.h>

int main()
{
    FILE *sfp;
    FILE *dfp;
    double d[10] = {10.3,3.15,34,44,3,45,56,200,55,45};
    int i;

    if ((sfp = fopen("double","wb")) == NULL)
        puts("ファイルをオープンできませんでした。");
    else{
        fwrite(d,sizeof(double),10,sfp);
        fclose(sfp);
    }

    if ((dfp = fopen("double","rb")) == NULL)
        puts("ファイルをオープンできませんでした。");
    else{
        fread(d,sizeof(double),10,dfp);
        fclose(dfp);
    }

    for (i = 0; i < 10; i++){
        printf("%.2f\n",d[i]);
    }

    return 0;
}