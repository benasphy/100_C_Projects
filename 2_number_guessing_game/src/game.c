#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "game.h"

void start_game(void){
    int secretNumber;
    int guess;
    int attempts = 0;

    srand(time(NULL));

    secretNumber = (rand() % 100) + 1;

    printf("Welcome to Number Guessing Game!\n");
    printf("I have chosen a number between 1 and 100.\n");

    do{
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secretNumber) {
            printf("Too high! Try again.\n");
        } else if (guess < secretNumber) {
            printf("Too low! Try again.\n");
        } else {
            printf("🎉 Correct! You guessed it in %d attempts.\n", attempts);
        }

    } while(guess != secretNumber);
        
    
}