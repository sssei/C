#include <stdio.h>

void increment_date(int *y, int *m, int *d)
{
    if (*m == 4 || *m == 6 || *m == 9 || *m == 11){
        if (*d < 30){
            *d += 1;
        }else{
            *d = 1;
            *m += 1;
        }
    }else if (*m == 2){
        if (*y % 400 == 0 || (*y % 100 != 0 && *y % 4 == 0)){
            if (*d < 29){
                *d += 1;
            }else{
                *d = 1;
                *m += 1;
            }
        }else{
            if (*d < 28){
                *d += 1;
            }else{
                *d = 1;
                *m += 1;
            }
        }
    }else{
        if (*d < 31){
            *d +=  1;
        }else{
                *d = 1;
            if (*m != 12){
                *m += 1;
            }else{
                *m = 1;
                *y += 1;
            }
        }
    }
}

void decrement_date(int *y, int *m, int *d)
{
    if (*m == 5 || *m == 7 || *m == 10 || *m == 12){
        if (*d > 1){
            *d -= 1;
        }else{
            *d = 30;
            *m -= 1;
        }
    }else if (*m == 3){
        if (*y % 400 == 0 || (*y % 100 != 0 && *y % 4 == 0)){
            if (*d > 1){
                *d -= 1;
            }else{
                *d = 29;
                *m -= 1;
            }
        }else{
            if (*d > 1){
                *d -= 1;
            }else{
                *d = 28;
                *m -= 1;
            }
        }
    }else{
        if (*d > 1){
            *d -= 1;
        }else{
                *d = 31;
            if (*m != 1){
                *m -= 1;
            }else{
                *m = 12;
                *y -= 1;
            }
        }
    }
}

int main()
{
    int y,m,d;
    
    printf("y,m,d:");
    scanf("%d%d%d",&y,&m,&d);

    increment_date(&y,&m,&d);
    printf("y,m,d:%d,%d,%d\n",y,m,d);

    decrement_date(&y,&m,&d);
    decrement_date(&y,&m,&d);

    printf("y,m,d:%d,%d,%d\n",y,m,d);

    return 0;
}