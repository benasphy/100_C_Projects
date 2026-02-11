#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "game.h"

/* Private game state */
static int player_score = 0;
static int computer_score = 0;

/* Display menu */
void show_menu(void) {
    printf("\n🪨 Rock–Paper–Scissors\n");
    printf("----------------------\n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");
    printf("0. Exit\n");
    printf("Choose your move: ");
}

/* Generate computer choice */
Choice get_computer_choice(void) {
    return (rand() % 3) + 1;   // 1–3
}

/* Determine winner
   Returns:
   0 = draw
   1 = player wins
   -1 = computer wins
*/
int determine_winner(Choice player, Choice computer) {
    if (player == computer)
        return 0;

    if ((player == ROCK && computer == SCISSORS) ||
        (player == PAPER && computer == ROCK) ||
        (player == SCISSORS && computer == PAPER))
        return 1;

    return -1;
}

/* Play one round */
void play_round(void) {
    int input;
    Choice player_choice;
    Choice computer_choice;

    show_menu();
    scanf("%d", &input);

    if (input == 0) {
        printf("👋 Exiting game.\n");
        return;
    }

    if (input < 1 || input > 3) {
        printf("❌ Invalid move.\n");
        return;
    }

    player_choice = (Choice)input;
    computer_choice = get_computer_choice();

    const char *choices[] = {"", "Rock", "Paper", "Scissors"};

    printf("You chose: %s\n", choices[player_choice]);
    printf("Computer chose: %s\n", choices[computer_choice]);

    int result = determine_winner(player_choice, computer_choice);

    if (result == 0) {
        printf("🤝 It's a draw!\n");
    } else if (result == 1) {
        printf("🎉 You win this round!\n");
        player_score++;
    } else {
        printf("💻 Computer wins this round!\n");
        computer_score++;
    }

    printf("Score → You: %d | Computer: %d\n",
           player_score, computer_score);
}
