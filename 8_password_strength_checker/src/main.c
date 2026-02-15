#include <stdio.h>
#include <string.h>
#include "password.h"

#define MAX_LENGTH 100

int main() {
    char password[MAX_LENGTH];

    printf("==== Password Strength Checker ====\n");
    printf("Enter password: ");

    fgets(password, sizeof(password), stdin);

    // Remove newline character
    password[strcspn(password, "\n")] = '\0';

    int strength = checkPasswordStrength(password);

    printStrengthResult(strength);

    return 0;
}
