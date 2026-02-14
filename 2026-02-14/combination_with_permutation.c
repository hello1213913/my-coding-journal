#include<stdio.h>

long int factorial(int);
long int permutation(long int, long int, long int, int);

void main(){
    int p, r,what_to; long int value;
    printf("\nEnter the value of p:");
    scanf("%d", &p);

    printf("\nEnter the value of r:");
    scanf("%d", &r);
    printf("\nEnter To find\n1: Permutation\n2: Combination");
    scanf("%d", &what_to);

    value = permutation(factorial(p), factorial(p-r), factorial(r), what_to);
    if(what_to == 1)
        printf("\n The permutation of P(%d, %d) is : %d", p, r, value);
    else if(what_to == 2)
        printf("\n The combination of c(%d, %d) is : %d", p, r, value);
    printf("\nThank you \nBY labi..");
}

long int factorial(int n){
    if(n==0)
        return 1;
    return (n* factorial(n-1));
}

long int permutation(long int a, long int b, long int c, int what){
    if(what == 1)
        return (a/b);
    else if(what == 2)
        return (a/(b*c));
    else
        printf("\nOpps sorry invalid!! Try again<_>");
}