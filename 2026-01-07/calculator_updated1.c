// It is the calculator where you can find addition , subtraction, multiplication, division, remainder, trigonometic  between two inputs
#include<stdio.h>
#include<math.h>
#include<string.h>
#define Pi 3.1415



float value1, value2; //declaration of variables. 

void addition();
void subtraction();
void multiply();
void division();
void remain();
void trigonometry();
void tri_formulas();


int main(){
    printf( "\n\nWelcome to the world of small calculator..\nHere you can find (addition, subtraction, multiplication, division, remainder, trigonomerty)");
   
    while (1){
    char what_to[20];
    
    printf("\nEnter the two value ");
    scanf("%f %f", &value1, &value2);
    
    printf("\nType\n\t(add) for addition\n\t(subtract) for subtraction\n\t(multiply) for multiplicatio\n\t(divide) for division\n\t(remain) for remainder\n\t(tri) for trigonometry\n\t(formula) for basic trigonometric formula\n\t to find it...");
    scanf("%s", what_to);

    
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