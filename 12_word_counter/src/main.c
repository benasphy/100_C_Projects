#include <stdio.h>
#include "word_counter.h"

int main() {

    char filename[256];

    printf("Enter filename: ");
    scanf("%s", filename);

    CountResult result = countFile(filename);

    printf("\nFile Statistics:\n");
    printf("Lines: %d\n", result.lines);
    printf("Words: %d\n", result.words);
    printf("Characters: %d\n", result.characters);

    return 0;
}