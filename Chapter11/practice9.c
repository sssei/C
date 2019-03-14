#include <stdio.h>
#include <string.h>

int main()
{
    char str1[128];
    char str2[128] = "Fuck you.";
    char str3[128];
    printf("文字列:");
    scanf("%s",str1);
    printf("string(str1):%d\n",(int)strlen(str1));
    printf("strcpy:%s\n",strcpy(str3,str2));
    printf("strcat:%s\n",strcat(str2,str1));
    printf("strcmp:%d\n",strcmp(str3,str2));

    return 0;
}