%{
#include <stdio.h>
#include <stdlib.h>
#include "dart_parser.tab.h"

extern int yylex(void);  // Declare the lexer function

void yyerror(const char *s);
%}

%token VOID INT DOUBLE BOOL STRING DYNAMIC TRUE FALSE
%token IF ELSE WHILE FOR BREAK CONTINUE RETURN DO
%token TRY CATCH IDENTIFIER NUMBER STRING_LITERAL CHAR_LITERAL
%token INCREMENT DECREMENT PLUS MINUS MULT DIV MOD ERROR 
%token EQ NEQ GT LT GTE LTE ASSIGN DEFAULT CASE SWITCH
%token AND OR NOT SEMICOLON COLON COMMA DOT LBRACE RBRACE
%token LPAREN RPAREN LBRACKET RBRACKET HASH MAIN
%token STD SCOPE COUT LSHIFT ENDL RSHIFT PRINT

%left OR
%left AND
%left EQ NEQ
%left GT LT GTE LTE
%left PLUS MINUS
%left MULT DIV MOD
%right NOT

%%

program:
    VOID MAIN LPAREN RPAREN LBRACE statements RBRACE
    ;

statements:
    statement
    | statements statement
    ;

statement:
    PRINT LPAREN STRING_LITERAL RPAREN SEMICOLON
    | expression SEMICOLON  
    | assignment SEMICOLON
    ;

assignment: 
    type IDENTIFIER ASSIGN expression
    ;

type:
    INT
    | DOUBLE
    | BOOL
    | STRING
    | DYNAMIC
    ;

expression:
    NUMBER 
    |
    IDENTIFIER 
    |
    expression PLUS expression
    |
    expression MINUS expression
    |
    expression MULT expression
    |
    expression DIV expression
    |
    LPAREN expression RPAREN
    | CHAR_LITERAL 
    | STRING_LITERAL 
    ;

%%

int main() {
    printf("Starting Dart program lexer and parser...\n");
    
    if (yyparse() == 0) {
        // Parsing completed successfully
        printf("Parsing completed successfully!\n");
    } else {
        // There was an error during parsing
        printf("Parsing failed.\n");
    }
    
    return 0;
}


void yyerror(const char *s) {  
    fprintf(stderr, "Error: %s\n", s);
}
