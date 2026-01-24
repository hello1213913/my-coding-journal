#include<stdio.h>
#include<math.h>

int main(){
    int x, sign = -1;
    float term,  sum = 1;
    
    printf("Enter the value of x");
    scanf("%d", &x);

    int n = 1;
    do{
        int factorial=1;
        for(int i = 1; i <= 2*n; i++){
            factorial *= i;
        }
        term = pow((float)x, (2*n))/(float)factorial * sign;
        sign *= -1;
        n++;

        sum = sum +  term;
    }while(fabs(term) > pow(10, -6));
    printf("Sum : %f", sum);
    return 0;
    
}