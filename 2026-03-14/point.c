#include<stdio.h>
int totalsum(int *arr, int size){
    int sum=0, *p;
    for(p = arr; p < arr + size; p++){
        sum += *p;
    }
    return sum;
}

void print(int *arry, int size){
    int *i;
    for(i=arry; i< arry + size; i++){
        printf("%d  ", *i);
    }
}

void MaxMin(int *arry, int size, int*min, int *max){
    int *i; 
    *min = *arry; *max = *arry;
    for(i=arry; i< arry + size ;i++){
        if(*i > *max) *max = *i;
        if(*i < *min) *min = *i; 
    }
}
int main(){
    int array[]={9,7,5,3,1,2,4,6,8,0}, sum=0, min, max, i;
    print(array, 10);   //making minimum and maximum as the first element of the array.
    sum = totalsum(array, 10);
    printf("\nThe sum is : %d", sum);
    MaxMin(array, 10, &min, &max);

    printf("\nThe maximun value is : %d\nThe minimum value is : %d", min, max);
    
    return 0;
}