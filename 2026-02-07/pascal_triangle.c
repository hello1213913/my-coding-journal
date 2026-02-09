//Program to print the Pascal's Triangle expression..


#include<stdio.h>

int main(){
    int column,row, binomial_coff=1, i, space;

    printf("Enter the no of pascal's triangle column");
    scanf("%d", &column);
   
    

    for(i =0; i < column; i++){
        binomial_coff = 1;
        for(space = 0; space<column - i; space++){
                printf("  ");
                
        }

        for(row = 0; row <= i; row++){
            printf("%4d", binomial_coff);
            binomial_coff = binomial_coff * (i-row) / (row+1);
                
               
        }
        printf("\n");

    }

    return 0;

}