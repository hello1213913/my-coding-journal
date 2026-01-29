// to print like 1 2 3 4 5 .. n-1 n n-1 4 3 2 1

#include<stdio.h>

int main(){
    int pos_int, i=1;
    printf("Enter positive integer");
    scanf("%d", &pos_int);
    
    if(pos_int >= 1){
        for(i =1 ; i <= pos_int; i++){
            printf(" %d", i);
        }
        for(i = pos_int-1; i >= 1; i--){
            printf(" %d", i);
        }
    }
    else if(pos_int== 0){
        printf("Opps that is 0");
    }
    else{
        printf("\nInvalid that is negative number..");
}
    return 0;

}