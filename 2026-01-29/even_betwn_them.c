//program to read two integers and display even number between them.
#include<stdio.h>

int main(){
    int n1,n2,i;
    printf("Enter the number from where and upto where you want to find the even numbers");
    scanf("%d %d", &n1, &n2);

    printf("\nThe number of even number between %d and %d is ", n1, n2);
    for(i = n1; i <= n2; i++){
        if(i%2==0){
            printf(" %d,", i);
        }
    }
    printf("\nThank You \nHave a great day\nBy labi..");
    return 0;

}