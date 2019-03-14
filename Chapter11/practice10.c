#include <stdio.h>
#include <string.h>

int chartoi(int c)
{
    return c - '0';
}

int pow2(int a, int n)
{
    int i;
    int num = 1;
    for (i = 0; i < n; i++){
        num *= a;
    }
    return num;
}

int strtoi(const char *nptr)
{
    int i;
    int num = 0;
    int len = (int)strlen(nptr);
    for (i = 0; i < len; i++){
        num += pow2(10, len - i - 1) * chartoi(nptr[i]);
    }
    return num;
}

int main()
{
    char *no;
    printf("文字列:");
    scanf("%s",no);
    printf("数列:%d\n",strtoi(no));

    return 0;
}