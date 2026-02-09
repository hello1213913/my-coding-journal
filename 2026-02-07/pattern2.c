#include<stdio.h>

int main(){
    int i,j, num;
    for(i= 1; i<= 5; i++){
        num = 5;
        for(j = 1; j<= i; j++){
            printf("%4d", num);
            num--;
        }
        printf("\n");
    }
    return 0;
}