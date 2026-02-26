/*Program to compute any two instant hop distances in a format (feet: inches)using structure .  Build functions to add and subtract 
given hop distances and display the results in the main funtion.*/

#include<stdio.h>

typedef struct l{
    int feet, inches;
}length;

length add(length, length);

length subtract(length, length);


int main(){
    length a, b, temp_a, temp_b;
    printf("\nEnter feet and inches of length 1: ");
    scanf("%d %d", &a.feet, &a.inches);

    printf("\nEnter the feet and inches of d2: ");
    scanf("%d %d", &b.feet, &b.inches);

    temp_a = add(b, a);
    temp_b = subtract(b,a);

    printf("\nThe sum of the length are : %d feet %d inches", temp_a.feet, temp_a.inches);
    printf("\nThe difference of the length are : %d feet %d inches", temp_b.feet, temp_b.inches);
    printf("\nThank you..");

}

length add( length a, length b){
    length sum ;
    int x = 0;
    sum.inches = a.inches + b.inches;
    if(sum.inches >= 12){
        x = sum.inches / 12;
        sum.inches = sum.inches % 12;
    }
    sum.feet = x+ a.feet + b.feet;
    return sum;
}

length subtract(length a, length b){
    length sub;
    if(a.inches < b.inches){
        a.inches = a.inches +12;
        a.feet = a.feet -1;
    }
    sub.inches = a.inches - b.inches;
    sub.feet = a.feet - b.feet;
    return sub;
}


