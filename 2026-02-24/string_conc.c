//to concatinate the string

#include<stdio.h>
#include<string.h>

int main(){
    char name1[100], name2[100];
    printf("Enter the words:\n");
    gets(name1);
    printf("Enter the words:\n");
    gets(name2);
    strcat(name1, name2);
    printf("\nThe concatinated string is : %s", name1);
    printf("\nThank YOu..");
    return 0;

}