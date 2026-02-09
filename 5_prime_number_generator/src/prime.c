#include <stdio.h>
#include <math.h>
#include "prime.h"

void show_menu(void) {
    printf("\n🔢 Prime Number Generator\n");
    printf("-------------------------\n");
    printf("1. Check if a number is prime\n");
    printf("2. Generate primes up to N\n");
    printf("0. Exit\n");
    printf("Choose an option: ");
}

/*
 * Returns 1 if n is prime, 0 otherwise
 */
int is_prime(int n) {
    if (n <= 1)
        return 0;

    if (n == 2)
        return 1;

    if (n % 2 == 0)
        return 0;

    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

/*
 * Generates and prints all prime numbers up to limit
 */
void generate_primes(int limit) {
    if (limit < 2) {
        printf("No prime numbers available.\n");
        return;
    }

    printf("Prime numbers up to %d:\n", limit);

    for (int i = 2; i <= limit; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");
}
