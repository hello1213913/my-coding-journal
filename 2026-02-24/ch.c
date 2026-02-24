#include<stdio.h>
#include<stdlib.h>

void main(){
    char name,ch[5];
    int n,x;
    printf("Enter the character: \n");
    name = getchar();
    n = name - '0';
    printf("%d\n", n);

    printf("Enter the character:\n");
    scanf("%s", ch);
    x = atoi(ch);
    printf("%d", x);
}