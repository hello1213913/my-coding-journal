//Program that shows a structure definition having another structure as a member.

#include<stdio.h>

typedef struct info{
    char name[50];
    int age;
}ifo;

typedef struct student{
    int roll;
    char sec;
    ifo p;
}st;

void main(){
    st s1;
    printf("\nEnter the student roll no: ");
    scanf("%d", &s1.roll);

    printf("\nEnter the section:");
    getchar();
    scanf("%c", &s1.sec);

    printf("\nEnter the student name :");
    scanf("%s", s1.p.name);
    printf("\nEnter the age of the student: ");
    scanf("%d", &s1.p.age);

    printf("\nThe information of the student is \nName = %s\tAge = %d\tRoll no : %d\tSection : %c", s1.p.name, s1.p.age, s1.roll, s1.sec);
    printf("\nThank you..");
}