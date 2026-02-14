/*program to read an integer greater than 100 and displays and appropriate message hether the integer is an
Armstrong number or not using recursive function */

#include<stdio.h>
#include<math.h>

int armstrong(int, int);
int how_many_times(int, int);
int main(){
    int m,n, yes_or_no;
    printf("\nEnter the number greater than 100 to find armstrong or not:");
    scanf("%d", &m);

    n = log10(m)+1;
    if(n < 3){
        printf("\nSorry try keeping greater than 100");
    }
    else{

    yes_or_no = armstrong(m,n);
    if(yes_or_no == m)
        printf("\nThat's armstrong number buddy!!");
    else
        printf("\nOpps!! Sorry that's not an armstrong number");
    printf("\nThank you\nHave a great day\nBy labi..");
    }
    return 0;
}

int armstrong(int m, int n){
    if(m==0)
        return 0;
    return(how_many_times(m, n)+armstrong((m/10), n));
}

int how_many_times(int m, int n){
    int i = n, value=1, done = m%10;
    while(i >= 1){
        i--;
        value = value * done; 
    }
    return value;
}