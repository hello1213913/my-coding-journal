//to reverse the number from the user.
#include<stdio.h>
#include<math.h>
long int reverse(long int, int);
int count(int);
void main(){
    long int num, rev_value;
    printf("\nEnter the number:");
    scanf("%ld", &num);
    
    rev_value = reverse(num, count(num));

    printf("\nThe reverse of %ld is : %ld", num, rev_value);
    printf("\nThank you \nBy labi..");
}

long int reverse(long int num, int count){
    if(num == 0)
        return 0;
    return (pow(10, count-1)*(num%10) + reverse(num/10, count-1));
}

int count(int n){
    if(n==0)
        return 0;
    return (1 + count(n/10));
}