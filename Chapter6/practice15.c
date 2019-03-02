#include <stdio.h>

void put_count(void)
{
    static int i = 1;

    printf("put_count:%d回目\n",i++);
}

int main()
{
    int i;

    for (i = 0; i < 10; i++){
        put_count();
    }
    return 0;
}