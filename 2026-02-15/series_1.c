//Program to evalute a series x/1! - x^3/3!+ x^5/5!...;
#include <stdio.h>
double numerator(float, int);
long int factorial(int);
double compute(int, float,int);

int main(){
    double solved;int terms, sign; 
    float value;
    printf("\nEnter the no of terms:");
    scanf("%d", &terms);
    printf("\nEnter the value of x:");
    scanf("%f", &value);

    if(terms%2 ==0)
        sign = -1;
    else
        sign = 1;

    solved= compute(terms, value, sign);
    printf("\nThe value of series is : %lf", solved);
    printf("\nThank you\nBy labi...");
    return 0;
    
    
}

double compute(int term,float value, int sign){
    if(term <=0 )
        return 0;
    return (sign*numerator(value, term)/(float)factorial(term)+compute(term-2, value, -1* sign));
}

double numerator(float value, int term){
    if(term == 1)
        return value;
    return( value * numerator(value,term-1));
}

long int factorial(int term){
    if(term == 0)
        return 1;
    return (term * factorial(term-1));
}