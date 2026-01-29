/*Program to calculate the compound interest using the relation A = p*pow((1+r/n), n*t), Where p = principal, r = rate, t= time, 
n = number of compounding per  year, A = total amound (p + compound interest)*/

#include<stdio.h>
#include<math.h>

int main(){
    int t,p,r,n;
    float A,CI;

    printf("Enter the value of ");
    printf("\nPrincipal");
    scanf("%d", &p);
    printf("\nrate :");
    scanf("%d", &r);
    printf("\ntime :");
    scanf("%d", &t);
    printf("\nnumber of compounding per year :");
    scanf("%d", &n);

    A = p*pow((1+(r/100.0)/n), n*t);
    CI = A - p;
    printf("\nThe value of compound interest is : %f", CI);
    printf("\nTotal amount of interest : %f", A);
    printf("\nThank you \nhave a great day\nBy labi..");
    return 0;
}