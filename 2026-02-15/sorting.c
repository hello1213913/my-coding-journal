//Program that sorts the array .
#include<stdio.h>
void display_array(int [], int);
void sorting_array(int [], int);

void main(){
    int marks[5], i, j;
    for(i = 0; i<5; i++){
        printf("\nMarks(%d)", i);
        scanf("%d", &marks[i]);
    }
    sorting_array(marks, 5);
    printf("\nThe sorted are :");
    display_array(marks, 5);
    printf("\nThank you\nHave a great day\nBy labi..");
    
}

void sorting_array(int marks[], int n){
    int i,j, temp;
    for(i = 0; i< 5; i++){
        for(j = i+1; j <n; j++){
            if(marks[i] > marks[j]){
                    temp = marks[i];
                    marks[i] = marks[j];
                    marks[j] = temp;
            }
        }
    }
}

void display_array(int marks[], int i){
    for(i = 0; i<5; i++){
        printf("\n%d", marks[i]);
    }
}