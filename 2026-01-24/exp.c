#include<stdio.h>
#include<math.h>


int main(){
    float sum = 1, term,x;
    int n=1,factorial;

    printf("Enter the value of x");
    scanf("%f", &x);

    do{
        factorial = 1;
        for(int i =1 ;i<=n; i++){
            factorial *= i;
        }
        term = pow(x,n)/(float)factorial;
        n++;
        sum += term;


    }while (fabs(term) >= 0.0000001);

    printf("\nThe total sum of the exponential series of x having value %f is %f", x, sum);
    printf("\nThank you \nHave a great day\n\tby labi..");
    return 0;
}