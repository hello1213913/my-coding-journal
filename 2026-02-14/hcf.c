#include<stdio.h>

int hcf(int , int);

int main(){
    int m,n;

    printf("\nEnter the number to find the hcf:");
    scanf("%d %d", &m, &n);
    printf("\nThe hcf is %d", hcf(m,n));
    printf("\nTHank You\nHave a great day..\nBy labi..");
    return 0;
}

int  hcf(int m, int n){
    if(n==0)
        return m;
    return (hcf(n, m%n));
}