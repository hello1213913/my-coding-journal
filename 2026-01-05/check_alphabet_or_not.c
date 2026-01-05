#include<stdio.h>

int main(){
    char unknown;
    printf("Enter somehing to check character or not\n");

    unknown = getchar();
    if((unknown>='A' && unknown<='Z') || (unknown >= 'a' && unknown <='z')){
        printf("You entered character...");
    }else{
        printf("\nSorry the user input is not a character");
    }
    printf("\nThank YOU\nHave a great day\n\tBy Labi...");
    
}
/*
#include<ctype.h>

int main(){
    char unknown;
    printf("Enter something");
    
    unknown = getchar();
    
    if(isalpha(unknown)){
        printf("It is alphabet");
    }
    else{
        printf("not a alphabet");
        }

    }
*/