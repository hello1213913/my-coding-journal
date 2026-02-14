/*To input the digit from the user and find the value from 1 to increasing by 10
upto the user input terms using recursive*/

#include<stdio.h>

int value(int, int);
void main(){
    int terms, calling;
    printf("\nEnter the terms :");
    scanf("%d", &terms);
    calling = value(terms, 1);
    printf("\nThank you \nBY labi..");
}
int value(int m, int n){
    if(m==0)
        return 0;
    printf("    %d", n);
    return (value(m-1, n*10));
}