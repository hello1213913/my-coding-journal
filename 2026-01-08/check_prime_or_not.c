#include<stdio.h>
#include<math.h>

void main(){
    int prime_or_not, flag;
    printf("Enter the number to check the no is prime or not \n");
    scanf("%d", &prime_or_not);

    flag == 1;

    for(int i = 2; i <= (int)sqrt(prime_or_not); i++){
        if(prime_or_not%i == 0){
            flag = 0;
            break;
        }
    }
    if(flag == 0){
        printf("The given number(%d) is not a prime number.\n", prime_or_not);
    }else{
        printf("The given number(%d) is a prime number.\n", prime_or_not);
    }

    printf("Thank YOu \nHave a great day..\nBy Labi..");
}