#include <stdio.h>

#define NAME_LEN 64

struct students{
    char name[NAME_LEN];
    int height;
    float weight;
    long schools;
};

int main(void)
{
    struct students takao = {"Takao",173,86.3};

    printf("name:%p\n",&takao.name);
    printf("height:%p\n",&takao.height);
    printf("weight:%p\n",&takao.weight);
    printf("schools:%p\n",&takao.schools);

    return 0;
}