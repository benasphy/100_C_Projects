#include <stdio.h>
#include "converter.h"

void show_menu(void) {
    printf("\n Temperature Converter\n");
    printf("------------------------\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Celsius to Kelvin\n");
    printf("4. Kelvin to Celsius\n");
    printf("0. Exit\n");
    printf("Choose an option: ");
}

void handle_conversion(int choice) {
    double input, result;

    switch (choice) {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%lf", &input);
            result = celsius_to_fahrenheit(input);
            printf("Result: %.2f °F\n", result);
            break;

        case 2:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%lf", &input);
            result = fahrenheit_to_celsius(input);
            printf("Result: %.2f °C\n", result);
            break;

        case 3:
            printf("Enter temperature in Celsius: ");
            scanf("%lf", &input);
            result = celsius_to_kelvin(input);
            printf("Result: %.2f K\n", result);
            break;

        case 4:
            printf("Enter temperature in Kelvin: ");
            scanf("%lf", &input);
            result = kelvin_to_celsius(input);
            printf("Result: %.2f °C\n", result);
            break;

        default:
            printf("❌ Invalid choice.\n");
    }
}

/* Conversion formulas */

double celsius_to_fahrenheit(double c) {
    return (c * 9.0 / 5.0) + 32;
}

double fahrenheit_to_celsius(double f) {
    return (f - 32) * 5.0 / 9.0;
}

double celsius_to_kelvin(double c) {
    return c + 273.15;
}

double kelvin_to_celsius(double k) {
    return k - 273.15;
}
