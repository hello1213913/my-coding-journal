//Program to find the sum of the series (1/n^2) up to n terms
#include<stdio.h>
 

float series(float);

int main(){
    int n;
    float value;
    printf("\nEnter the value:");
    scanf("%d", &n);
    value = series(n);
    printf("\nTHe value is : %f", value);
    printf("\nThank YOu \nBy labi..");
    return 0;
}
float series(float a){
    if(a == 1)
        return 1;

    return (1/(a*a) + series(a-1));
}