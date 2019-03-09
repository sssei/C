#include <stdio.h>

int main()
{
    int i;
    double x = 0, sum1 = 0, sum2 = 0;

    for (i = 0; i < 100; i++){
        sum1 += i/100.0;
        sum2 += x;
        x += 0.01;
    }

    printf("sum1:%f\n",sum1);
    printf("sum2:%f\n",sum2);

    return 0;
}