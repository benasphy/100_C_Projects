#include <stdio.h>
#include <stdlib.h>
#include "fibonacci.h"

int main() {
    int choice;
    int n;

    while (1) {
        printf("\n==== Fibonacci Generator ====\n");
        printf("1. Generate Fibonacci (Iterative)\n");
        printf("2. Generate Fibonacci (Recursive)\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input.\n");
            exit(1);
        }

        switch (choice) {
            case 1:
                printf("Enter number of terms: ");
                scanf("%d", &n);
                printFibonacci(n);
                break;

            case 2:
                printf("Enter position (n): ");
                scanf("%d", &n);
                if (n < 0) {
                    printf("Please enter non-negative number.\n");
                    break;
                }
                printf("Fibonacci at position %d = %llu\n",
                       n, fibonacciRecursive(n));
                break;

            case 3:
                printf("Exiting program.\n");
                return 0;

            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}
