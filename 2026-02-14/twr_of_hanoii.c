#include<stdio.h>
void movedisk(int , char, char, char);

int main(){
    int n;
    printf("\nEnter the no of disks:");
    scanf("%d", &n);
    movedisk(n,'O', 'D', 'I');
    printf("\nThank you\nBy labi..");
}

void movedisk(int n, char origin, char destination, char intermediate){
    if(n>0){
        movedisk(n-1, origin, intermediate, destination);
        printf("\nMove disk %d form %c to %c", n, origin, destination);
        movedisk(n-1, intermediate, destination, origin);
    }
}