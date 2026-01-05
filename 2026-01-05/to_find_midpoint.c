#include<stdio.h>

int main(){
    int a,b,x,y,mid_ax, mid_by;
    printf("Enter the value of ends points");
    printf("\nEnter the points of one ends(a,b)\n");
    scanf("%d %d", &a, &b);

    printf("\nEnter the another ends(x,y)\n");
    scanf("%d %d",&x, &y);

    mid_ax = (a+x)/2;
    mid_by = (b+y)/2;

    printf("\nThe midpoint value is (%d, %d)", mid_ax, mid_by);
    printf("\nThank YOU\nHave a great day\n\tBy Labi...");
}