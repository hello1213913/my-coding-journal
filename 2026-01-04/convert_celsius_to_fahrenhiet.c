#include<stdio.h>

int main(){
    float celsius, fahrenhiet;
    printf("\nEnter the value of centigrade!!");
    scanf("%f", &celsius);

    fahrenhiet = 1.8 *celsius +32;
    printf("\nThe value having (%.3f : C) \n\t is equal to : %.2f F", celsius, fahrenhiet);
    printf("\nThank YOUuu....");
    return 0;
}