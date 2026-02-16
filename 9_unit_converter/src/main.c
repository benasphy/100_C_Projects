#include <stdio.h>
#include "converter.h"

void lengthMenu() {
    double value;
    int choice;

    printf("\n--- Length Converter ---\n");
    printf("1. Meters to Kilometers\n");
    printf("2. Kilometers to Meters\n");
    printf("Choose: ");
    scanf("%d", &choice);

    printf("Enter value: ");
    scanf("%lf", &value);

    if (choice == 1)
        printf("Result: %.4f km\n", metersToKilometers(value));
    else if (choice == 2)
        printf("Result: %.4f m\n", kilometersToMeters(value));
    else
        printf("Invalid choice.\n");
}

void weightMenu() {
    double value;
    int choice;

    printf("\n--- Weight Converter ---\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");
    printf("Choose: ");
    scanf("%d", &choice);

    printf("Enter value: ");
    scanf("%lf", &value);

    if (choice == 1)
        printf("Result: %.4f lb\n", kgToPounds(value));
    else if (choice == 2)
        printf("Result: %.4f kg\n", poundsToKg(value));
    else
        printf("Invalid choice.\n");
}

void temperatureMenu() {
    double value;
    int choice;

    printf("\n--- Temperature Converter ---\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Choose: ");
    scanf("%d", &choice);

    printf("Enter value: ");
    scanf("%lf", &value);

    if (choice == 1)
        printf("Result: %.2f °F\n", celsiusToFahrenheit(value));
    else if (choice == 2)
        printf("Result: %.2f °C\n", fahrenheitToCelsius(value));
    else
        printf("Invalid choice.\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n==== Unit Converter ====\n");
        printf("1. Length\n");
        printf("2. Weight\n");
        printf("3. Temperature\n");
        printf("4. Exit\n");
        printf("Choose category: ");

        scanf("%d", &choice);

        switch (choice) {
            case 1:
                lengthMenu();
                break;
            case 2:
                weightMenu();
                break;
            case 3:
                temperatureMenu();
                break;
            case 4:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}
