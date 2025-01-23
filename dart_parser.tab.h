/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_DART_PARSER_TAB_H_INCLUDED
# define YY_YY_DART_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    VOID = 258,                    /* VOID  */
    INT = 259,                     /* INT  */
    DOUBLE = 260,                  /* DOUBLE  */
    BOOL = 261,                    /* BOOL  */
    STRING = 262,                  /* STRING  */
    DYNAMIC = 263,                 /* DYNAMIC  */
    IDENTIFIER = 264,              /* IDENTIFIER  */
    STRING_LITERAL = 265,          /* STRING_LITERAL  */
    CHAR_LITERAL = 266,            /* CHAR_LITERAL  */
    NUMBER = 267,                  /* NUMBER  */
    TRUE = 268,                    /* TRUE  */
    FALSE = 269,                   /* FALSE  */
    IF = 270,                      /* IF  */
    ELSE = 271,                    /* ELSE  */
    WHILE = 272,                   /* WHILE  */
    FOR = 273,                     /* FOR  */
    BREAK = 274,                   /* BREAK  */
    CONTINUE = 275,                /* CONTINUE  */
    RETURN = 276,                  /* RETURN  */
    DO = 277,                      /* DO  */
    TRY = 278,                     /* TRY  */
    CATCH = 279,                   /* CATCH  */
    INCREMENT = 280,               /* INCREMENT  */
    DECREMENT = 281,               /* DECREMENT  */
    PLUS = 282,                    /* PLUS  */
    MINUS = 283,                   /* MINUS  */
    MULT = 284,                    /* MULT  */
    DIV = 285,                     /* DIV  */
    MOD = 286,                     /* MOD  */
    ERROR = 287,                   /* ERROR  */
    EQ = 288,                      /* EQ  */
    NEQ = 289,                     /* NEQ  */
    GT = 290,                      /* GT  */
    LT = 291,                      /* LT  */
    GTE = 292,                     /* GTE  */
    LTE = 293,                     /* LTE  */
    ASSIGN = 294,                  /* ASSIGN  */
    DEFAULT = 295,                 /* DEFAULT  */
    CASE = 296,                    /* CASE  */
    SWITCH = 297,                  /* SWITCH  */
    AND = 298,                     /* AND  */
    OR = 299,                      /* OR  */
    NOT = 300,                     /* NOT  */
    SEMICOLON = 301,               /* SEMICOLON  */
    COLON = 302,                   /* COLON  */
    COMMA = 303,                   /* COMMA  */
    DOT = 304,                     /* DOT  */
    LBRACE = 305,                  /* LBRACE  */
    RBRACE = 306,                  /* RBRACE  */
    LPAREN = 307,                  /* LPAREN  */
    RPAREN = 308,                  /* RPAREN  */
    LBRACKET = 309,                /* LBRACKET  */
    RBRACKET = 310,                /* RBRACKET  */
    HASH = 311,                    /* HASH  */
    MAIN = 312,                    /* MAIN  */
    PRINT = 313,                   /* PRINT  */
    FINAL = 314,                   /* FINAL  */
    CONST = 315,                   /* CONST  */
    VAR = 316,                     /* VAR  */
    STATIC = 317,                  /* STATIC  */
    QUESTION = 318                 /* QUESTION  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 16 "dart_parser.y"

    char* str;    // For identifiers and string literals
    int type;     // For types like INT, DOUBLE, etc.
    int num;      // For numeric values

#line 133 "dart_parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_DART_PARSER_TAB_H_INCLUDED  */
