#include<stdio.h>

int main(){
    int n,i,j,k;
    printf("Enternumber of rows");
    scanf("%d", &n);
    for(i= 1; i<= n; i++){
        for(k= 1; k<= i-1; k++){
            printf("\t");
        }
        for(j=i; j<=n; j++){
            printf("%d\t", j);
        }
        printf("\n");
    }

    return 0;
}