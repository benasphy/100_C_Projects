#ifndef QUIZ_H
#define QUIZ_H

#define MAX_QUESTIONS 5
#define MAX_OPTIONS 4
#define MAX_TEXT 256

typedef struct {
    char question[MAX_TEXT];
    char options[MAX_OPTIONS][MAX_TEXT];
    int correctAnswer;  // index (0–3)
} Question;

void runQuiz();

#endif
