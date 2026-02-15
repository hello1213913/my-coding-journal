//Program to find the sum of 1^2 - 2^2 + 3 ^2 - 4^2.......upto n;
#include<stdio.h>

int calculate(int, int);

int main(){
    int value, even_or_odd, result;

    printf("\nEnter the term :");
    scanf("%d", &value);

    if(value%2 == 0)
        even_or_odd = -1;
    else
        even_or_odd = 1;

    printf("\nThe final result is : %d", calculate(value, even_or_odd));
    printf("\nThank you\nBy labi..");
    return 0;
}

int calculate(int val, int sign){
    if(val == 1)
        return 1;
    return (val * val * sign + calculate(val-1, -1* sign));
}