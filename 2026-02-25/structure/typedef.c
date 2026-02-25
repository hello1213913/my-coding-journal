#include<stdio.h>

typedef struct student{
    int rollno;
    char name[30];
    float marks;
}st;

int main(){
    
    st s = {1, "labi", 50};

    printf("\nRoll no: %d \tName = %s\tMarks : %f", s.rollno, s.name, s.marks);
}