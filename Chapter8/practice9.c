#include <stdio.h>

int main()
{
    int i = 0,ch;

    while ((ch = getchar()) != EOF){
        if (ch == '\n'){
            i += 1;
        }
    }

    printf("%d回\n",i);

    return 0;
}