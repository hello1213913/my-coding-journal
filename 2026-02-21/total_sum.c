//Program to find the total sum of the two dimensional array.

#include<stdio.h>
#define max 20
int sum_provider(int*, int);
void input_output();
int main(){
    

    printf("\nWelcome here you can find the total sum of two dimensional array.");
    input_output();
    return 0;
}

void input_output(){
    int i, j, r, c;
    printf("\nEnter the row no :");
    scanf("%d", &r);
    printf("\nEnter the column no: ");
    scanf("%d", &c);

    int array_t[r][c];
    for(i=0; i< r; i++){
        for(j=0; j< c; j++){
            printf("\nEnter the value of row(%d) and column%d : ", i+1, j+1);
            scanf("%d", &array_t[i][j]);
        }
    }

    printf("\nThe sum of the given value is : %d", sum_provider(&array_t[0][0], r*c));
}

int sum_provider(int *pa, int n){
    int sum = 0,i; 
    for(i=0; i< n; i++){
        sum += *pa;
        pa++;
    }

    return sum;
}