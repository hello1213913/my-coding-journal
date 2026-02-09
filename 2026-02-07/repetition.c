#include<stdio.h>

int main(){
    char a[100];
    int count, i, j, k, n;
    int visited[100] = {0};


    printf("\nEnter how many char you will enter:");
    scanf("%d", &k);
    printf("\nEnter the char:");
    for(i = 0 ; i < k; i++){
        scanf(" %c", &a[i]);
        
        
    }
   

    

   for(i= 0; i < k; i++){
    if(visited[i]==1)
        continue;
    count = 1;
    for(j = i+1; j<k; j++){
        if(a[i]==a[j]){
        count++;
        visited[j] = 1;
        }

    }

    printf("\nThe char %c is repeated upto: %d", a[i], count);
   }

   printf("Thank YOu\nBy labi..");

   return 0;
}