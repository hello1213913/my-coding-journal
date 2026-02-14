/*To find the series having sn = 1+ x/1(factorial) + x^2/2(factorail)..*/
#include<stdio.h>
#include<math.h>

long int factorial(int);
float numerator(float,int);
void main(){
    int n=1;float x, term=0,sum=1;
    printf("\nEnter the value of x:");
    scanf("%f", &x);

    while(1){
        term = numerator(x,n)/(float)factorial(n);
        printf("\nTerm : %f", term);
        sum = sum + term;
        n++;
        if(fabs(term) < pow(10,-6))
            break;
    }
    printf("\nThe sum of the series is: %f", sum);

}

long int factorial(int n){
    if(n == 0)
        return 1;
    return (n * factorial(n-1));
}

float numerator(float x, int n){
    if(n==0)
        return 1;
    return ( x * numerator(x, n-1));
}