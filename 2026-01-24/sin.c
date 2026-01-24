#include<stdio.h>
#include<math.h>

int main(){
    float term, sum=0;
    int factorial, x, sign = 1;
    printf("\nEnter the value of x");
    scanf("%d", &x);
    int n= 1;
    do{
        factorial = 1;
        for(int i = 1; i <= 2*n-1; i++){
            factorial *= i;
        }
        term = pow((float)x, 2*n-1)/ (float)factorial * sign;
        n++;
        sign *= -1;

        sum += term;
    }while(fabs(term) > pow(10, -6));
    printf("\nThe total sum : %f", sum);
    printf("Thank YOu \nHave a great day\n\tBy labi..");
    return 0;
    
}