//program to allocate strings dynamically in an array and sort them into the alphabetical order in fuction and  display the sorted in the main.


#include<stdio.h>
#include<string.h>
void sortarray(char[][50], int);

int main(){
    int noof_words, i;
    printf("Enter the number of strings :\n");
    scanf("%d", &noof_words);
    getchar();

    char name[noof_words][50];
    for(i=0; i<noof_words; i++){
        printf("\nEnter the words:");
        gets(name[i]);
    }

    sortarray(name, noof_words);
    for(i=0; i< noof_words; i++){
        printf("\n%s", name[i]);
    }
    printf("\nThank you..\nBy labi..");
    return 0;
}

void sortarray(char s[][50], int n){
    int i,j;
    char temp[50];

    for(i=0; i< n-1; i++){
        for(j=0; j<n-i-1; j++){
            if(strcmp(s[j], s[j+1])>0){
                strcpy(temp, s[j]);
                strcpy(s[j], s[j+1]);
                strcpy(s[j+1], temp);
            }
        }
    }
}