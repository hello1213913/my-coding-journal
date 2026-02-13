#include<stdio.h>

long int factorial(int);

int main(){
    long int fat_of_n; int n;
    printf("\nEnter the no to find the factorial: ");
    scanf("%d", &n);

    fat_of_n = factorial(n);
    printf("\nThe factorail of (%d) is: %ld", n, fat_of_n); 
    printf("\nThank You \nBY labi..");
    return 0;
}

long int factorial(int a){
    if(a == 0)
        return 1;
    return (a*factorial(a-1));
}