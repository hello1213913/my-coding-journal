// to check prime no from the no(m to n)

#include<stdio.h>
#include<math.h>

int main(){
    int start_prm_no, end_prm_no;
    printf("Enter the number to generate prime no between them.\n");
    printf("Enter number\n");
    scanf("%d", &start_prm_no);
    printf("to\n");
    scanf("%d", &end_prm_no);

    int original_start = start_prm_no; //declaring for later printing
    int original_end = end_prm_no;

    // So will be easier to print out prime numberonly and not a prime number only
    int prime_or_nt_prime_lst;
    printf("Type\n\t1 : for list of prime number\n\t2: for list of not a prime number");
    scanf("%d", &prime_or_nt_prime_lst);


    // IF the 1st start number is large the loop fails to inorder to get our perfect answer  and loop works correctly.
    if(start_prm_no > end_prm_no){
        int extra;
        extra = start_prm_no;
        start_prm_no = end_prm_no;
        end_prm_no = extra;
    }
    // just to make output more clear and impressive looks
    if(prime_or_nt_prime_lst == 1){
        printf("The list of prime numbers are : \n");
    }else if(prime_or_nt_prime_lst == 2){
        printf("The list of non prime numbers are : \n");
    }else{
        printf("Sorry invalid input\n1(for prime no) and 2(for non prime no)\n");
    }

    //pr means prime no and npr means nonprime number
    int sum_npr = 0 , sum_pr = 0;  


    // Starting of loop 
    for(start_prm_no; start_prm_no <= end_prm_no; start_prm_no++){
        int flag = 1; 
        
        //Checking the given number in each step increasing is prime or not
        for(int i = 2; i <= (int)sqrt(start_prm_no); i++){
            if(start_prm_no%i == 0){
                flag = 0;
                break;
            }

        }
        //Just to make more clear output
        if(prime_or_nt_prime_lst == 1){
            if(flag == 1){
                printf("%d\n", start_prm_no);
                sum_pr = sum_pr+1;
                sum_pr++;
            }
        }else if(prime_or_nt_prime_lst == 2){
            if(flag == 0){
                printf("%d\n", start_prm_no);
                sum_npr = sum_npr + 1;
                sum_npr ++ ;
            }
        }


        
    }
    switch(prime_or_nt_prime_lst){
        case 1:
            printf("\nTotal no of prime numbers in (%d-%d) is: %d",original_start, original_end, sum_pr);
            break;
        case 2:
            printf("\nTotal no non prime numbers in (%d-%d) is : %d", original_start, original_end, sum_npr);
            break;
    }

    printf("\nThank You\n Have a great day\nBy Labi...\n");

    return 0;
    
}