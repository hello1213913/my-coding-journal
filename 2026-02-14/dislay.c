//To print programming is fun five times from the recursive function..

#include<stdio.h>

void main (){
    static int i = 5;
    if(i >= 1){
        i--;
        printf("\nProgramming is fun.");
        main();
        
    }
}