#include<stdio.h>
#include<string.h>

int main(){
    char ch1[100], ch2[100];
    printf("Enter the words:\n");
    gets(ch1);
    printf("Enter the words : \n");
    gets(ch2);
    strcpy(ch2, ch1);
    puts(ch2);

}