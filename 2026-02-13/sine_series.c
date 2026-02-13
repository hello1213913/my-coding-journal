#include<stdio.h>

float numerator(float, int );
double compute(float, int ,int );
long int factorial(int);

int main(){
    double srs_value; int n,sign;float x;
    printf("\nEnter the value of x in Degree.:");
    scanf("%f", &x);
    x = 3.14/180 * x;
    printf("\nEnter the no of terms:");
    scanf("%d", &n);

    if(n%2==0)
        sign = -1;
    else
        sign = 1;

    srs_value = compute(x, 2*n-1, sign);
    printf("\nThe value of the sine series having x(%f) upto (%d)terms is : %lf", x, n, srs_value);
    printf("\nThank YOu \nBy labi..");
    return 0;
}

double compute(float x, int n, int sign){
    if(n==1)
        return x;
    return (sign * numerator(x, n)/factorial(n) + compute(x, n-2, -1*sign));
}
float numerator(float x, int n){
    if(n==1)
        return x;
    return (x * numerator(x, n-1));
}

long int factorial(int n){
    if(n==0)
        return 1;
    return (n * factorial(n-1));
}