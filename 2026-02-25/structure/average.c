/*Program that has a float type of array. the program reads name, age, roll number, section and marks of six subjects
of a student and dispalys the average marks of the subjects as well as other data*/

#include<stdio.h>

typedef struct student{
    char name[50];
    int age;
    int roll;
    char sec;
    float marks[6];
}std;

void main(){
    std s;
    int i, sum =0;float average;

    printf("\nEnte the student name: ");
    scanf("%s", s.name);

    printf("\nEnter the age of the student: ");
    scanf("%d", &s.age);

    printf("\nEnter the roll no the students: ");
    scanf("%d", &s.roll);

    printf("\nEnter the section: ");
    getchar();
    s.sec = getchar();

    for(i=0; i<6; i++){
        printf("\nEnter the marks of %i subject: ", i+1);
        scanf("%f", &s.marks[i]);
        sum = sum+s.marks[i];
    }

    average = sum/(float)6;
    printf("\nName = %s \nRoll no: %d\nAge = %d\nSection : %c\nAverage marks = %f", s.name, s.roll, s.age, s.sec, average);
    
    printf("\nThank you..");
}