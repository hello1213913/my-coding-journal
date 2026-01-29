#include<stdio.h>
#include<math.h>

float main(){
    float fx, i,t;
    for(i = 0; i <= 20; i=i+2){
        t = i;
        fx = exp(-0.1*t) * sin(0.5*t);
        printf("Result at time %.0f %f\n",t, fx);
    }
    printf("\nThank YOu \nHave a great day\nBy labi..");
    return 0;
}