/*Program to manipulate complex number using structures . The structure should contain real and imaginary part. Write seperate functions to add and subtract 
complex numbers*/

#include<stdio.h>

typedef struct complex{
    float real;
    float img;
}cmp;

void adder(cmp, cmp);
void subtracter(cmp, cmp);

void main(){
    cmp n1, n2;
    printf("\nReal part of complex no 1: ");
    scanf("%f", &n1.real);
    printf("\nImaginary part of complex no 1: ");
    scanf("%f", &n1.img);
    printf("\nReal part of complex no 2: ");
    scanf("%f", &n2.real);
    printf("\nImaginary part of complex no 2: ");
    scanf("%f", &n2.img);

    adder(n1, n2);
    subtracter(n1, n2);
    printf("\nThank you..");
}

void adder(cmp a, cmp b){
    float x, y;
    x = a.real+ b.real;
    y = a.img + b.img;
    printf("\nThe sum of complex no is : %f + i(%f)", x, y);

}

void subtracter(cmp a, cmp b){
    float x, y;
    x = a.real - b.real;
    y = a.img - b.img;
    printf("\nThe subtraction of complex no is  : %f + i(%f)", x, y);
}