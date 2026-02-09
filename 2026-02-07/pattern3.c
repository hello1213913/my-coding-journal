#include<stdio.h>

int main(){
    int i,j,space,no=5, n = 5;

    for(i = 1; i <= 5; i++){
        for(space= 1; space <= n; space++)
            printf("  ");
        n--;

        for(j= 1; j <= i; j++){
            printf("%2d", no);
            no--;
        }
        printf("\n");
    }
    return 0;
}