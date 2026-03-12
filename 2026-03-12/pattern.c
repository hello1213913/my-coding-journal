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
    int i,j, sp, sp_how_many = n; //sp and sp_how_many for front space spacing
    for(i=1; i<= n; i++){ //loop used for the each row.
        sp = 1;
        while(sp <= sp_how_many - 1){   //it is used  for printing space.
            printf("%c", space);
            sp++;
        }

        for(j=1; j<= 2 * i - 1; j++){   //used for printing star.
            printf("%c", pat);
            
        }
        printf("\n");   //new line after the finishing of the row.
        sp_how_many--;
    }
}