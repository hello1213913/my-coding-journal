#include<stdio.h>

void swap(int *p, int *q){
    int temp;
    *p = *q;
}
int main(){
    int n,k;
    printf("Enter the number of array you want to book : ");
    scanf("%d", &n);

    int rotate[n],i;
    for(i=0; i<n; i++){
        printf("Enter the number : ");
        scanf("%d", &rotate[i]);
    }
    printf("Before : ");
    for(i=0; i<n; i++){
        printf("%d  ", rotate[i]);
    }
    
    printf("Enter number you want to shift : ");
    scanf("%d", &k);

    int temp[k],j;
    for(i=0; i<k; i++){
        temp[i] = rotate[i];
    }
    for(i=0; i<n-k; i++){
        
        swap(&rotate[i], &rotate[i+k]);
    }

    for(i=n-k, j=0; i<n; i++, j++){
        swap(&rotate[i], &temp[j]);
    }
    printf("\nAfter : ");
    for(i=0; i<n; i++){
        printf("%d  ", rotate[i]);
    }
}