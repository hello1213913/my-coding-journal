/*define a structure to hold the roll no of a student and marks obtained by him 
 in 5 subjects.Declare an aray to hold the data of 20 students.Pass this to a function that displays 
 the marks of student who has highest total marks*/
#include<stdio.h>
 
typedef struct student{
    int rollno;
    int marks[5];
}stu;

void display(stu temp[20]){
    int total=0,highest,sum, i,j ;

    for(i=0; i<5; i++){
        total += temp[0].marks[i];  // calculate the total of the student first.
    }
    highest = 0;

    for(i=1; i<20; i++){
        sum = 0;
        for(j=0; j<5; j++){
            sum += temp[i].marks[j];
        }
        if(total < sum){
            total = sum;
            highest = i;
        }
    }

    printf("\nTHe highest is obtained by roll no : %d\nThe marks are : ", temp[highest].rollno);
    for(i=0; i<5; i++){
        printf("\n Subject %d : %d", i+1, temp[highest].marks[i]);
    }





}

int main(){
    stu s[20];
    int i,j;

    for(i=0; i<20; i++){
        printf("\nEnter the roll no of the %d student : ", i+1);
        scanf("%d", &s[i].rollno);
        for(j=0; j<5; j++){
            printf("Enter the marks of %d subject of %d student: ", j+1, i+1);
            scanf("%d", &s[i].marks[j]);
        }
    }
    display(s);
    return 0;
}

