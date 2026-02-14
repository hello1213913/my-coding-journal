#include<stdio.h>

long int factorial(int);
long int permutation(long int, long int);

void main(){
    int p, r; long int value;
    printf("\nEnter the value of p:");
    scanf("%d", &p);

    printf("\nEnter the value of r:");
    scanf("%d", &r);
    value = permutation(factorial(p), factorial(p-r));
    printf("\n The permutation of P(%d, %d) is : %d", p, r, value);
    printf("\nThank you \nBY labi..");
}

long int factorial(int n){
    if(n==0)
        return 1;
    return (n* factorial(n-1));
}

long int permutation(long int a, long int b){
    
    return (a/b);
}