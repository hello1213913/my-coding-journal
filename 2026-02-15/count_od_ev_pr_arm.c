//Program to count no of even odd prime and armstrong..
/*0: odd
1: even
2: prime
3: armstrong*/
#include<stdio.h>
#include<math.h>
void compute(int[] ,int);
int odd_even_chek(int);
int armstrong_check(int);
int prime_check(int);

void main(){
    int n,i;
    printf("\nBook the value for the array.");
    scanf("%d", &n);

    int array_check[n];
    for(i = 0; i < n; i++){
        printf("\nEnter (%d)th value:", i);
        scanf("%d", &array_check[i]);
    }
    compute(array_check, n);

    printf("\nThank you\nBy labi..");

}

void compute(int array[], int n){
    int prime, prime_count=0,even_or_od,even_count=0,odd_count=0, armstrong, armstrong_count=0, i;

    for(i= 0; i<n; i++){
        even_or_od = odd_even_chek(array[i]);
        armstrong = armstrong_check(array[i]);
        prime = prime_check(array[i]);

        if(even_or_od == 1)
            even_count ++;
        if(even_or_od == 0)
            odd_count ++;
        if(prime == 2)
            prime_count++;
        if(armstrong == 3)
            armstrong_count++;


    }
    printf("\nThe even numbers are : %d", even_count);
    printf("\nThe odd numbers are : %d", odd_count);
    printf("\nThe armstrong numbers are : %d", armstrong_count);
    printf("\nThe prime numbers are : %d", prime_count);
}

int odd_even_chek(int i){
    if(i%2==0)
        return 1;
    else
        return 0;
}
int armstrong_check(int i){
    int back_up_i = i;
    int digit = log10(i)+1;
    int remainder,sum =0;
    while(i!=0){
        remainder = i%10;
        sum = pow(remainder,digit)+sum;
        i = i/10;
}
    if(back_up_i == sum)
        return 3;
    else
        return 99;
}

int prime_check(int a){
    if(a<=1) 
        return  99;
    if(a ==2 || a ==3)
        return 2;

    for(int i = 2; i <= sqrt(a); i++){
        if(a%i == 0)
            return 99;
            
    }
    return 2;
}