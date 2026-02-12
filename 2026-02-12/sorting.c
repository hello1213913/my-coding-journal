//Here we are going to sort according to alphabetical order.

#include<stdio.h>
#include<string.h>
int main(){
    char name[100], *p_name, temp;
    int i, j;

    printf("\nEnter the word to arrange in alphabetical order.:");
    scanf("%s", name);
    int len = strlen(name);

    for(i = 0; i < len -1; i++){
        for(j = i+1; j < len; j++){
            if(name[i]>name[j]){
                temp = name[i];
                name[i] = name[j];
                name[j] = temp;

            }
        }
    }

    printf("\nTHe ordered alphabet is  \n\t %s \n", name);
    return 0;
    
}