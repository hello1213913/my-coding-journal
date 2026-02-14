/*Program that find the sum until the final sum is a single digit.*/
#include<stdio.h>

long int sum(long int);
long int count(long int);

int main(){
    long int value, calling, nod ;//no of digit

    printf("\nENter the value:");
    scanf("%ld", &value);
    while(1){
        
        calling = sum(value);
        value = calling;
        nod = count(calling);
        if(nod == 1){
            break;
        }

    }
    printf("\nThe sum is %ld", calling);
}

long int count(long int n){
    
    if(n==0)
        return 0;

    count(n/10);
    return 1 + count(n/10);
}

long int sum(long int m){
    if(m==0)
        return 0;
    return ((m%10)+ sum(m/10));
}