#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32.0f) * 5.0f / 9.0f;

    printf("\n--- Conversion Result ---\n");
    printf("Fahrenheit: %.2f F\n", fahrenheit);
    printf("Celsius:    %.2f C\n", celsius);

    return 0;
}
