#include <stdio.h>

int main()
{
    FILE *fp;
    char str[128];

    printf("file name:");
    scanf("%s",str);

    fp = fopen(str,"w");

    return 0;
}