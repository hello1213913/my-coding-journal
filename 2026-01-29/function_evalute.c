#include<stdio.h>

int main(){
    int x, what_to,fx;
    printf("\nWelcome to the function.\tEnter\nto evalute the given function\n1: x(x-10)(x-15)\n2: (x-10)(x-15)(x-20)\n3: (x-15)(x-20)(30)\n4: (x-20)(x-30)(x-40)");
    scanf("%d", &what_to);


    switch(what_to){
        case 1: printf("\nYou can only enter the value of x (0 < x <= 10)");
                scanf("%d", &x);
                if(x >0 && x<=10){
                    fx = x*(x-10)*(x-15);
                    printf("\nThe answer is: %d", fx);
                }
                else{
                    printf("\nSorry try the value (0 < x <= 10)");}
                break;
        case 2: printf("\nYou can only enter the value of x(10 <= x <= 15)");
                scanf("%d", &x);
                if(x >= 10 && x <= 15){
                    fx = (x-10)*(x-15)*(x-20);
                    printf("\nThe answer is: %d", fx);
                }else
                    printf("\nInvalid try the value (10 <= x <= 15)");
                break;

        case 3: printf("\nYou can only enter the value of x ( 15 <x <= 20)");
                scanf("%d", &x);
                if(x > 15 && x <= 20){
                    fx = (x-15)*(x-20)*(x-30);
                    printf("\nAnswer is : %d", fx);
                }else
                    printf("\nSorry try  enter the value of x (15 <x <= 20)");
                break;

        case 4: printf("\nYou can only enter the value fo x ( 20 <x <= 30)");
                scanf("%d", &x);
                if(x > 20 && x <= 30){
                    fx = (x-20)*(x-30)*(x-40);
                    printf("\nAnswer is : %d", fx);
                }else
                    printf("\nSorry try  enter the value of x (20 <x <= 30)");
                break;
        default: printf("\nSorry only 1, 2, 3 and 4 are valid");
    }
    printf("\nThank YOu \nHave a great day\nBy labi..");
    return 0;

}