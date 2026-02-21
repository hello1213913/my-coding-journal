// program that adds the individual row of a two dimensional array of m by n and store the sums of row into a single dimensional array using functions.

#include<stdio.h>
#define max 10
void sum_provider(int[max][max], int[], int,int);

int main(){
    int i,j,value[max][max], row, column;
    printf("\nWelcome here you can find the sum of the array row by row .");
    printf("\nEnter the no of row: ");
    scanf("%d", &row);
    printf("\nEnter the no of column: ");
    scanf("%d", &column);
    for(i=0; i<row; i++){
        for(j = 0; j<column; j++){
            printf("\nEnter the value of row%d and column %d", i+1, j+1);
            scanf("%d", &value[i][j]);
        }
    }

    int sum[row];
    sum_provider(value, sum, row, column);
    printf("\nThe sum are :  ");
    for(i=0; i<row; i++){
        printf("%d   ", sum[i]);
    }
    printf("\nThank You..\nBy  labi..");
    return 0;
}

void sum_provider(int val[max][max], int su[], int r, int col){
    int i, j;
    for(i=0; i<r ; i++){
        su[i] = 0;
        for(j=0; j<col; j++){
            su[i] += val[i][j];
    }
    }
}