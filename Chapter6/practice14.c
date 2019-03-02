#include <stdio.h> 

double fx[5];

void array_print(const double v[],int n)
{
    int i;

    for (i = 0; i < n; i++){
        printf("%f ",v[i]);
    }
    printf("\n");
}

int main()
{
    static double sd[5];
    auto double ad[5];
    int i;

    array_print(fx,5);
    array_print(sd,5);
    array_print(ad,5);

    return 0;
}