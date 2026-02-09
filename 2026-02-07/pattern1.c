#include<stdio.h>

int main(){
    char a = '*';
    int i,j;
    for(i=1 ; i<= 5; i++){
        for(j = 1; j <= i; j++){
            printf("%3c", a);
        }
        printf("\n");
    }

    return 0;
}