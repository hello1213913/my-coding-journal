#include<stdio.h>

void main(){
    int random_num[5] ,i ,temp, pass, comparison;

    for(i= 0; i < 5; i++){
        printf("\nEnter the (%d)element :", i);
        scanf("%d", &random_num[i]);
    }

    for(pass = 0; pass < 5-1; pass++){

        for(comparison = 0; comparison < 5 - pass - 1; comparison++){
            if(random_num[comparison]> random_num[comparison+1]){
                temp = random_num[comparison];
                random_num[comparison] = random_num[comparison+1];
                random_num[comparison+1] = temp;
            }
        }
    }

    for(i = 0; i < 5; i++){
        printf("\n The sorted number are : \t %2d", random_num[i]);
    }
    printf("\nThank YOU \nBy labi..");
}