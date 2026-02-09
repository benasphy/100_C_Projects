#include <stdio.h>
#include "prime.h"

int main() {
    int choice;
    int number;

    do {
        show_menu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &number);

                if (is_prime(number))
                    printf("✅ %d is a prime number.\n", number);
                else
                    printf("❌ %d is NOT a prime number.\n", number);
                break;

            case 2:
                printf("Generate primes up to: ");
                scanf("%d", &number);
                generate_primes(number);
                break;

            case 0:
                printf("👋 Exiting program. Goodbye!\n");
                break;

            default:
                printf("❌ Invalid option.\n");
        }

    } while (choice != 0);

    return 0;
}
