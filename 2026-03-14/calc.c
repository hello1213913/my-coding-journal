#include <stdio.h>

int add(int a, int b)      { return a + b; }
int sub(int a, int b)      { return a - b; }
int mul(int a, int b)      { return a * b; }
int divide(int a, int b)   { return a / b; }

int main() {
    // Array of function pointers!
    int (*operations[4])(int, int) = {add, sub, mul, divide};
    //  ↑ return type   ↑ name     ↑ parameters

    char *symbols[] = {"+", "-", "*", "/"};

    int a, b, choice;

    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);

    printf("1: Add\n2: Subtract\n3: Multiply\n4: Divide\nChoice: ");
    scanf("%d", &choice);

    if (choice < 1 || choice > 4) {
        printf("Invalid choice.\n");
        return 1;
    }

    if (choice == 4 && b == 0) {
        printf("Cannot divide by zero.\n");
        return 1;
    }

    // ONE line replaces the entire switch!
    int result = operations[choice - 1](a, b);
    printf("%d %s %d = %d\n", a, symbols[choice - 1], b, result);

    return 0;
}