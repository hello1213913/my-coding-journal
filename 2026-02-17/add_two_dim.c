#include<stdio.h>

int main(){
    int num1_r, num1_c, num2_r, num2_c, i, j;
    printf("\nEnter the size of row and column of num1:");
    scanf("%d %d", &num1_r, &num1_c);
    printf("\nEnter the size of row and column for num2:");
    scanf("%d %d", &num2_r ,&num2_c);
    
    int num1[num1_r][num1_c], num2[num2_r][num2_c], num3[num1_r][num1_c];
    if(num1_r==num2_r && num2_c == num1_c){
        for(i = 0; i < num1_r; i++){
            for(j = 0; j < num2_c; j++){
                printf("\n Enter the value for  num1(row%d) and column(%d)", (i+1), (j+1));
                scanf("%d", &num1[i][j]);
            }
            printf("\n");
        }

        for(i = 0; i< num2_r; i++){
            for(j = 0; j < num2_c; j++){
                printf("\nEnter the value of num2 (row%d) and (column%d):", (i+1), (j+1));
                scanf("%d", &num2[i][j]);
            }
            printf("\n");
        }
        for(i=0; i<num1_r; i++){
        for(j=0;j<num1_c; j++){
            num3[i][j] = num1[i][j] + num2[i][j];
            printf("%d   ", num3[i][j]);
        }
        printf("\n");
        }

    }

    
    else
        printf("\nInvalid size doesnot match");

    printf("\nThank you\nBy labi..");
    return 0;


}