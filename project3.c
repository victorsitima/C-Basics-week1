#include <stdio.h>

int main() {
    float num1, num2;

    // Get input from user
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    // Check for division by zero
    if (num2 == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 1;
    }

    // Perform arithmetic operations
    float sum = num1 + num2;
    float difference = num1 - num2;
    float product = num1 * num2;
    float quotient = num1 / num2;

    // Print results
    printf("Sum = %.2f\n", sum);
    printf("Difference = %.2f\n", difference);
    printf("Product = %.2f\n", product);
    printf("Quotient = %.2f\n", quotient);

    return 0;
}

