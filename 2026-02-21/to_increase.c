//Program that incerease the each value of the array by some value as entered by the user.

#include<stdio.h>
#define max 10

void no_increaser(int[max][max], int, int, int);

int main(){
    int i, j, matrix[max][max], increase, r, c;
    printf("\nEnter the row no:");
    scanf("%d", &r);
    printf("\nEnter the column no:");
    scanf("%d", &c);

    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("\n(%d)row (%d)column value : ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nEnter the value that you want to increase all the given matrix by : ");
    scanf("%d", &increase);
    printf("\nThe matrix before increasing is: \n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    no_increaser(matrix, increase, r, c);

    printf("\nThe matrix after increasing all given matrix by %d is : \n", increase);
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nThank you\nBy labi..");
    return 0;
}

void no_increaser(int mat[max][max], int increase, int r, int c){
    int i, j;
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            mat[i][j] = mat[i][j] + increase;
        }
    }
}