#include<stdio.h>
#include<math.h>

int isPrime(int); //function prototype for checking prime or not.

int main(){
    int low, high, i, prime;
    printf("Enter the number : ");
    scanf("%d", &low);

    printf("Enter the number : ");
    scanf("%d", &high);

    if(low > high){    //if the user enter high number in place of low it gets exchanged.
        high = low + high;
        low = high - low;
        high = high - low;
    }

    printf("The prime number are : ");
    for(i=low; i<= high; i++){  //loop runs from the low to high.
        prime = isPrime(i);  //returns 1 if the number is prime and 0 if the number is not prime.

        if(prime == 1){
            printf("%d    ", i);      //prints prime no.
        }
    }
    return 0;
}

int isPrime(int a){
    int divider = 2;
    if(a <= 1)
        return 0; 
    if(a<= 3)
        return 1;
    do{  //loop where the number a gets divided upto number sqrt of its and return 1 if prime, 0 if not prime
        if(a%divider == 0){
            return 0;
        }
        divider ++;
    }while(divider <= (int)sqrt(a));
    return 1;
}
