#include<stdio.h>
#include<stdlib.h>
int sum(int a){
    if(a==0)
        return 0;
    return((a%10) + sum( a/10));
}

void digit_sort(int a[], int n){
    int i, j, pre, post, temp;
    for(i = 0; i<20-1; i++){

        
        for(j=0; j<20-i-1; j++){
            pre = sum(a[j]);
        post = sum(a[j+1]);
            if(pre > post){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main(){
    FILE *fp, *fsort;
    int ar[20], i;
    fp = fopen("random_integers.txt", "r");
    fsort = fopen("sorted_digits.txt", "w");
    if(fp == NULL || fsort == NULL){
        printf("Sorry.");
        exit(1);
    }
    for(i = 0; i<20; i++){
        fscanf(fp, "%d  ", &ar[i]);
    }
    digit_sort(ar, 20);

    for(i=0; i<20; i++){
        fprintf(fsort, "%d  ", ar[i]);
    }

    fclose(fp);
    fclose(fsort);
    return 0;

}