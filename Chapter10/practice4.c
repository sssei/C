#include <stdio.h>

void set_idx(int *v, int n)
{
    int i;
    for (i = 0; i < n; i++){
        v[i] = i;
    }
}

void print_array(const int v[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("v[%d]:%3d\n",i,v[i]);
}

int main()
{
    int i;
    int v[25];

    print_array(v,25);
    putchar('\n');
    set_idx(v,25);
    print_array(v,25);
    
    return 0;
}