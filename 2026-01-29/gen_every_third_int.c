/*Program to generate every third integer beginning with i= 2 and continuing for all integers that are less than 100. 
Also calculate the sum of these numbers that are exactly divisible by 7.
*/

#include<stdio.h>

int main(){
    int i, sum=0;
    for(i=2; i<100; i = i+3){
        printf(" %d,", i);

        if(i%7==0){
            sum = sum+i;
        }
    }
    printf("\n The sum that are divisible by 7  in every third integer is: %d", sum);
    printf("\nThank YOU\nHave a great day\n By labi..");
    return 0;
}