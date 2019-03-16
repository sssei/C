#include <stdio.h>
#include <math.h>

#define sqr(n) ((n)*(n))

typedef struct{
    double x;
    double y;
}Point;

typedef struct{
    Point pt;
    double fuel;
}Car;

double distance_of(Point pa, Point pb)
{
    return sqrt(sqr(pa.x - pb.x) + sqr(pa.y - pb.y));
}

Point point_cat(Point pa, Point pb)
{
    Point p_cat = {pa.x + pb.x, pa.y + pb.y};
    return p_cat;
}

void put_info(Car c)
{
    printf("現在位置:(%.2f, %.2f)\n",c.pt.x, c.pt.y);
    printf("残り燃料:%.2fリットル\n",c.fuel);
}

int move(Car *c, Point dest)
{
    double distance = distance_of(dest, c->pt);
    if (c->fuel > distance){
        c->pt.x = dest.x;
        c->pt.y = dest.y;
        c->fuel -= distance;
        return 1;
    }else{
        return 0;
    }
}

int main()
{
    Car c;
    Point pt;
    int x;

    printf("初期位置:"); scanf("%lf%lf",&c.pt.x,&c.pt.y);
    printf("初期燃料:"); scanf("%lf",&c.fuel);

    while (1){
        printf("【0・・移動距離を入力】 【１・・目的地点を入力】:"); scanf("%d",&x);
        scanf("%lf%lf",&pt.x,&pt.y);
        if (x){
            if (move(&c,pt) == 1){
                puts("移動しました。");
                put_info(c);
            }else{
                puts("燃料が足りません。");
                break;
            }
        }else{
            if (move(&c,point_cat(c.pt,pt)) == 1){
                puts("移動しました。");
                put_info(c);
            }else{
                puts("燃料が足りません。");
                break;
            }
        }
    }

    return 0;
}

