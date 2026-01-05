// to find the value of equivalent resistance of two resistors R1 and R2 in series or parallel

#include<stdio.h>
#include<string.h>

int R1, R2;
float equi_res;  //declaration of the resistors
char unkn[20];

void resistance_series();
void resistance_parallel();

int main(){
    printf("\n\t\tWelcome.\nHere you can find the value of equivalent resistance of R1 and R2");
    printf("\nEnter the value of R1 and R2 respectively.\n");

    scanf("%d %d", &R1, &R2);

    printf("\n\tEnter (series) if the resistors are in series \nEnter (parallel) if the resistors are in parallel\n");
    scanf("%s", unkn);

    if(strcmp(unkn, "series")==0){
        resistance_series();
    }else if(strcmp(unkn, "parallel")==0){
        resistance_parallel();
    }else{
        printf("\nInvalid word!! Please try again\n(series) for series\n(parallel) for parallel");
    }

    

}

void resistance_series(){
    equi_res = R1 + R2;
    printf("\nThe value of equivalent of resistance of resistors (%d) and (%d) is : %.1f", R1, R2, equi_res);
    printf("\nThank YOU\nHave a great day\n\tBy Labi...\n");

}
void resistance_parallel(){
    equi_res = (float)(R1 * R2) / (R1 + R2);
    printf("\nThe value of equivalent of resistance of resistors (%d) and (%d) is : %.2f", R1, R2, equi_res);
    printf("\nThank YOU\nHave a great day\n\tBy Labi...\n");
}