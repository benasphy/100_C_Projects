#include <stdio.h>
#include <string.h>
#include "calculator.h"
#include "parser.h"

void repl(void) {
    char input[256];

    printf("C Calculator (type 'exit' to quit)\n");

    while (1) {
        printf(">> ");
        if (!fgets(input, sizeof(input), stdin))
            break;

        if (strncmp(input, "exit", 4) == 0)
            break;

        const char *ptr = input;
        double result = parse_expression(&ptr);
        printf("= %.10g\n", result);
    }
}
