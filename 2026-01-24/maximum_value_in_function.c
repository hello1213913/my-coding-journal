//to find the maximum value in the given function.

#include<stdio.h>

int main(){
    int fx, max_value, trm_hav_max_value, min_value, trm_hav_min_value, x, low_lmt, high_lmt;
    fx = 4*x*x*x - 6*x*x + 10;
    printf("Enter from where you want to check (ie lower to higher)");
    scanf("%d %d", &low_lmt, &high_lmt);
    x = low_lmt;
    max_value = 4 *x*x*x -6*x*x + 10;
    min_value = max_value;
    trm_hav_max_value = x;
    trm_hav_min_value = x;
    
    for(int i = low_lmt; i <= high_lmt; i++){
        x = i;
        fx = 4*x*x*x - 6*x*x+ 10;
        
        if(fx > max_value){
            max_value = fx;
            trm_hav_max_value = i;
        }

        else if(fx < min_value){
            min_value = fx;
            trm_hav_min_value = i;
        }

    }

    
    printf("Max value: %d", max_value);
    printf("\n Term having the maximum value : %d", trm_hav_max_value);
    printf("\nMin value: %d", min_value);
    printf("\n Term having the maximum value : %d", trm_hav_min_value);

    printf("\nThank You \nHave a great day\n\tBy Labi.");
    return 0;
}
