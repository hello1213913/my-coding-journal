#include<stdio.h>
int main(){
    int num;

    printf("Enter the number from 1 to 7 to know which number denotes what\n");
    scanf("%d", &num);

    if(num>=1 && num <=7){
        switch(num){
            case 1: printf("\nsunday");
                break;
            case 2: printf("\nMonday");
                break;
            case 3: printf("\nTuesday");
                break;
            case 4: printf("\nWednesday");
                break;
            case 5: printf("\nThursday");
                break;
            case 6: printf("\nFriday");
                break;
            case 7: printf("\nSaturday");


        }

    }
    else
        printf("\nInvalid try again");

    printf("\nThank you..\nHave a great day");
    return 0;
}
