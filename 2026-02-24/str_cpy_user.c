//Copying string using user defined function.
#include<stdio.h>

void string_copy(char [], char[]);
int main(){
    char ch1[100], ch2[100];
    printf("Enter the words:\n");
    gets(ch1);
    printf("Enter the words: \n");
    gets(ch2);
    string_copy(ch1, ch2);
    printf("%s", ch1);
}

void string_copy(char c1[], char c2[]){
    int i=0;
    while(c2[i]!= '\0'){
        c1[i] = c2[i];
        i++;
    }
}