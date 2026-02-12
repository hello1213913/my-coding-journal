#include<stdio.h>

void main(){
    int numbers[10], i, sum= 0, *p_num;
    

    for(i = 0; i < 10; i++){
        printf("\nEnter the (%d)element", (i+1));
        scanf("%d", &numbers[i]);
    }

    p_num = &numbers[0];
    i  = 0;
    while(i < 10){
        sum = sum + *p_num;
        p_num ++;
        i ++;
    }

    float average_value = sum/(float)10;
    printf("\nThe average value of the given array is: %f", average_value);
    printf("\nThank YOU \n\tBy labi.");

}