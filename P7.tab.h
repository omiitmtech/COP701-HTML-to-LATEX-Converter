/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_P7_TAB_H_INCLUDED
# define YY_YY_P7_TAB_H_INCLUDED
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
    HTML_STRT = 258,
    HTML_END = 259,
    HEAD_STRT = 260,
    HEAD_END = 261,
    BODY_STRT = 262,
    TEXT = 263,
    BODY_END = 264,
    HTML = 265,
    TITLE_STRT = 266,
    TITLE_END = 267,
    FONT_STRT = 268,
    FONT_END = 269,
    P_STRT = 270,
    P_END = 271,
    H1_STRT = 272,
    H1_END = 273,
    H2_STRT = 274,
    H2_END = 275,
    H3_STRT = 276,
    H3_END = 277,
    H4_STRT = 278,
    H4_END = 279,
    NAME_STRT = 280,
    CENTER_STRT = 281,
    CENTER_END = 282,
    BR_STRT = 283,
    DL_STRT = 284,
    DL_END = 285,
    DT_STRT = 286,
    DT_END = 287,
    DD_STRT = 288,
    DD_END = 289,
    DIV_STRT = 290,
    DIV_END = 291,
    TAB_STRT = 292,
    TAB_END = 293,
    ROW_STRT = 294,
    ROW_END = 295,
    COL_STRT = 296,
    COL_END = 297,
    A_STRT = 298,
    UL_STRT = 299,
    UL_END = 300,
    LI_STRT = 301,
    LI_END = 302,
    OL_STRT = 303,
    OL_END = 304,
    U_STRT = 305,
    U_END = 306,
    B_STRT = 307,
    B_END = 308,
    I_STRT = 309,
    I_END = 310,
    EM_STRT = 311,
    EM_END = 312,
    TT_STRT = 313,
    TT_END = 314,
    STRONG_STRT = 315,
    STRONG_END = 316,
    SMALL_STRT = 317,
    SMALL_END = 318,
    SUB_STRT = 319,
    SUB_END = 320,
    SUP_STRT = 321,
    SUP_END = 322,
    SPECIAL = 323,
    GSYMBOLS = 324,
    FIG_STRT = 325,
    FIG_END = 326,
    FIGC_STRT = 327,
    FIGC_END = 328,
    IMG_STRT = 329,
    IMG_END = 330,
    IMG_SRC = 331,
    IMG_WT = 332,
    IMG_HT = 333
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 15 "P7.y" /* yacc.c:1921  */

  		struct ast *a;
  		char * p;
	

#line 143 "P7.tab.h" /* yacc.c:1921  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_P7_TAB_H_INCLUDED  */
