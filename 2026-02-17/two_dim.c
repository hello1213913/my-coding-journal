#include<stdio.h>

int main(){
    int marks[4][5],i,j;
    for(i = 0 ; i < 4; i++){
        for(j = 0; j <5; j++){
            printf("\nThe marks of person (%d) : ", (i+1));
            scanf("%d", &marks[i][j]);
        }
    }

    for(i = 0; i<4; i++){
        for(j = 0; j<5; j++){
            printf("%d    ", marks[i][j]);
            
        }
        printf("\n");   
    }
    printf("\nThank you.");
    return 0;
}