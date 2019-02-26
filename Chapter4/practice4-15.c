#include <stdio.h>

int main(void){
    int start,end,step,i;

    printf("何cmから:"); scanf("%d",&start);
    printf("何cmまで:"); scanf("%d",&end);
    printf("何cmごと:"); scanf("%d",&step);

    for (i = start; i <= end; i += step)
        printf("%dcm %.2fkg\n",i,(i-100)*0.9);

    return 0;
}