#include<stdio.h>
#define PI 3.1415



void area_circumference_of_circle();
void area_volume_of_sphere();

int main(){
    area_circumference_of_circle();
    area_volume_of_sphere();
    return 0;
}

void area_circumference_of_circle(){
    float radius, area, circumfr;
    printf("\nEnter the value of radius of circle in (cm)\nTo find the area\n\tTo find the circumference");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumfr = 2 * PI * radius;
    
    printf("The circumference of circle is %.2f (cm)\nThe area of circle is %.2f(cm square) \n", circumfr, area);
}

void area_volume_of_sphere(){
    float radius, area, volume;
    printf("\nEnter the radius of sphere in (cm)\nTo find the value of area of sphere\n\tTo find the volume of sphere");
    scanf("%f", &radius);

    area = 4 * PI * radius* radius;
    volume = (4./3) * PI * radius* radius* radius;

    printf("\nThe area of sphere is :%.2f(cm square)\n\n The volume of sphere is :%.2f(cm cube)", area, volume);
}