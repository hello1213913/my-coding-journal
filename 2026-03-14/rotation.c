//the rotate version of the date: 2026-03-13 but without using the array.

#include<stdio.h>


void swap(int *p, int *q){
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

void shift(int ar[],int no, int k){
    int i,j = 0; 
    while( j != k){  //loop runs until the shift ones number.
        for(i=0; i<no; i++){    //each loop runs until the 1st element goes to the last.
            if(i == no - 1){        //breaks when the 1st element reaches the last.
                break;
            }
            swap(&ar[i], &ar[i+1]);
        }
        j++;
    }
}


int main(){
    int no,k, i;
    printf("Book the array : "); //array booking
    scanf("%d", &no);
    
    int array[no];  
    for(i=0; i<no; i++){        //entering the value in array
        printf("Enter the value : ");
        scanf("%d", &array[i]);
    }

    printf("Enter the value that you want to shift left : ");   
    scanf("%d", &k);    //entering value to shift by.

    printf("\nArray before : ");
    for(i=0; i<no; i++){            //before array printing the value
        printf("%d  ", array[i]);
    }

    shift(array, no, k);  //function call

    printf("\nArray after : ");
    for(i=0; i<no; i++){   //printing after the shift.
        printf("%d  ", array[i]);
    }
}   