#include <stdio.h>

int main(void){
    int i,j;
    int height,width;
    int tmp;

    puts("横長の長方形を作ります。");
    printf("一辺（その１）:");
    scanf("%d",&height);
    printf("一辺（その２）:");
    scanf("%d",&width);

    if (width < height){
        tmp = width;
        width = height;
        height = tmp;
    }

    for (i = 0; i < height; i++){
        for (j = 0; j < width; j++)
            putchar('*');
        putchar('\n');
    }

    return 0;
}