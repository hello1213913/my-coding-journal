#include<stdio.h>


int stringlength(char[]);

int main(){
    char name[100];
    int length;
    printf("Enter something : \n");
    gets(name);
    length = stringlength(name);
    printf("The length of the string(%s) is : %d", name, length);
    return 0;
}

int stringlength(char na[]){
    int i;
    for(i=0; na[i]!= '\0'; i++);
    return i;
}