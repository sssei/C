#include <stdio.h>

struct xyz{
    int x;
    long y;
    double z;
};

struct xyz scan_xyz()
{
    struct xyz xyz1;
    printf("x,y,z:");
    scanf("%d%ld%lf",&xyz1.x,&xyz1.y,&xyz1.z);
    return xyz1;
}

int main()
{
    struct xyz xyz_a = scan_xyz();
    printf("x:%d\n",xyz_a.x);
    printf("y:%ld\n",xyz_a.y);
    printf("z:%f\n",xyz_a.z);

    return 0;
}