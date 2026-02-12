#include<stdio.h>

int main(){
 int a[100], how_man, i, *pa, highest;
 printf("\nenter how many digits will   you pick.");
 scanf("%d", &how_man);
 for(i= 0; i < how_man; i++){
    scanf("%d", &a[i]);
 }


 pa = &a[0];
 highest = *pa;
 i = 1;
 while(i <= how_man){
    if(*pa>highest){
        highest = *pa;
    }
    pa++;

    i++;
 }

 printf("\n The highest number is: %d", highest);
 printf("\nBY labi ..");
 return 0;




}