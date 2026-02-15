#include <stdio.h>
#include "fibonacci.h"

/*
 * Iterative Fibonacci Generator
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

void printFibonacci(int n){

    if (n < 0){
        printf("Can you insert a Positive number");
        return;
    }

    unsigned long long first = 0, second = 1, next;

    printf("\nFibonacci Series (%d terms):\n", n);

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%llu ", first);
            continue;
        }
        if (i == 2) {
            printf("%llu ", second);
            continue;
        }

        next = first + second;
        printf("%llu ", next);

        first = second;
        second = next;

    }
    printf("\n");
}

/*
 * Recursive Fibonacci (for learning only)
 * Time Complexity: O(2^n)
 * Not efficient for large n
 */
/*unsigned long long fibonacciRecursive(int n) {
    if (n <= 1)
        return n;

    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}*/