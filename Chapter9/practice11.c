#include <stdio.h>

#define NUMBER 100
#define STR_NUM 128

int judge(const char s1[], const char s2[], int n)
{
    int i,j = 0;
    for (i = 0; i < n; i++){
        if (s1[i] == s2[i])
            j++;
    }
    if (j == n)
        return 1;
    else 
        return -1;
}

void input_str(char s[][STR_NUM])
{
    int i;
    for (i = 0; i < NUMBER; i++){
        printf("%d:",i);
        scanf("%s",s[i]);
        if (judge(s[i],"$$$$$",5) == 1)
            break;
    }
}

void print_str(const char s[][STR_NUM])
{
    int i;
    for (i = 0; i < NUMBER; i++){
        int j = 0;
        while (s[i][j]){
            putchar(s[i][j++]);
        }
        putchar('\n');
        if (judge(s[i+1],"$$$$$",5) == 1)
            break;
    }
}

int main(void)
{
    int i;
    char str[NUMBER][STR_NUM];

    input_str(str);
    print_str(str);
    
    return 0;
}