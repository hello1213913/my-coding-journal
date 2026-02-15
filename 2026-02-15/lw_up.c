//program to convertcharacter from lower to upper or upper to lower.
#include<stdio.h>

char converter_up_lw(char,int);

int main(){
    char value, checker,result; int which;
    printf("\nEnter the character:");
    scanf("%c", &value);
    printf("\nWhat do you want to do \n1 : Convert lower to upper\n2: Convert upper to lower");
    scanf("%d", &which);

    switch(which){
        case 1: if(value >= 'a' && value <= 'z'){
                    result = converter_up_lw(value,1);
                    printf("\nThe upper case of %c is %c .", value , result);
                }
                else
                    printf("\nSorry the value is already upper case or is special character.<.>");
                break;
        case 2: if(value >= 'A' && value <= 'Z'){
                    result = converter_up_lw(value,0);
                    printf("\nThe lower case of %c is %c .", value, result);
                    }
                else {
                    printf("\nSorry the character is already lower case or is a special character");
                }
                break;
        default: printf("\nInvalid which press 1 or 2");

    }
    printf("\nThank you\nBY labi..");
    return 0;
}

char converter_up_lw(char a, int i){
    if(i == 1)
        return (a-32);
    else
        return (a + 32);
}