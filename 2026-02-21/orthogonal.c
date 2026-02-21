//to check whether the matrix is orthogonal or not..

#include<stdio.h>
#define m 10

int check_orthogonal(int[m][m], int);

void main(){
    int i, j, row,ortho_or_n;
    printf("\nEnter the row and column in the form of square matrix:");
    scanf("%d", &row);

    int matrix[m][m];
    for(i=0; i<row;  i++){
        for(j =0; j<row; j++){
            printf("\nEnter the value of row(%d) and column(%d)", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    ortho_or_n = check_orthogonal(matrix, row);
    if(ortho_or_n == 1){
        printf("\nThe given matrix is orthogonal.");
    }
    else 
        printf("\nSorry not orthogonal..");

    printf("\nThank you\nBy labi...");
    
}

int check_orthogonal(int matrix[m][m], int n){
    int i,j,temp[n][n], value, matrix_mult[m][m];

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            temp[i][j] = matrix[j][i];
        }
    }

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            matrix_mult[i][j]  = 0;

            for(int k = 0; k<n; k++){
                matrix_mult[i][j] += temp[i][k] * matrix[k][j];
            }
        }
    }

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if((i==j && matrix_mult[i][j] != 1) || (i!=j && matrix_mult[i][j] != 0)|| (i != j && matrix_mult[j][i] !=0)){
                return 0;
            }
        }
    }

    return 1;   
}