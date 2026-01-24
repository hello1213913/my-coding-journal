#include<stdio.h>
int main(){
    printf("fibonacci series ");
    printf("\nEnter the term number you want to print upto");

    int which_term, sum=1, n0 = 0, n1= 1 , n_up;
    scanf("%d", &which_term);

    if(which_term == 1){
        printf("%d", n0);
        printf("\nsum : 0");
    }
    if(which_term == 2){
        printf("%d", n1);
        printf("\nSum : 1");
    }

    if(which_term>2){
        printf("%d", n0);
        printf(" + %d", n1);
        for(int i = 3; i <= which_term; i++){
            n_up = n0 + n1;
            printf(" + %d", n_up);
            sum += n_up;
            n0 = n1;
            n1 = n_up;
        }
        printf("\nSum of this %d : %d", which_term, sum);
    }
    printf("\nThank YOu\nHave a great day.\n\tBy Labi..");
    return 0;
}