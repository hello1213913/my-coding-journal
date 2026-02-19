#include<stdio.h>

//to find the determinat for 2*2 matrix;

int determinant_solve(int[2][2], int,int);

int main(){
    int square_mat[2][2], i,j,determinant;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("\nEnter the value for (row(%d), column(%d))", i+1, j+1);
            scanf("%d", &square_mat[i][j]);
        }
    }

    determinant = determinant_solve(square_mat, 2, 2);
    printf("\nThe determinant of martix :\n");
    for(i = 0; i<2 ; i++){
        for(j = 0; j<2 ; j++){
            printf("%d   ", square_mat[i][j]);
        }
        printf("\n");
    }

    printf(" is : %d", determinant);
    return 0;
}

int determinant_solve(int matrix[2][2], int a, int b){
    return (matrix[0][0]*matrix[1][1]-matrix[1][0]*matrix[0][1]);
}