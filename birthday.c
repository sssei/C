#include <stdio.h>
#include <time.h>

int main()
{
    time_t current = time(NULL);        //現在の時間の情報を入手,ここら辺は難しいから理解しなくても大丈夫//
    struct tm *timer = localtime(&current); 
    int c_hour = timer->tm_hour;        //現在の時間をc_hourに代入//
    int c_min = timer->tm_min;          //現在の分をc_minに代入//

    printf("%d%d\n",c_hour,(c_min/60)*360);
    c_hour = c_hour % 12;               //例えば13時とかを1時に変換するために、12で割った余りにする//
    
    double l_angle = 0;                    //長針の角度//
    double s_angle = 0;                    //短針の角度//

    l_angle += ((double)c_hour/12)*360;         //時間を角度に変換してl_angelに足す//
    l_angle += ((double)c_min/60)*(360/12);     //”分"が進んでる分長針が進んでるはずだからその分も足す//

    s_angle += ((double)c_min/60)*360;          //分を角度に変換//

    printf("長針の角度は%f、短針の角度は%fです。\n",l_angle,s_angle);

    return 0;
}
