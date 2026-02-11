#ifndef GAME_H
#define GAME_H

typedef enum {
    ROCK = 1,
    PAPER,
    SCISSORS
} Choice;

void show_menu(void);
Choice get_computer_choice(void);
int determine_winner(Choice player, Choice computer);
void play_round(void);

#endif
