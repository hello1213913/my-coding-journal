//program to find the highest among the 4 input user.

#include<stdio.h>

int highest(int, int, int);

int main(){
    int a,b,c,d,check;
    printf("\nEnter the 1st value.");
    scanf("%d", &a);
    printf("\nEnter the 2st value.");
    scanf("%d", &b);    
    printf("\nEnter the 3st value.");
    scanf("%d", &c);
    printf("\nEnter the 4st value.");
    scanf("%d", &d);

    check = highest(a,b,c);
    if(check > d)
        printf("\nHighest is : %d", check);
    else
        printf("\nHighest is : %d", d);
    printf("\nThank you\nBy labi..");
    return 0;

}

int highest(int a, int b, int c){
    return((a>b)?((a>c)?a:c): ((b>c)?b:c ));
}