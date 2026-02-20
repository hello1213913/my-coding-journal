#include<stdio.h>

void cofactor(int[10][10], int[10][10], int , int, int);

int determinant(int[10][10], int);

void main(){
    int i,j,row, column, matrix[10][10];

    printf("\nEnter the row no:");
    scanf("\n%d", &row);
    printf("\nEnter the column no:");
    scanf("%d", &column);

    if(row==column){
        for(i=0; i<row;i++){
            for(j=0; j<column; j++){
                printf("\nEnter the row%d and column %d value:", i+1, j+1);
                scanf("%d", &matrix[i][j]);
            }
        }
    printf("\nThe determinant is : %d\nThank You\nBy labi..", determinant(matrix, row));
    

    }
    else
        printf("\nSorry the row and column no doesn't matches.! Try again..");
}

int determinant(int matrix[][10], int n){
    int f,det=0, sign = 1,temp[10][10];
    if(n==1) return matrix[0][0];
    if(n==2) return (matrix[0][0]*matrix[1][1]-matrix[1][0]*matrix[0][1]);

    for(f=0; f<n; f++){
        cofactor(matrix, temp, 0, f, n);
        det += sign * matrix[0][f] * determinant(temp, n-1);
        sign *= -1;
    }

    return det;
}

void cofactor(int matrix[10][10], int temp[10][10], int p, int f, int n){
    int row, column,i=0, j=0;
    for(row = 0; row< n; row++){
        for(column =0 ; column< n; column++){
            if(row != p && column != f){
                temp[i][j++] = matrix[row][column];
                if(j==n-1){
                    i++;
                    j=0;
                }
            }
        }
    }
}