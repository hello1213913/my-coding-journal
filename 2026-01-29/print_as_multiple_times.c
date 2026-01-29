#include<stdio.h>

int main(){
    int numb, i;
    printf("Enter the number how many times you want to print *\n");
    scanf("%d", &numb);

    for(i = 1; i<= numb; i++)
        printf("*");
    printf("\nThank YOU \nHave a great day\nBy labi..");
    return 0;
}