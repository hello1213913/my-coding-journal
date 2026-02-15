//A program that takes two integers and  finds the hcf and lcm and dispaly them 
#include<stdio.h>

int hcf_cal(int, int);

int main(){
    int val_1, val_2, calculate,what, lcm;

    printf("\nEnter the value 1:");
    scanf("%d", &val_1);
    printf("\nEnter the value 2:");
    scanf("%d", &val_2);

    calculate = hcf_cal(val_1, val_2);
    lcm = (val_1*val_2)/ calculate;
    printf("\nWhat do you want to calulate:\nEnter \n1 : HCF \n2 : LCM\n3 : For both");
    scanf("%d", &what);
    switch(what){
        case 1: printf("\nThe hcf of %d and %d is : %d", val_1, val_2, calculate);
                break;
        case 2: printf("\nThe LCM of %d and %d is : %d", val_1, val_2, lcm);
                break;
        case 3: printf("\nThe hcf of %d and %d is : %d", val_1, val_2, calculate);
                printf("\nThe LCM of %d and %d is : %d", val_1, val_2, lcm);
                break;
        default: printf("\nOpps sorry!! Invalid.. Try agian.:\nYou enter invlaid number in what do you want to do.");
    }

    printf("\nThank you\n By labi..");
    return 0;
}

int hcf_cal(int m, int n){
    if(n==0)
        return m;
    return (hcf_cal(n, m%n));
}