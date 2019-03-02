#include <stdio.h>

void alert(int n)
{
    while (n-- > 0)
        printf("\a");
}

int main()
{
    int no;
    scanf("%d",&no);
    alert(no);

    return 0;
}