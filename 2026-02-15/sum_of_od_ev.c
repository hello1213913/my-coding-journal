#include<stdio.h>

int checker_ev_od(int);
void sum_of_od_ev(int [], int);

void main(){
    int n, i;
    printf("\nBook your seats for the numbers:");
    scanf("%d", &n);

    int number[n];
    for(i = 0; i<n; i++){
        printf("\n(%d)th Value :", i);
        scanf("%d", &number[i]);
    }
    sum_of_od_ev(number, n);
    printf("\nThank you\nBY labi..");
}

void sum_of_od_ev(int number[], int n){
    int i,checker,sum_odd=0, count_od=0, sum_even=0, count_ev=0;
    for(i = 0; i<n; i++){
        checker = checker_ev_od(number[i]);
        if(checker == 1){
            sum_even = sum_even + number[i];
            count_ev++;
        }else{
            sum_odd = sum_odd + number[i];
            count_od++;
        }

    }
    printf("\nThe sum of even number(%d) is : %d",count_ev, sum_even);
    printf("\nThe sum of odd number(%d) is : %d",count_od, sum_odd);
}

int checker_ev_od(int n){
    if(n%2==0)
        return 1; //even = 1;
    else
        return 0; //odd = 0;
}