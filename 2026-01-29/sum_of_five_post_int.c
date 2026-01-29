#include<stdio.h>

int main(){
    int n,i=1,s=0;
    do{
    printf("\nEnter the positive integer.");
    scanf("%d", &n);

    if(n>0){
        i = i+1;
        s = s+n;
    }

    }while(i<=5);
    printf("The sum is: %d", s);
    printf("\nThe average is: %f", s/(float)5);
    printf("\nThank YOU \nHave a great day \nBy labi..");
    return 0;

}