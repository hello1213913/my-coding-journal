#include<stdio.h>

void towerof(int n, char from_rod, char to_rod, char final_rod){
    if(n==1){
        printf("\nMove disk 1 from %c to %c", from_rod, final_rod);
        return;
    }
    towerof(n-1, from_rod, final_rod, to_rod);
    printf("\nMove disk %d from %c to %c", n, from_rod, to_rod);
    towerof(n-1, final_rod, to_rod, from_rod);
    
}
int main(){
    int n, first, second, third;
    printf("Enter the number of the balls : ");
    scanf("%d", &n);

    towerof(n, 'A', 'B', 'C');
    return 0;

}