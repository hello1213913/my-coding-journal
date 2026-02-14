/*Program to check the given numbers are palindrome or not*/

#include<stdio.h>
#include<math.h>
int palindrome(int, int);

void main(){
    int value,digit, check;
    printf("\nEnter the value to check palindrome or not:");
    scanf("%d", &value);

    digit = log10(value)+1;

    check = palindrome(value, digit);
    if(check == value)
        printf("\nThat's the palindrome <_>.");
    else
        printf("\nNOt an palindrome!! <@>");
    
}

int palindrome(int m, int n){
    if(m==0)
        return 0;
    return(pow(10,n-1)*(m%10) + palindrome(m/10, n-1));
}