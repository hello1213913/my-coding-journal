#include<stdio.h>

void pattern(int );

int main(){
    int n; //enter thee number of n

    printf("\nEnter the number of n to be printed. : ");
    scanf("%d", &n);

    pattern(n);

    printf("\nBy labi..");
    return 0;
}

void pattern(int n){
    char pat = '*', space = ' ';
    int i,j, k = n, sp, sp_how_many = n;
    for(i=1; i<= n; i++){
        sp = 1;
        while(sp <= sp_how_many - 1){
            printf("%c", space);
            sp++;
        }

        for(j=1; j<= i; j++){
            printf("%c ", pat);
            
        }
        printf("\n");
        sp_how_many--;
        k++;
    }
}