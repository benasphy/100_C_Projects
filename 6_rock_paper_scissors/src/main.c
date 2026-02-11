#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "game.h"

int main() {
    srand(time(NULL));   // seed random generator

    int running = 1;

    printf("🎮 Welcome to Rock–Paper–Scissors!\n");

    while (running) {
        play_round();

        printf("\nPlay again? (1 = Yes, 0 = No): ");
        scanf("%d", &running);
    }

    printf("\n🏁 Final Score Saved. Thanks for playing!\n");
    return 0;
}
