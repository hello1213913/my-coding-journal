#include<stdio.h>

int main(){
    int book,i, highest, second_hightest;
    printf("Book the array : ");
    scanf("%d", &book);

    int array[book];
    for(i=0; i<book; i++){
        printf("enter the value : ");
        scanf("%d", &array[i]);
    }

    if(array[0]>array[1]){
        highest = array[0];
        second_hightest = array[1];
    }else{
        highest = array[1];
        second_hightest = array[0];
    }


    for(i=2; i<book; i++){
        if(highest < array[i]){
            second_hightest = highest;
            highest = array[i];
        }else if(array[i]>second_hightest && array[i] != highest)
        {
            second_hightest = array[i];
        }
    }
    if(second_hightest == highest){
        printf("\nNO distinct second largest exist.");
    }

    else{
        printf("\nThe second highest number is : %d", second_hightest);}
    return 0;
}