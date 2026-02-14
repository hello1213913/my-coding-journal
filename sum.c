//To sum the input until the user hits negative number.

#include<stdio.h>

int sum_non_neg_no();

void main(){
    printf("\nSum is: %d", sum_non_neg_no());
}

int sum_non_neg_no(){
    int num;
    printf("\nEnter the number:");
    scanf("%d", &num);
    if(num<0)
        return 0;
    else{
        return (num+ sum_non_neg_no());
    }
}
