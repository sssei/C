#include <stdio.h>

enum gender {male,female,Invalide};

enum gender select(void)
{
    int tmp;
    printf("0:male 1:female  ");
    scanf("%d",&tmp);
    return (enum gender) tmp;
}

int main()
{
    enum gender selected;
    selected = select();
    switch(selected){
        case male : printf("男です。\n"); break;
        case female: printf("女です。\n"); break;
    }

    return 0;
}