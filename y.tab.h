/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IF = 258,
    INT = 259,
    CHAR = 260,
    FLOAT = 261,
    DOUBLE = 262,
    LONG = 263,
    SHORT = 264,
    SIGNED = 265,
    UNSIGNED = 266,
    STRUCT = 267,
    RETURN = 268,
    VOID = 269,
    WHILE = 270,
    FOR = 271,
    DO = 272,
    BREAK = 273,
    identifier = 274,
    array_identifier = 275,
    integer_constant = 276,
    string_constant = 277,
    float_constant = 278,
    character_constant = 279,
    ELSE = 280,
    modulo_assignment_operator = 281,
    multiplication_assignment_operator = 282,
    division_assignment_operator = 283,
    addition_assignment_operator = 284,
    subtraction_assignment_operator = 285,
    assignment_operator = 286,
    OR_operator = 287,
    AND_operator = 288,
    equality_operator = 289,
    inequality_operator = 290,
    lessthan_assignment_operator = 291,
    lessthan_operator = 292,
    greaterthan_assignment_operator = 293,
    greaterthan_operator = 294,
    add_operator = 295,
    subtract_operator = 296,
    multiplication_operator = 297,
    division_operator = 298,
    modulo_operator = 299,
    exclamation_operator = 300,
    increment_operator = 301,
    decrement_operator = 302
  };
#endif
/* Tokens.  */
#define IF 258
#define INT 259
#define CHAR 260
#define FLOAT 261
#define DOUBLE 262
#define LONG 263
#define SHORT 264
#define SIGNED 265
#define UNSIGNED 266
#define STRUCT 267
#define RETURN 268
#define VOID 269
#define WHILE 270
#define FOR 271
#define DO 272
#define BREAK 273
#define identifier 274
#define array_identifier 275
#define integer_constant 276
#define string_constant 277
#define float_constant 278
#define character_constant 279
#define ELSE 280
#define modulo_assignment_operator 281
#define multiplication_assignment_operator 282
#define division_assignment_operator 283
#define addition_assignment_operator 284
#define subtraction_assignment_operator 285
#define assignment_operator 286
#define OR_operator 287
#define AND_operator 288
#define equality_operator 289
#define inequality_operator 290
#define lessthan_assignment_operator 291
#define lessthan_operator 292
#define greaterthan_assignment_operator 293
#define greaterthan_operator 294
#define add_operator 295
#define subtract_operator 296
#define multiplication_operator 297
#define division_operator 298
#define modulo_operator 299
#define exclamation_operator 300
#define increment_operator 301
#define decrement_operator 302

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 38 "parser.y" /* yacc.c:1909  */

	int val;

#line 152 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
