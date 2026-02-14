//Program to count the even and odd digits present in the user input no.
#include<stdio.h>

int even_odd_no(int, int * , int *);
void main(){
    int number, even_no = 0, odd_no = 0, back_up_no;

    printf("\nEnter the number:");
    scanf("%d", &number);
    back_up_no = number;
    even_odd_no(number, &even_no, &odd_no);
    printf("\nThe even number in %d are : %d", back_up_no, even_no);
    printf("\nThe odd  number in %d are : %d", back_up_no, odd_no);
    printf("\nThank You \tBy labi..");
}

int even_odd_no(int num, int *even, int *odd){
    
    while(num != 0){
        int rem = num%10;
        if(rem%2 == 0){
            *even = *even + 1;
        }else{ 
            *odd = *odd +1;
        }
        num = num/10;
    }
}