#include<stdio.h>

int main(){
    char name[100], ch;
    int i=0;
    printf("Enter \n");
    do{

        ch = getchar();
        name[i] = ch;
        i++;
    }while(ch!= '\n');
    i = i-1;
    name[i] = '\0';
    printf("String : %s", name);
    return 0;
}