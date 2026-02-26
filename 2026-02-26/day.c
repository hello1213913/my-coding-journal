#include<stdio.h>

typedef struct tommorrow{
    int date, month, year;
}ch;

ch adder(ch);
int month_ch(int*, int*, int *);
int year_ch(int*, int*, int *);

int main(){
    ch a,b;
    int howmany_after;
    printf("\nEnter today date: ");
    scanf("%d", &a.date);
    printf("\nEnter current month : ");
    scanf("%d", &a.month);
    printf("\nEnter current year: ");
    scanf("%d", &a.year);

    printf("\nEnter the date after how many days: ");
    scanf("%d", &howmany_after);
    for(int i=0; i<howmany_after ; i++){
    b = adder(a);
    a=b;
    }
    printf("\nTommorow date will be: \n%d/%d/%d", b.year, b.month, b.date);
}

ch adder(ch a){
    ch increase;
    increase.date = a.date+1;
    increase.month = month_ch(&a.month, &increase.date, &a.year);
    increase.year = year_ch(&a.year, &increase.month, &increase.date);
    return increase;
}

int month_ch(int *m, int *d, int *y){
    int mn;
    if(*m == 2){
        if((*y%4 == 0 && *y%100 != 0) || *y%400 == 0){
            if(*d > 29){
                mn = *m +1 ;
                *d = 1;
            }else{
                mn = *m;
            }
        }else{
            if(*d > 28){
                mn = *m +1;
                *d = 1;
            }else{
                mn = *m;
            }
        }
    }
    else if((*d > 31) && (*m == 1||*m == 3|| *m == 5|| *m == 7||*m == 8||*m == 10||*m == 12)){
        mn = *m + 1;
        *d = 1;
    }
    else if((*d >30) &&(*m == 4||*m == 6||*m == 9||*m == 11)){
        mn = *m +1;
        *d = 1;
    }
    else{
        mn = *m;
    }
    return mn;
}

int year_ch(int *y, int *m, int *d){
    int increase_year;
    if((*m > 12)){
        increase_year = *y +1;
        *m = 1;
    }
    else{
        increase_year = *y;
    }
    return increase_year;
}

