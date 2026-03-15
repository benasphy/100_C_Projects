#ifndef WORD_COUNTER_H
#define WORD_COUNTER_H

typedef struct {
    int lines;
    int words;
    int characters;
} CountResult;

CountResult countFile(const char *filename);

#endif