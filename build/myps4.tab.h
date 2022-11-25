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

#ifndef YY_YY_MYPS4_TAB_H_INCLUDED
# define YY_YY_MYPS4_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 51 "../myps4.y"

#include "../syntree.h"

#line 53 "myps4.tab.h"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    PICTURE = 258,                 /* PICTURE  */
    STRING = 259,                  /* STRING  */
    START = 260,                   /* START  */
    END = 261,                     /* END  */
    FOR = 262,                     /* FOR  */
    TO = 263,                      /* TO  */
    STEP = 264,                    /* STEP  */
    DO = 265,                      /* DO  */
    DONE = 266,                    /* DONE  */
    VAR = 267,                     /* VAR  */
    ID = 268,                      /* ID  */
    TINT = 269,                    /* TINT  */
    TNUM = 270,                    /* TNUM  */
    TSTRING = 271,                 /* TSTRING  */
    TPOINT = 272,                  /* TPOINT  */
    TPATH = 273,                   /* TPATH  */
    TTERM = 274,                   /* TTERM  */
    LATE_BIND = 275,               /* LATE_BIND  */
    INT = 276,                     /* INT  */
    FLOAT = 277,                   /* FLOAT  */
    PATHOPEN = 278,                /* PATHOPEN  */
    PATHCLOSE = 279,               /* PATHCLOSE  */
    MOD = 280                      /* MOD  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 54 "../myps4.y"

    ComplexNode *content;

#line 99 "myps4.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (ComplexNode **root);


#endif /* !YY_YY_MYPS4_TAB_H_INCLUDED  */
