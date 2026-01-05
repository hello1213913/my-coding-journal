// to find the value of function when x is given..

#include<stdio.h>

int function, x;
void function_fx();

int main(){
    

    printf("Enter the value of x ");
    scanf("%d", &x);
    function_fx();
    printf("\nThank YOU \nHave a great day>>\n\t\tBy Labi..");
}

void function_fx(){
    function = x*x + 3;

    printf("The value of function fx  is : %d\nWhen the value of x:(%d)", function, x);

}