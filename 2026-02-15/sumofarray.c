#include<stdio.h>

long int sum_f_array(int [], int);


void main(){
    int n, i; long int sum;
    printf("\nEnter how many array you want to book(you want to enter.:_)");
    scanf("%d", &n);
    int values_array[n];

    for(i = 0; i<n; i++){
        printf("(%d)th Value:", i);
        scanf("%d", &values_array[i]);
    }

    sum = sum_f_array(values_array, n);
    printf("\nThe sum of array is: %ld", sum);
    printf("\nThank you\nBy labi..");
}

long int sum_f_array(int value[], int n){
    long int sum=0; int i;

    for(i = 0; i<n; i++){
        sum = sum + value[i];
    }

    return sum;
}