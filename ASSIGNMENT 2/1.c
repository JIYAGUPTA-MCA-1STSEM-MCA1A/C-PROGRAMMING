#include <stdio.h>

int add(int a, int b) {
    return a + b;
}


int subtract(int a, int b) {
    return a - b;
}


int multiply(int a, int b) {
    return a * b;
}


int divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return 0;
    }
    return a / b;
}

int main() {
    int num1, num2, choice;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Choose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Sum: %d\n", add(num1, num2));
            break;
        case 2:
            printf("Difference: %d\n", subtract(num1, num2));
            break;
        case 3:
            printf("Product: %d\n", multiply(num1, num2));
            break;
        case 4:
            printf("Quotient: %d\n", divide(num1, num2));
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
