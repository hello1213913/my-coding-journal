#include<stdio.h>

struct student{
    int rollno;
    char name[30];
    float marks;
};

int main(){
    struct student s = {1, "Labi", 50};
    struct student *sp = &s;
    printf("\nRoll no : %d\tName : %s\tmarks : %f", sp->rollno, (*sp).name, sp->marks);
    return 0;

}