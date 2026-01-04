// to find the volume of a room when height width and length is given.

#include<stdio.h>


int main(){
    float volume, height, width, length;

    printf("Enter the valume of (length, width, height)\n");
    scanf("%f %f %f", &length, &width, &height);

    volume = length * width * height;

    printf("The volume having \nlength :%.2f\nwidth :%.2f\nheight :%.2f\n\tis %.2f ", length, width, height, volume);
    printf("\nThank youU>>");
    return 0;
}