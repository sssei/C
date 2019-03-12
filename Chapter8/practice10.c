#include <stdio.h>

void graph_print(const int v[])
{
    int i,j;
    for (i = 0; i < 10; i++){
        printf("%3d:",i);
        for (j = 0; j< v[i];j++){
            putchar('*');
        }
        putchar('\n');
    }
}

void count_number(int v[],int ch)
{
    if ('0' <= ch && ch <= '9'){
        v[ch - '0']++;
    }
}

int main()
{
    int v[10] = {0};
    int ch;

    while ((ch = getchar()) != EOF){
        count_number(v,ch);
    }
    graph_print(v);

    return 0;
}