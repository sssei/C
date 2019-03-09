#include <stdio.h>

int main()
{
    int i;
    double x = 0.0,y;

    for (i = 0; i <= 1000; i++){
        printf("x = %7f  ", x);
        printf("x = %7f  \n", i / 100.0);
        x += 0.01;
    }

    return 0;
}