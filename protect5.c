#include <stdio.h>

int main() {
    float num1, num2;
    char operation;

    // Get input from user
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    // Ask for operation
    printf("Choose operation (+, -, *, /): ");
    scanf(" %c", &operation);

    // Perform operation
    switch (operation) {
        case '+':
            printf("Result = %.2f\n", num1 + num2);
            break;
        case '-':
            printf("Result = %.2f\n", num1 - num2);
            break;
        case '*':
            printf("Result = %.2f\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Result = %.2f\n", num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operation. Please choose +, -, *, or /.\n");
    }

    return 0;
}

