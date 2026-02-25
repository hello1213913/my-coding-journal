/*Program to convert lower case characters to upper case and vice cerrsa in a strin entered by the user and to find the number of words in the string .*/

#include<stdio.h>
#include<ctype.h>

int main(){
    char name[205], ch;
    int i=0,j, count =0;
    printf("\nEnter the sentence at last with *.");
   
    do{
         ch = getchar();
        if(ch == '*')
            name[i] = '\0';
        else{
            name[i] = ch;
            if(ch == ' '){
                count ++;
            }
        }
        i++;

    }while(ch!= '*');

    for(j=0; j<i; j++){
        if(islower(name[j])){
            name[j] = toupper(name[j]);
        }
        else
            name[j] = tolower(name[j]);
    }

    for(j=0; j<i; j++){
        printf("%c", name[j]);
    }
    printf("\nThe number of words are : %d", count+1);
    printf("\nthank YOu..");


}