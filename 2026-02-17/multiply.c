#include<stdio.h>

void multiply(int[][10], int[][10], int[][10], int, int , int);

void main(){
    int c1,r1,c2,r2,i,j;
    printf("\nEnter the row and column for num1:");
    scanf("%d %d", &r1, &c1);
    printf("\nEnter the row and column for num2:");
    scanf("%d %d", &r2, &c2);

    int num1[10][10], num2[10][10], num3[10][10];

    if(c1 == r2){
        for(i= 0; i < r1; i++){
            for(j= 0; j < c1; j++){
                printf("\nEnter the value for num1 (row%d) (column%d)", (i+1), (j+1));
                scanf("%d", &num1[i][j]);
            }
            
        }

        for(i = 0; i < r2; i++){
            for(j = 0; j< c2; j++){
                printf("\nEnter the value for num2 (row%d) (column%d)", (i+1), (j+1));
                scanf("%d", &num2[i][j]);
            }
            
        }

        multiply(num1, num2, num3, r1, c1, c2);

    }

    else{
        printf("\nSorry the matrix size does not match (ie column1 should be equal to row2.)");
    }
    printf("\nThank you \nBy labi..");

}

void multiply(int num1[][10], int num2[][10], int num3[][10], int r1, int c1, int c2){
    int i , j,k;
    for(i=0; i < r1; i++){
        for(j = 0; j < c2; j++){
            num3[i][j] = 0;
            for(k = 0; k < c1; k++){
                num3[i][j] = num3[i][j] + num1[i][k] * num2[k][j];
            }
        }
    }

    for(i = 0; i < r1; i++){
        for(j = 0 ; j < c2; j++){
            printf("%d    ", num3[i][j]);
        }
        printf("\n");
    }
}