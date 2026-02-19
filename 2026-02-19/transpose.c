#include<stdio.h>

int main(){
    int row, column,i, j;
    printf("\nEnter the row no:");
    scanf("%d", &row);
    printf("\nEnter the column no:");
    scanf("%d", &column);

    int matrix[row][column];
    for(i=0; i<row; i++){
        for(j =0 ; j<column; j++){
            printf("\nEnter the value for(row%d)(column%d)\n", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i=0; i< column;i++){
        for(j=0;j< row; j++){
            printf("%d\t", matrix[j][i]);
        }
        printf("\n");
    }

    printf("\nThank You\nBy labi..");
    return 0;
}