#include<stdio.h>

void fibonacii(int, int, int);

int main(){
    int n, count=1;
    printf("\nEnter the term upto which to find the fibonacii series");
    scanf("%d", &n);

    fibonacii(n, 1, 0);
    printf("\nThank you\nHave a great day.\nBy labi..");
    return 0;
}

void fibonacii(int n, int prev, int prnt){
    

   
    
    if(n != 0){
        printf("%4d", prnt);
        
        fibonacii(n-1,prnt, prnt+prev);
    }
    

}