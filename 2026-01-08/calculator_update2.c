#include<stdio.h>
#include<math.h>
#include<string.h>
#define Pi 3.1415



float value1, value2; //declaration of variables. 

//function of addition
void addition(); 

//function of subtraction
void subtraction();

//function of multiply
void multiply();

//function of dividion
void division();

//function of remain
void remain();

//function of trigonemetry
void trigonometry();

//function of formulas
void tri_formulas();

// function that check whether the number is prime number or not
void prime_no_checker();

// function that generates the prime number between two numbers.
void prime_no_generation();


int main(){
    printf( "\n\nWelcome to the world of small calculator..\nHere you can find (addition, subtraction, multiplication, division, remainder, trigonomerty)");
   
    while (1){
    char what_to[20];

    // value needed for calculation
    printf("\nEnter the two value ");
    scanf("%f %f", &value1, &value2);

    //guide for the user what to do..
    printf("\nType\n\t(add) for addition\n\t(subtract) for subtraction\n\t(multiply) for multiplicatio\n\t(divide) for division\n\t(remain) for remainder\n\t(tri) for trigonometry\n\t(formula) for basic trigonometric formula\n\t(check_prime) for checking prime number\n\t(prime_generation) for generation prime number betwen those number\n\t to find it...");
    scanf("%s", what_to);

    //statement that runs what user whats to do 
    if((strcmp(what_to , "add"))==0){
        addition();
    }else if(strcmp(what_to, "subtract")==0){
        subtraction();
    }else if((strcmp(what_to, "multiply"))==0){
        multiply();
    }else if((strcmp(what_to, "divide"))==0){
        division();
    }else if((strcmp(what_to, "remain"))==0){
        remain();
    }else if((strcmp(what_to, "tri"))==0){
        trigonometry();
    }else if((strcmp(what_to, "formula"))==0){
        tri_formulas();
    }else if((strcmp(what_to, "check_prime"))== 0){
        prime_no_checker();
    }else if((strcmp(what_to, "prime_generation"))== 0){
        prime_no_generation();
    }
    else{
        printf("\n Invalid word...\tTry again..");
    }

    printf("\nThank You\nHave a great day\n\tBy Labi...");
    

}
}

void addition(){
    printf("\nThe sum of (%.3f) and (%.3f) is: %.3f", value1, value2, value1+value2);
}

void subtraction(){
    int first_or_second;
    printf("\nWhat do you want to find (value1 - value2) or (value2- value1)");
    printf("\nEnter \n 1 : (value1 - value2(%.3f - %.3f))\n 2 : (value2 - value1(%.3f - %.3f))", value1,value2, value2, value1);
    scanf("%d", &first_or_second);


    switch(first_or_second){
        case 1:
            printf("\nThe subtraction of (%.3f - %.3f) is: %.3f", value1, value2, value1-value2);
            break;
        case 2:
            float subt = value2 - value1;
            printf("\nThe subtraction of (%.3f - %.3f) is: %.3f", value2, value1, value2-value1);
            break;
        default:
            printf("\nInvalid syntax. \tTry again..");
    }
}

void multiply(){
    float mul = value1*value2;
    printf("\nThe multiplication of %.3f and %.3f is: %.3f", value1, value2, mul);
}

void division(){
    float div;
    if(value2 == 0){
        printf("\nInfinite.. \n\tAs the denominator value is 0\nTry entering other than 0");
    }else{
        div = value1/value2;
        printf("\nThe division of %.3f by %.3f is : %.3f", value1, value2, div);
    }
} 

void remain(){
    int div_what;
    printf("\nWould you like to find remainder as division of value1(%.3f) by value2(%.3f) or value2(%.3f) by value1(%.3f)", value1,value2,value2,value1);
    printf("\nEnter the rounded off values");
    printf("\nEnter \n1 : for(value1(%.3f)/value2(%.3f)\n2 : for value2(%.3f)/value1(%.3f))", value1,value2,value2,value1);

    scanf("%d", &div_what);
    int v1 = (int)value1;
    int v2 = (int)value2;

    switch(div_what){
        case 1:
            
            if(v2==0){
                printf("\nNot possible to divide by 0");
            }else{printf("\nThe remainder when %d is divided by %d is : %d", v1, v2, v1 % v2);
            }
            break;
    
        case 2:
            if(v1==0){printf("\nSyntax error");
            }else{printf("\nThe remainder when %d is divided by %d is : %d", v2, v1, v2%v1);
            }
            break;   
        default:
            printf("\nSorry wrong syntax.");
            break;
    }
}

void trigonometry(){
    int tri_what;
    printf("\nEnter \n1 : sin\n2:cos \n3 : tan\n4 : cosec\n5 : sec\n6 : cot\n");
    scanf("%d", &tri_what);

    switch(tri_what){
        case 1:
            printf("\nThe sin value of %.3f is: %f\nand %.3f is: %f ", value1, sin(value1 ), value2, sin(value2));
            break;
        case 2:
            printf("\nThe cos value of %.3f is: %f\nand %.3f is: %f ", value1, cos(value1), value2, cos(value2));
            break;
        case 3:
            printf("\nThe tan value of %.3f is: %f\nand %.3f is: %f ", value1, tan(value1), value2, tan(value2));
            break;
        case 4:
            printf("\nThe cosec value of %.3f is: %f\nand %.3f is: %f ", value1, tan(value1), value2, 1/(sin(value2)));
            break;
        case 5:
            printf("\nThe sec value of %.3f is: %f\nand %.3f is: %f ", value1, tan(value1), value2, 1/(cos(value2)));
            break;
        case 6:
            printf("\nThe cot value of %.3f is: %f\nand %.3f is: %f ", value1, tan(value1), value2, 1/(tan(value2)));
            break;
        default:
            printf("\nSyntax error...");
    }
printf("\nOutput Values are in radian");
}

void tri_formulas(){
    printf("The simple formulas book is \nsin^2 x + cos^2 x = 1\ncosec^2 x - cot^2 x = 1\n sec^2 x - tan^2 x = 1\n");
}

void prime_no_checker(){
    int prime_or_not, flag;
    printf("Enter the number to check the no is prime or not \n");
    scanf("%d", &prime_or_not);

    flag == 1; //to check the number is even or odd after the loop

    for(int i = 2; i <= (int)sqrt(prime_or_not); i++){
        if(prime_or_not%i == 0){
            flag = 0;
            break;
        }
    }
    if(flag == 0){
        printf("The given number(%d) is not a prime number.\n", prime_or_not);
    }else{
        printf("The given number(%d) is a prime number.\n", prime_or_not);
    }
}

void prime_no_generation(){
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
}
