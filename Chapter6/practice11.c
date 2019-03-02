#include <stdio.h>

int search_idx(const int v[],int idx[],int key, int n)
{
    int i,j = 0;

    for (i = 0; i < n; i++){
        if (v[i] == key){
            idx[j] = i;
            j++;
        }
    }
    return j;
}

int main()
{
    int i,key,s_idx;
    int a[5] = {1,2,3,4,5};
    int idx[5];

    printf("key:");
    scanf("%d",&key);

    if ((s_idx = search_idx(a,idx,key,5)) == 0)
        printf("Failed\n");
    else {
        printf("search_idx:%d\n",s_idx);
        for (i = 0; i < s_idx; i++)
            printf("%d ",idx[i]);
        printf("\n");
    }
    return 0;

}