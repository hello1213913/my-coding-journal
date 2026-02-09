#include<stdio.h>

int main(){
    int i, j, column, no = 1;
    printf("Enter a triangular no :");
    scanf("%d", &column);

    for(i = 1; i <= column; i++){
        for(j = 1; j <= i; j++){
            printf("%4d", no);
            no++;
            

        }
        printf("\n");
    }

    return 0;
}