//program to find the standard devitation of the array members of 8.

#include<stdio.h>
#include<math.h>

float standard_deviation(int[], int);
int main(){
    int val[8],i;
    
    for(i=0; i< 8; i++){
        printf("\nEnter the value:");
        scanf("%d", &val[i]);
    }
    
    printf("\nThe standard deviation is : %f\nThank you\nBy labi..", standard_deviation(val, 8));
}

float standard_deviation(int val[], int n){
    int sum=0, mean ,i,sd=0;
    for(i=0; i < 8; i++){
        sum += val[i];
    }
    mean = sum/n;
    for(i=0; i<8; i++){
        sd += (val[i]-mean)*(val[i]-mean);
    }
    
    return (sqrt(sd/n));
}
