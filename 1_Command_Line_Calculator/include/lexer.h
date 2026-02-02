#ifndef LEXER_H
#define LEXER_H

typedef enum{
    TOKEN_NUMBER,
    TOKEN_PLUS,
    TOKEN_MINUS,
    TOKEN_MUL,
    TOKEN_DIV,
    TOKEN_MOD,
    TOKEN_LPAREN,
    TOKEN_RPAREN,
    TOKEN_EOF,
    TOKEN_INVALID
} TokenType;

typedef struct{
    TokenType type;
    double value;
} Token;

Token get_next_token(const char **input);

#endif
