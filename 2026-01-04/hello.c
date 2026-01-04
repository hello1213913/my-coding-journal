// tp cpmver meters to kilometers, days to years, and moths and so on..


#include<stdio.h>

void meter_to_kilometers();
void days_to_years_and_months();

int main(){ 
    printf("Here you can convert\nMeter to kilometer\n\tDays to years and months");
    meter_to_kilometers();
    days_to_years_and_months();

}

void meter_to_kilometers(){
    float meter,kilo_meter;
    printf("\nEnter the valuse of meter");
    scanf("%f", &meter);

    kilo_meter = meter/1000;
    printf("\n(%f:meter) is = %f kilometer", meter, kilo_meter);
}

void days_to_years_and_months(){
    int days, years, months;

    printf("\nEnter the no of days to convert into \n\tyears and days\n");
    scanf("%d", &days);

    years = days/365;
    months = days%365;

    printf("(%d : days) = %d years %d months", days, years, months);
}