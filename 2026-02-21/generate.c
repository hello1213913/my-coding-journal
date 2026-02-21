/*To generate the matrix of m*n by expression mij = x^i+j*/

#include<stdio.h>
int solver(int, int);

int main(){
    int i, j,x, r, c;
    printf("\nEnter the number of row: ");
    scanf("%d", &r);
    printf("\nEnter the number of column :");
    scanf("%d", &c);

    printf("\nEnter the value of x:");
    scanf("%d", &x);
    int matrix[r][c];
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            matrix[i][j] =  solver(x,i+j+2);
        }
    }

    printf("\nThe matrix is : \n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nThank you\nBy labi..");
}

int solver(int x, int n){
    if(n==1)
        return x;
    return (x*solver(x,n-1));
}