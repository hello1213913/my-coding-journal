#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[20], i;
    FILE *fp;
    fp = fopen("random_integers.txt", "w");
    if(fp == NULL){
        printf("sorry.");
        exit(1);
    }

    for(i=0; i<20; i++){
        printf("Enter the number : ");
        scanf("%d", &a[i]);
        fprintf(fp, "%d  ", a[i]);
    }
    fclose(fp);
    printf("\nSucessfully transferred.");
    return 0;
}