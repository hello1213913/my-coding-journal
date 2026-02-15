//program that reads numerical values for x and y and evaluate the formula y = x^n..

#include<stdio.h>

long int power(int, int);

void main(){
    int pow, x;long int y;
    printf("\nEnter the value of x:");
    scanf("%d", &x);
    printf("\nEnter the value of power:");
    scanf("%d", &pow);

    y = power(x, pow);
    printf("\nThe value of (%d^%d) is : %ld", x, pow, y);
    printf("\nThank you \nBy labi..");
}

long int power(int x, int pow){
    if(pow==1)
        return x;
    return (x * power(x, pow-1));
}