#include<stdio.h>

struct students{
    int rollno;
    char name[20];
    float marks;
}s={3};

int main(){
    struct students s1 = { 1, "Labi", 75};
    struct students s2 = {2, "Unknown", 77};

    printf("\nThe information of students are:");
    printf("\nRoll no: %d  Name : %s  Marks: %f", s1.rollno, s1.name, s1.marks);
    printf("\nRoll no: %d\tName : %s\tMarks: %f", s2.rollno, s2.name, s2.marks);
    printf("\nRoll no: %d", s.rollno);
    return 0;
}