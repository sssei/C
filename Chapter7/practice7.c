#include <stdio.h>

int main()
{
    float f;
    double d;
    long double ld;

    printf("float:"); scanf("%f",&f);
    printf("double:"); scanf("%lf",&d);
    printf("long double:"); scanf("%Lf",&ld);
    printf("%f %f %Lf",f,d,ld);

    return 0;
}