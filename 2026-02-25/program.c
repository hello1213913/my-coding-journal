/*Program that reads positive numberes until user enter  "no" and 
then sum the numbers divisible by 4 that lie between the range of 10 and 50 and finally display the count and average value.*/

#include<stdio.h>
#include<string.h>


int main(){
    char ch[4];
    int sum=0, temp, count = 0;
    while(1){
        printf("\nEnter the number:");
        scanf("%s", ch);
        if(strcmp(ch,"no") == 0)
            break;
        temp = atoi(ch);
        
        if(temp >= 10 && temp <=50 && temp%4 == 0){
            sum = sum+ temp;
            count ++;
        }


    }
    printf("\nThe numbers are %d and the average is %f", count, (sum)/(float)count);
    printf("\nThank you.");
    return 0;
}