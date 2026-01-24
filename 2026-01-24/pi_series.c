#include<stdio.h>

int main(){
    float term, sum = 0;
    int sign =1, term_th;
    printf("here you can find the pi series sum upto n term");
    printf("\nEnter the term upto which you want to find the sum");
    scanf("%d", &term_th);
    int n =1;
    do{
        term = (1/((float)2 * n-1)) * sign;
        sum += term;
        sign *= -1;
        n++;


    }while(n<= term_th);
    printf("\nThe sum upto %d is: %f", term_th, 4 * sum);
    printf("\nThank you \nHave a great day\n\tBy labi..");
    return 0;
}