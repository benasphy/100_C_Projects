#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "password.h"


/*
 * Returns strength score from 0 to 5
 */

int checkPasswordStrength(const char *password){
    int length = strlen(password);
    int hasUpper = 0;
    int hasLower = 0;
    int hasDigit = 0;
    int hasSpecial = 0;

    for (int i = 0; password[i] != '\0'; i++) {
        if (isupper(password[i]))
            hasUpper = 1;
        else if (islower(password[i]))
            hasLower = 1;
        else if (isdigit(password[i]))
            hasDigit = 1;
        else
            hasSpecial = 1;
    }
    int score = 0;

    if (length >= 8)
        score++;
    if (hasUpper)
        score++;
    if (hasLower)
        score++;
    if (hasDigit)
        score++;
    if (hasSpecial)
        score++;

    return score;
}

void printStrengthResult(int strength) {
    printf("\nPassword Strength: ");

    switch (strength) {
        case 5:
            printf("Very Strong 💪\n");
            break;
        case 4:
            printf("Strong 👍\n");
            break;
        case 3:
            printf("Moderate ⚠️\n");
            break;
        case 2:
            printf("Weak ❌\n");
            break;
        default:
            printf("Very Weak ❌\n");
    }
}


