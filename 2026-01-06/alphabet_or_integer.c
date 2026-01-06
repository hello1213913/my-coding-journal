#include<stdio.h>

void main(){
    char unknown;

    printf("Enter something to check what you entered is integer or character!!");
    unknown = getchar();

    if((unknown >= 'A' && unknown <= 'Z') || (unknown >= 'a' && unknown <= 'z')){  
        printf("\nYou entered character..");
    }else if(unknown >= '0' && unknown <= '9'){
        printf("\nYou entered integer");
    }else if(unknown >= '0' && unknown <= '9'){
        printf("\nYou entered integer");
    }else{
        printf("\nThe input you entered is a special character.");
    }

    printf("\nThank You\nHave a great day\n\tBy Labi..");

}