//program to calculate the sum of the diagonal element

#include<stdio.h>
#define max 10
int diagonal_sum(int[][max], int);

void main(){
    int i, j, r, c, array2[max][max];
    printf("\nEnter the value of the row: ");
    scanf("%d", &r);
    printf("\nEnter the value of column: ");
    scanf("%d", &c);

    if(r==c){
    for(i=0; i< r; i++){
        for(j=0; j< c; j++){
            printf("\nEnter the value of row(%d) column(%d) : ", i+1, j+1);
            scanf("%d", &array2[i][j]);
        }
    }

    printf("\nThe diagonal sum of matrix : \n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("%d\t", array2[i][j]);
        }
        printf("\n");
    }
    printf("\nis : %d", diagonal_sum(array2, r));
    }
    else
        printf("\nSorry invalid square ie(Enter the row and column same..)");
}

int diagonal_sum(int matrix[max][max], int n){
    int i,j, sum =0; 
    for(i=0; i< n; i++){
        for(j=0; j<n; j++){
            if(i==j)
                sum += matrix[i][j];
        }
    }

    return sum;
}