#include<stdio.h>
#include<math.h>

int main(){
    float a,b,c,discriminant,real,imaginary, r1, r2;
    int switchexpression;

    printf("\nEnter the value of a,b,c");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b*b-4*a*c;

    if(discriminant == 0)
        switchexpression = 1;

    else if(discriminant < 0)
        switchexpression = 2;
    else
        switchexpression = 3;

    switch(switchexpression){
        case 1: r1 = r2 = -b/2*a;
                printf("\nRoots are real and equal which are %f , %f", r1, r2);
                break;
        case 2: real = -b/2*a;
                imaginary = sqrt(4*a*c - b*b);
                printf("\nRoots are imaginary %f + i(%f)", real, imaginary);
                break;
        case 3: r1 = (-b + sqrt(discriminant))/2*a;
                r2 = (-b - sqrt(discriminant))/2*a;
                printf("\nRoots are real and unequal %f, %f", r1, r2);
                break;
    }

    printf("\nThank YOu \nHave a great day\nBy labi");
    return 0;
}