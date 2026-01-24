#include<stdio.h>
#include<math.h>

int  main(){
    double term, sum=1;
    int x, factorial, n=1;
    printf("Enter the value of x");
    scanf("%d", &x);

    do{
        factorial = 1;
        for(int i=1; i <= n; i++){
            factorial *= i;
        }
        term = pow((float)x, n) / (float)factorial;
        n++;

        sum += term;
    }while(fabs(term)>= pow(10, -6));

    printf("\nSum : %f", sum);
    printf("\nThank you\nHave a great day\n\tBy labi..");

    return 0;
}