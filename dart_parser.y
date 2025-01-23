%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "semantic/semantic.h"  // Ensure this is the correct path

extern int yylex(void);  // Declare the lexer function

// Define constants for types (update these as per your semantic.h definitions)
#define TYPE_INT 1
#define TYPE_DOUBLE 2
#define TYPE_BOOL 3
#define TYPE_STRING 4
#define TYPE_DYNAMIC 5
#define TYPE_CHAR 6
%}

%union {
    char* str;    // For identifiers and string literals
    int type;     // For types like INT, DOUBLE, etc.
    int num;      // For numeric values
}

%type <type> type declaration expression assignment function_call
%token <type> VOID INT DOUBLE BOOL STRING DYNAMIC
%token <str> IDENTIFIER STRING_LITERAL CHAR_LITERAL
%token <num> NUMBER
%token TRUE FALSE IF ELSE WHILE FOR BREAK CONTINUE RETURN DO
%token TRY CATCH INCREMENT DECREMENT PLUS MINUS MULT DIV MOD ERROR
%token EQ NEQ GT LT GTE LTE ASSIGN DEFAULT CASE SWITCH
%token AND OR NOT SEMICOLON COLON COMMA DOT LBRACE RBRACE
%token LPAREN RPAREN LBRACKET RBRACKET HASH MAIN
%token PRINT FINAL CONST VAR STATIC QUESTION

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
    | declaration SEMICOLON
    | assignment SEMICOLON
    | if_statement
    | while_loop
    | for_loop
    | function_call SEMICOLON
    | RETURN expression SEMICOLON
    | BREAK SEMICOLON
    | CONTINUE SEMICOLON
    ;

declaration:
    type IDENTIFIER {
        if (insert_symbol($2, $1)) {
            printf("Error: Variable '%s' already declared\n", $2);
            exit(1);
        }
    }
    | type IDENTIFIER ASSIGN expression {
        if (insert_symbol($2, $1)) {
            printf("Error: Variable '%s' already declared\n", $2);
            exit(1);
        }
    }
    | FINAL type IDENTIFIER ASSIGN expression {
        if (insert_symbol($3, $2)) {
            printf("Error: Variable '%s' already declared\n", $3);
            exit(1);
        }
        mark_as_final($3);
    }
    | CONST type IDENTIFIER ASSIGN expression {
        if (insert_symbol($3, $2)) {
            printf("Error: Variable '%s' already declared\n", $3);
            exit(1);
        }
        mark_as_const($3);
    }
    | VAR type IDENTIFIER ASSIGN expression {
        if (insert_symbol($3, $2)) {
            printf("Error: Variable '%s' already declared\n", $3);
            exit(1);
        }
    }
    ;

assignment:
    IDENTIFIER ASSIGN expression {
        Symbol* symbol = lookup_symbol($1);
        if (symbol == NULL) {
            yyerror("Undefined variable");
            exit(1);
        }
        $$ = $3;  // Assign the type of the expression to the variable
        handle_assignment($1, $$, '=');
    }
    | IDENTIFIER PLUS ASSIGN expression {
        Symbol* symbol = lookup_symbol($1);
        if (symbol == NULL) {
            yyerror("Undefined variable");
            exit(1);
        }
        handle_assignment($1, $$, '+');
    }
    | IDENTIFIER MINUS ASSIGN expression {
        Symbol* symbol = lookup_symbol($1);
        if (symbol == NULL) {
            yyerror("Undefined variable");
            exit(1);
        }
        handle_assignment($1, $$, '-');
    }
    | IDENTIFIER MULT ASSIGN expression {
        Symbol* symbol = lookup_symbol($1);
        if (symbol == NULL) {
            yyerror("Undefined variable");
            exit(1);
        }
        handle_assignment($1, $$, '*');
    }
    | IDENTIFIER DIV ASSIGN expression {
        Symbol* symbol = lookup_symbol($1);
        if (symbol == NULL) {
            yyerror("Undefined variable");
            exit(1);
        }
        handle_assignment($1, $$, '/');
    }
    ;

type:
    INT
    | DOUBLE
    | BOOL
    | STRING
    | DYNAMIC
    ;

if_statement:
    IF LPAREN expression RPAREN LBRACE statements RBRACE optional_else
    ;

optional_else:
    ELSE LBRACE statements RBRACE
    |
    ;

while_loop:
    WHILE LPAREN expression RPAREN LBRACE statements RBRACE
    ;

for_loop:
    FOR LPAREN optional_declaration SEMICOLON optional_expression SEMICOLON optional_assignment RPAREN LBRACE statements RBRACE
    ;

optional_declaration:
    declaration
    | /* empty */
    ;

optional_expression:
    expression
    | /* empty */
    ;

optional_assignment:
    assignment
    | /* empty */
    ;

expression:
    NUMBER {
        $$ = TYPE_INT; // Assuming numbers are integers by default
    }
    | IDENTIFIER {
        $$ = lookup_symbol($1); // Fetch the type of the identifier
    }
    | expression PLUS expression {
        $$ = check_arithmetic($1, $3); // Validate and propagate the type
    }
    | expression MINUS expression {
        $$ = check_arithmetic($1, $3);
    }
    | expression MULT expression {
        $$ = check_arithmetic($1, $3);
    }
    | expression DIV expression {
        $$ = check_arithmetic($1, $3);
    }
    | expression MOD expression {
        $$ = check_arithmetic($1, $3);
    }
    | LPAREN expression RPAREN {
        $$ = $2; // Propagate the type from the sub-expression
    }
    | CHAR_LITERAL {
        $$ = TYPE_CHAR; // Define `TYPE_CHAR` for character literals
    }
    | STRING_LITERAL {
        $$ = TYPE_STRING; // Define `TYPE_STRING` for string literals
    }
    | TRUE {
        $$ = TYPE_BOOL; // Boolean `true`
    }
    | FALSE {
        $$ = TYPE_BOOL; // Boolean `false`
    }
    | function_call {
        $$ = get_function_return_type($1); // Fetch the function's return type
    }
    | expression QUESTION expression COLON expression {
        $$ = check_ternary($1, $3, $5); // Validate and propagate the type for ternary
    }
    ;

function_call:
    IDENTIFIER LPAREN argument_list RPAREN {
        $$ = get_function_return_type($1); // Get the function's return type
    }
    ;

argument_list:
    expression
    | argument_list COMMA expression
    |
    ;

%%

// Include the yyerror function for semantic analysis
void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}
int main() {
    if (yyparse() == 0) { 
        printf("Parsing completed successfully.\n");
    } else {
        printf("Parsing failed.\n");
    }
    return 0;
}