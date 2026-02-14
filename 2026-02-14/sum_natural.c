//To find the sum of natural number.

#include<stdio.h>

long int sum_natural(long int);

void main(){
    long int upto_which, final_sum;
    printf("\nEnter the number upto which you want to find the sum of natural number:");
    scanf("%ld", &upto_which);

    final_sum = sum_natural(upto_which);
    printf("\nThe sum is : %ld", final_sum);
    printf("\nThank you \nBy labi..");
}

long int sum_natural(long int n){
    if(n==0)
        return 0;
    return (n+ sum_natural(n-1));
}