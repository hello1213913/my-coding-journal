#include<stdio.h>

int remove_(int[],int[], int);

int main(){
    int i,j, num;
    printf("\nEnter how many numbers you want to enter:");
    scanf("%d", &num);

    int value[num], result[num];
    for(i=0; i<num; i++){
        printf("\nEnter(%d) number:", (i+1));
        scanf("%d", &value[i]);
    }

    j = remove_(value, result, num);
    printf("\nThe numbers without repetition is : \n");
    
    for(i=0; i<j; i++){
        printf("%d   ", result[i]);
    }

    return 0;
}

int remove_(int val[], int result[], int num){
    int i,j, va,k=0, repeat;
    for(i=0; i<num; i++){
        repeat = 0;
        for(j=0; j<=k; j++){
            
            if(val[i]==result[j]){
                repeat = 1;
                break;
            }}
        if(repeat == 0){
                result[k] = val[i];
                k++;
            }

        
    }
    return (k);
}
