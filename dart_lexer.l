%{
    #include "dart_parser.tab.h"
%}

%%

"void"               { printf("Token: VOID\n"); return VOID; }
"if"                 { printf("Token: IF\n"); return IF; }
"else"               { printf("Token: ELSE\n"); return ELSE; }
"while"              { printf("Token: WHILE\n"); return WHILE; }
"for"                { printf("Token: FOR\n"); return FOR; }
"break"              { printf("Token: BREAK\n"); return BREAK; }
"continue"           { printf("Token: CONTINUE\n"); return CONTINUE; }
"return"             { printf("Token: RETURN\n"); return RETURN; }
"try"                { printf("Token: TRY\n"); return TRY; }
"catch"              { printf("Token: CATCH\n"); return CATCH; }
"main"               { printf("Token: MAIN\n"); return MAIN; }

"int"                { printf("Token: INT\n"); return INT; }
"double"             { printf("Token: DOUBLE\n"); return DOUBLE; }
"bool"               { printf("Token: BOOL\n"); return BOOL; }
"String"             { printf("Token: STRING\n"); return STRING; }
"dynamic"            { printf("Token: DYNAMIC\n"); return DYNAMIC; }

"true"               { printf("Token: TRUE\n"); return TRUE; }
"false"              { printf("Token: FALSE\n"); return FALSE; }

"="                  { printf("Token: ASSIGN\n"); return ASSIGN; }
"+"                  { printf("Token: PLUS\n"); return PLUS; }
"++"                 { printf("Token: INCREMENT\n"); return INCREMENT; }
"-"                  { printf("Token: MINUS\n"); return MINUS; }
"--"                 { printf("Token: DECREMENT\n"); return DECREMENT; }
"*"                  { printf("Token: MULT\n"); return MULT; }
"/"                  { printf("Token: DIV\n"); return DIV; }
"%"                  { printf("Token: MOD\n"); return MOD; }
"=="                 { printf("Token: EQ\n"); return EQ; }
"!="                 { printf("Token: NEQ\n"); return NEQ; }
">="                 { printf("Token: GTE\n"); return GTE; }
"<="                 { printf("Token: LTE\n"); return LTE; }
">"                  { printf("Token: GT\n"); return GT; }
"<"                  { printf("Token: LT\n"); return LT; }
"&&"                 { printf("Token: AND\n"); return AND; }
"||"                 { printf("Token: OR\n"); return OR; }
"!"                  { printf("Token: NOT\n"); return NOT; }
"print"              { printf("Token: PRINT\n"); return PRINT; }

"final"              { printf("Token: FINAL\n"); return FINAL; }
"const"              { printf("Token: CONST\n"); return CONST; }
"var"                { printf("Token: VAR\n"); return VAR; }

"("                  { printf("Token: LPAREN\n"); return LPAREN; }
")"                  { printf("Token: RPAREN\n"); return RPAREN; }
"{"                  { printf("Token: LBRACE\n"); return LBRACE; }
"}"                  { printf("Token: RBRACE\n"); return RBRACE; }
"["                  { printf("Token: LBRACKET\n"); return LBRACKET; }
"]"                  { printf("Token: RBRACKET\n"); return RBRACKET; }
"."                  { printf("Token: DOT\n"); return DOT; }

"?"                  { printf("Token: QUESTION\n"); return QUESTION; }  // Ternary operator
":"                  { printf("Token: COLON\n"); return COLON; }

[0-9]+               { printf("Token: NUMBER (%s)\n", yytext); return NUMBER; }
[A-Za-z_][A-Za-z0-9_]* {printf("Token: IDENTIFIER (%s)\n", yytext);return IDENTIFIER;}

\"[^\"]*\"           { printf("Token: STRING_LITERAL\n"); return STRING_LITERAL; } // String literals
\'[^\']\'            { printf("Token: CHAR_LITERAL\n"); return CHAR_LITERAL; } // Char literals

";"                  { printf("Token: SEMICOLON\n"); return SEMICOLON; }
","                  { printf("Token: COMMA\n"); return COMMA; }
":"                  { printf("Token: COLON\n"); return COLON; }

[ \t\n\r]+           { /* Ignore whitespace */ }

"//".*               { /* Ignore single-line comments */ }
"/*"([^*]|[\r\n]|(\*+([^*/]|[\r\n])))*\*+"/" { /* Ignore multi-line comments */ }

.                    { printf("Unknown token: %s\n", yytext); return ERROR; }

%%

int yywrap() {
    return 1;
}
