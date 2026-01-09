#include<stdio.h>


int main(){
    int armst;
    printf("enter the no to check armstrong number or not..\n");

    scanf("%d", &armst);
    int backup_armst = armst; //taking backup to make sure at last during if statement
    
    int arms_no , arms_no_sum= 0;
    while(armst != 0){   //the statement helps to break the loop at last

        arms_no = armst % 10;
        arms_no = arms_no * arms_no * arms_no;
        armst = armst / 10;
        arms_no_sum = arms_no_sum + arms_no;
    }
    if(arms_no_sum == backup_armst){
        printf("%d is amstrong number\n", backup_armst);
        
    }else
        printf("%d is not amstrong number\n", backup_armst);

    printf("Thank YOu\nHave a great day\nBy Labi...");
    return 0;
    
}