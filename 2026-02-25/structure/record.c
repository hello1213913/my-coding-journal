//program to input and output the name roll no and marks.

#include<stdio.h>

struct students{
    int rollno;
    char name[40];
    float marks;
};

int main(){
    int i,n;
    printf("\nEnter how many record are you going to store.:");
    scanf("%d", &n);
    struct students s[n];

    for(i=0; i<n; i++){
        printf("\nEnter the roll no:");
        scanf("%d", &s[i].rollno);

        printf("\nEnter the name:");
        scanf("%s", s[i].name);

        printf("\nEnter the marks");
        scanf("%f", &s[i].marks);
    }

    for(i=0; i<n; i++){
        printf("\nRoll no: %d\tName: %s\tMarks:  %f", s[i].rollno, s[i].name, s[i].marks);

    }
    printf("\nThank you\nBy labi..");
}