#include <stdio.h>

void rev_strings(char s[][128], int n)
{
    int i;
    for (i = 0; i < n; i++){
        int j,len = 0;
        while (s[i][len]){
            len++;
        }
        len--;
        for (j = 0; j < len/2; j++){
            int temp = s[i][j];
            s[i][j] = s[i][len - j];
            s[i][len - j] = temp;
        }
    }
}

int main(void)
{
    int i;
    char str[5][128];

    for (i = 0; i < 5; i++){
        printf("str[%d]:",i);
        scanf("%s",str[i]);
    }

    rev_strings(str,5);

    for (i = 0; i < 5; i++){
        printf("str[%d]:%7s\n",i,str[i]);
    }

    return 0;
}