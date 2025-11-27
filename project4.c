#include <stdio.h>

int main() {
    int choice;
    float temperature;

    printf("Temperature Converter\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1/2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temperature);
        float fahrenheit = (temperature * 9 / 5) + 32;
        printf("%.1f°C is equal to %.1f°F\n", temperature, fahrenheit);
    } else if (choice == 2) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temperature);
        float celsius = (temperature - 32) * 5 / 9.0;
        printf("%.1f°F is equal to %.1f°C\n", temperature, celsius);
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}
