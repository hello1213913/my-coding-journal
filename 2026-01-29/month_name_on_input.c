#include<stdio.h>

int main(){
    int num;
    while(1){
    printf("\nEnter the number from 1 to 12 to know the corresponding month");
    scanf("%d", &num);


    if(num>=1 && num<=12){
        switch(num){
            case 1: printf("\nJanuary");
                break;
            case 2: printf("\nFeburary");
                break;
            case 3: printf("\nMarch");
                break;
            case 4: printf("\nApril");
                break;
            case 5: printf("\nMay");
                break;
            case 6: printf("\nJune");
                break;
            case 7: printf("\nJuly");
                break;
            case 8: printf("\nAugust");
                break;
            case 9: printf("\nSeptember");
                break;
            case 10: printf("\nOctober");
                break;
            case 11: printf("\nNovember");
                break;
            case 12: printf("December");
        }

    }
    else{
        printf("Invalid!! Try by entering number from 1 to 12");
    }}
    printf("\nThank YOU \nHave a great day..\nBy Labi..");
    return 0;
}