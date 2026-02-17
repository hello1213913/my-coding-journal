#include<stdio.h>

int highest(int[], int);

void main(){
    int array[8], r, i;
    printf("\nWelcome<__>");
    for(i = 0; i < 8; i++){
        printf("\nEnter the value (%d)", (i+1));
        scanf("%d", &array[i]);
    }
    r = highest(array, 8);
    printf("\nThe highest is : %d", r);
    printf("\nThank you\nBy labi..");
}

int highest(int arr[], int len){
    int s = arr[0] + arr[1],i;
    for(i= 0; i < len ; i++){
        if(s < arr[i]+arr[i+1]){
            s = arr[i]+ arr[i+1];
        }
    }

    return s; 
    
}