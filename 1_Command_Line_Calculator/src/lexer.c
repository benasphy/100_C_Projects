#include <ctype.h>
#include <stdlib.h>
#include "lexer.h"

Token get_next_token(const char **input){
    Token token;
    token.type = TOKEN_INVALID;
    token.value = 0;
    

    /* skip whitespace */
    while (isspace((unsigned char)**input)) {
        (*input)++;
    }

    /* end of input */
    if (**input == '\0' || **input == '\n') {
        token.type = TOKEN_EOF;
        return token;
    }

    /* number (integer or floating) */
    if (isdigit((unsigned char)**input) || **input == '.') {
        token.type = TOKEN_NUMBER;
        token.value = strtod(*input, (char **)input);
        return token;
    }

    switch (**input) {
        case '+': token.type = TOKEN_PLUS; break;
        case '-': token.type = TOKEN_MINUS; break;
        case '*': token.type = TOKEN_MUL; break;
        case '/': token.type = TOKEN_DIV; break;
        case '%': token.type = TOKEN_MOD; break;
        case '(': token.type = TOKEN_LPAREN; break;
        case ')': token.type = TOKEN_RPAREN; break;
        default: token.type = TOKEN_INVALID; break;
    }

    (*input)++;
    return token;

}