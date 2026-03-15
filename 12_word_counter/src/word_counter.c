#include <stdio.h>
#include <ctype.h>
#include "word_counter.h"

CountResult countFile(const char *filename) {

    CountResult result = {0, 0, 0};

    FILE *file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return result;
    }

    int c;
    int inWord = 0;

    while ((c = fgetc(file)) != EOF) {

        result.characters++;

        if (c == '\n')
            result.lines++;

        if (isspace(c)) {
            inWord = 0;
        } 
        else if (!inWord) {
            result.words++;
            inWord = 1;
        }
    }

    fclose(file);

    return result;
}