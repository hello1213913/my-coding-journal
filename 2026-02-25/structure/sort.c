/*Program (a structure employee having members name, age and address is used. the array is passed to a funtion which sorts the array in descending order on the
basis of member age and display the sorted array from the main)*/

#include<stdio.h>

typedef struct employee{
    char name[40];
    int age;
    char address[40];
}emp;
emp temp;

void sort_age(emp[], int);
int main(){
    int n,i;
    printf("\nEnter the total no of the employes: ");
    scanf("%d", &n);

    emp p[n];
    for(i=0; i<n; i++){
        printf("\nName : ");
        scanf("%s", p[i].name);
        printf("\nAge : ");
        scanf("%d",  &p[i].age);
        printf("\nAddress : ");
        scanf("%s", p[i].address);
    }

    sort_age(p, n);

    for(i=0; i<n; i++){
        printf("\nName : %s\tAge: %d \t Address : %s", p[i].name, p[i].age, p[i].address);
    }
    return 0;
}

void sort_age(emp p[], int n){
    int i,j;
    for(i=0; i<n-1; i++){
        for(j=0; j<n-1-i; j++){
            if(p[j].age < p[j+1].age){
                temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
            }
        }
    }
}
