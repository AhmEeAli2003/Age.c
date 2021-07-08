  

#include<stdio.h>

#include<time.h>

void main(void)

{

    time_t s,val =1;

    struct tm* current_time;

    s= time(NULL);

    current_time = localtime(&s);

    int born_year,born_month,born_day;

    printf("please Input Year/month/day [Click Enter after every one]: ");

    scanf("%d%d%d",&born_year,&born_month,&born_day);

    int year=2021;

    int month=4;

    int day=17;

    int dif_month=month-born_month;

    int dif_day=born_day-day;

    int dif_hour=24-(current_time->tm_hour);

    int age_year=year-born_year;

    int age_month=(age_year*12)+dif_month;

    int age_day=age_month*30;

    int age_hour=(age_month*24)-dif_hour;

    printf("Your age is [%d] year : [%d] month: [%d] day: [%d] hours\n",age_year,dif_month,dif_day,dif_hour);

    printf("Your age is [%d] year : [%d] month: [%d] day: [%d] hours\n",age_year,age_month,age_day,age_hour);

    printf(" Time now: %02d:%02d:%02d\n",current_time->tm_hour,current_time->tm_min,current_time->tm_sec);

}

