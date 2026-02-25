#include<stdio.h>
#include<ctype.h>
int main(){
    char a,b;
    printf("Enter the character: \n");
    a = getchar();
    printf("\n%c", toupper(a));

    fflush(stdin);
    printf("\nEnter the character:");
    getchar();

    b = getchar();
    if(b >= 'a' && b <= 'z')
        printf("%c", b-32);
    else
        printf("\nAlready capital.");
}