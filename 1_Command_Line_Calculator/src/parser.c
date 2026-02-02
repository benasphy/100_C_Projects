#include <stdio.h>
#include <stdlib.h>
#include "parser.h"
#include "lexer.h"

static Token current_token;

static void eat(TokenType type, const char **input) {
    if (current_token.type == type) {
        current_token = get_next_token(input);
    } else {
        printf("Syntax Error\n");
        exit(1);
    }
}

static double factor(const char **input) {
    double result;

    if (current_token.type == TOKEN_NUMBER) {
        result = current_token.value;
        eat(TOKEN_NUMBER, input);
    }
    else if (current_token.type == TOKEN_LPAREN) {
        eat(TOKEN_LPAREN, input);
        result = parse_expression(input);
        eat(TOKEN_RPAREN, input);
    }
    else {
        printf("Invalid factor\n");
        exit(1);
    }

    return result;
}

static double term(const char **input) {
    double result = factor(input);

    while (current_token.type == TOKEN_MUL ||
           current_token.type == TOKEN_DIV ||
           current_token.type == TOKEN_MOD) {

        TokenType op = current_token.type;
        eat(op, input);

        if (op == TOKEN_MUL)
            result *= factor(input);
        else if (op == TOKEN_DIV)
            result /= factor(input);
        else
            result = (int)result % (int)factor(input);
    }

    return result;
}

double parse_expression(const char **input) {
    current_token = get_next_token(input);
    double result = term(input);

    while (current_token.type == TOKEN_PLUS ||
           current_token.type == TOKEN_MINUS) {

        TokenType op = current_token.type;
        eat(op, input);

        if (op == TOKEN_PLUS)
            result += term(input);
        else
            result -= term(input);
    }

    return result;
}
