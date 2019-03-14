#include <stdio.h>

#define NAME_LEN 64

typedef struct {
    char name[NAME_LEN];
    int height;
    float weight;
    long schools;
} Student;

void hiroko(Student *std)
{
    if (std->height < 180) std->height = 180;
    if (std->weight > 80) std->weight = 80;
}

int main(void)
{
    Student sanaka;

    printf("name:"); scanf("%s",sanaka.name);
    printf("height:"); scanf("%d",&sanaka.height);
    printf("weight:"); scanf("%f",&sanaka.weight);
    printf("schools:"); scanf("%ld",&sanaka.schools);
    putchar('\n');

    hiroko(&sanaka);

    printf("name:%s\n",sanaka.name); 
    printf("height:%d\n",sanaka.height); 
    printf("weight:%f\n",sanaka.weight); 
    printf("schools:%ld\n",sanaka.schools); 

    return 0;
}