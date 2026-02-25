//Program that reverses the word recursively.

#include<stdio.h>

void reverse(char [],char[], int, int , int);

int main(){
    char name[40], result[40];
    int i=0;
    printf("\nenter the words : ");
    scanf("%s", name);
    while(name[i] != '\0'){
        i++;
    }
    reverse(name, result, i, 0, i);

    printf("\n%s\nThank YOu\nBy labi..", result);

}

void reverse(char name[], char result[], int n, int s, int e){
    if(s == n){
        result[n] = '\0';
        return ;
    }
    result[s] = name[e-1];
    reverse(name, result, n, s+1, e-1);

}