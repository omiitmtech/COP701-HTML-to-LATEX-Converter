/* A Bison parser, made by GNU Bison 3.3.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.3.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 2 "P7.y" /* yacc.c:337  */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "P7.h"

int cols=0,rows=0, cols_1, rows_1;
char border;

FILE *ff;

#line 82 "P7.tab.c" /* yacc.c:337  */
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "P7.tab.h".  */
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
#line 15 "P7.y" /* yacc.c:352  */

  		struct ast *a;
  		char * p;
	

#line 210 "P7.tab.c" /* yacc.c:352  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_P7_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   219

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  79
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  85
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  155

#define YYUNDEFTOK  2
#define YYMAXUTOK   333

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    41,    41,    47,    49,    51,    57,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    72,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    93,    95,    97,
     104,   111,   118,   125,   133,   140,   148,   155,   162,   165,
     169,   176,   183,   190,   198,   230,   232,   234,   236,   237,
     238,   240,   247,   261,   292,   299,   300,   303,   311,   319,
     326,   335,   337,   338,   339,   340,   350,   355,   356,   357,
     358,   359,   360,   361,   362,   363
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "HTML_STRT", "HTML_END", "HEAD_STRT",
  "HEAD_END", "BODY_STRT", "TEXT", "BODY_END", "HTML", "TITLE_STRT",
  "TITLE_END", "FONT_STRT", "FONT_END", "P_STRT", "P_END", "H1_STRT",
  "H1_END", "H2_STRT", "H2_END", "H3_STRT", "H3_END", "H4_STRT", "H4_END",
  "NAME_STRT", "CENTER_STRT", "CENTER_END", "BR_STRT", "DL_STRT", "DL_END",
  "DT_STRT", "DT_END", "DD_STRT", "DD_END", "DIV_STRT", "DIV_END",
  "TAB_STRT", "TAB_END", "ROW_STRT", "ROW_END", "COL_STRT", "COL_END",
  "A_STRT", "UL_STRT", "UL_END", "LI_STRT", "LI_END", "OL_STRT", "OL_END",
  "U_STRT", "U_END", "B_STRT", "B_END", "I_STRT", "I_END", "EM_STRT",
  "EM_END", "TT_STRT", "TT_END", "STRONG_STRT", "STRONG_END", "SMALL_STRT",
  "SMALL_END", "SUB_STRT", "SUB_END", "SUP_STRT", "SUP_END", "SPECIAL",
  "GSYMBOLS", "FIG_STRT", "FIG_END", "FIGC_STRT", "FIGC_END", "IMG_STRT",
  "IMG_END", "IMG_SRC", "IMG_WT", "IMG_HT", "$accept", "ST", "LT", "head",
  "title", "body_content", "body", "para", "p", "center", "p1",
  "underline", "bold", "ital", "emp", "ttype", "strong", "small", "sub",
  "sup", "spec", "gsymb", "heading", "font", "fig", "fig1", "fig_caption",
  "br", "url", "name", "image", "tab", "tabdef", "row", "rowdef", "col1",
  "col", "dl", "dlist1", "dlist", "dt", "div", "ul", "ul1", "ol", "ol1",
  "list", "list1", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333
};
# endif

#define YYPACT_NINF -63

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-63)))

#define YYTABLE_NINF -70

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       1,     8,    24,   -63,    16,    21,   -63,    22,    23,   -63,
      27,    20,   -63,   119,   -63,   -63,   -63,   -63,    25,    26,
      29,    31,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -39,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,    -7,    28,    30,    18,    17,   -63,   -14,   149,
     -63,   -13,   -63,   -34,   -63,   -41,   -28,   -63,   -30,   -63,
      36,   -63,   -63,    44,    46,    48,    52,    56,    57,    58,
      60,    61,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,    62,   -63,   -63,   -63,    32,   -63,
     -63,    63,   -63,   -63,   -63,   -63,   -60,    64,     3,    65,
      50,   -63,    33,    34,    37,    38,    19,    14,    35,    15,
      40,    49,    74,    43,    47,    42,   -63,    45,    53,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,    66,    54,   -63,    83,   -63,    55,   -63,   -63,   -63,
      59,   -63,    77,    68,   -63
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     0,     0,     1,     0,     0,    18,
       0,     0,     4,     0,     3,     5,     6,    36,     0,     0,
       0,     0,    60,    58,    74,    18,    66,    59,    84,    84,
       0,     7,     8,    16,     9,    11,    17,    14,    15,    10,
      12,    13,     0,     0,     0,     0,     0,    71,     0,     0,
      63,     0,    77,     0,    79,     0,     0,    55,     0,    35,
       0,    19,    36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48,    49,    31,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    34,    33,    32,    50,
      51,    52,    53,    72,     0,    73,    76,    64,     0,    65,
      78,     0,    83,    82,    81,    80,     0,     0,     0,     0,
       0,    37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    61,     0,     0,    56,
      54,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,     0,     0,    67,     0,    85,     0,    57,    36,    70,
       0,    62,     0,    68,    75
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -63,   -63,   -63,   -63,   -63,   -63,    69,   -63,   -62,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -11,   -63,
      67,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -33,   -63,   -32,   -63,    76,   -63
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     5,     8,    10,    13,    31,    42,    74,
     111,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    32,    86,    33,    57,   108,    34,    87,    36,
      88,    37,    50,    51,    99,   123,   124,    38,    47,    48,
      95,    39,    40,    52,    41,    54,    53,   104
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     110,    59,    35,    28,     1,   101,    60,    29,   105,    61,
      28,   100,   101,     4,    29,   126,    93,    94,   127,    62,
     102,   103,   102,   103,     6,    97,    98,     7,     9,    12,
      11,    14,    15,    43,    44,    56,    27,    45,    35,    46,
      91,    92,   107,    63,   109,    64,    89,    65,   106,    66,
      90,    67,   112,    68,   113,    69,   114,    70,    59,    71,
     115,    72,    73,    60,   116,   117,   118,    56,   119,   120,
     121,   125,   128,   122,   129,   137,    62,   131,   136,   130,
     139,   141,   142,   143,   132,    59,   152,   133,   144,   145,
      60,   150,   134,    27,    49,   135,   149,    58,   138,   148,
      63,   153,    64,    62,    65,    55,    66,   140,    67,   -69,
      68,   154,    69,     0,    70,     0,    71,     0,    72,    73,
      27,     0,   146,     0,    56,     0,   147,    63,    16,    64,
     151,    65,     0,    66,    17,    67,    18,    68,    19,    69,
      20,    70,    21,    71,    22,    72,    73,    23,    24,     0,
       0,    56,     0,     0,    25,     0,    26,     0,     0,     0,
       0,     0,    27,    28,    17,     0,    18,    29,    19,     0,
      20,     0,    21,     0,    22,     0,     0,    23,    24,     0,
       0,     0,     0,     0,    25,    96,    26,     0,     0,    30,
       0,     0,    27,    28,     0,     0,     0,    29,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    30
};

static const yytype_int16 yycheck[] =
{
      62,     8,    13,    44,     3,    46,    13,    48,    49,    16,
      44,    45,    46,     5,    48,    75,    30,    31,    78,    26,
      53,    53,    55,    55,     0,    38,    39,    11,     7,     6,
       8,     4,    12,     8,     8,    74,    43,     8,    49,     8,
      22,    24,    72,    50,     8,    52,    18,    54,    76,    56,
      20,    58,     8,    60,     8,    62,     8,    64,     8,    66,
       8,    68,    69,    13,     8,     8,     8,    74,     8,     8,
       8,     8,     8,    41,    71,    61,    26,    27,    59,    14,
      65,    32,     8,    40,    51,     8,   148,    53,    41,    47,
      13,     8,    55,    43,    25,    57,    42,    30,    63,    33,
      50,    42,    52,    26,    54,    29,    56,    67,    58,    41,
      60,    34,    62,    -1,    64,    -1,    66,    -1,    68,    69,
      43,    -1,    77,    -1,    74,    -1,    73,    50,     9,    52,
      75,    54,    -1,    56,    15,    58,    17,    60,    19,    62,
      21,    64,    23,    66,    25,    68,    69,    28,    29,    -1,
      -1,    74,    -1,    -1,    35,    -1,    37,    -1,    -1,    -1,
      -1,    -1,    43,    44,    15,    -1,    17,    48,    19,    -1,
      21,    -1,    23,    -1,    25,    -1,    -1,    28,    29,    -1,
      -1,    -1,    -1,    -1,    35,    36,    37,    -1,    -1,    70,
      -1,    -1,    43,    44,    -1,    -1,    -1,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    80,    81,     5,    82,     0,    11,    83,     7,
      84,     8,     6,    85,     4,    12,     9,    15,    17,    19,
      21,    23,    25,    28,    29,    35,    37,    43,    44,    48,
      70,    86,   101,   103,   106,   107,   108,   110,   116,   120,
     121,   123,    87,     8,     8,     8,     8,   117,   118,    85,
     111,   112,   122,   125,   124,   125,    74,   104,   109,     8,
      13,    16,    26,    50,    52,    54,    56,    58,    60,    62,
      64,    66,    68,    69,    88,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   102,   107,   109,    18,
      20,    22,    24,    30,    31,   119,    36,    38,    39,   113,
      45,    46,   121,   123,   126,    49,    76,    72,   105,     8,
      87,    89,     8,     8,     8,     8,     8,     8,     8,     8,
       8,     8,    41,   114,   115,     8,    75,    78,     8,    71,
      14,    27,    51,    53,    55,    57,    59,    61,    63,    65,
      67,    32,     8,    40,    41,    47,    77,    73,    33,    42,
       8,    75,    87,    42,    34
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    79,    80,    81,    82,    83,    84,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    86,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   101,   101,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   109,   110,   111,   112,   112,   113,   114,   115,
     115,   116,   117,   118,   118,   119,   120,   121,   122,   123,
     124,   125,   125,   125,   125,   126
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     4,     3,     3,     3,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     0,     3,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     0,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       3,     3,     3,     3,     3,     2,     3,     3,     1,     1,
       1,     3,     5,     2,     2,     2,     0,     3,     4,     4,
       3,     2,     2,     2,     0,     6,     3,     2,     2,     2,
       2,     2,     2,     2,     0,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 41 "P7.y" /* yacc.c:1652  */
    {

		//ff=fopen("Ldoc.tex","w");
		fprintf(ff,"%s",eval((yyvsp[0].a)));
		fclose(ff);
	   }
#line 1446 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 3:
#line 47 "P7.y" /* yacc.c:1652  */
    { (yyval.a) = newast('T',(yyvsp[-2].a),(yyvsp[-1].a));}
#line 1452 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 4:
#line 49 "P7.y" /* yacc.c:1652  */
    { (yyval.a) = newast('T',newstr((yyvsp[-2].p)),(yyvsp[-1].a));}
#line 1458 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 5:
#line 51 "P7.y" /* yacc.c:1652  */
    { char *p = (char *)malloc(strlen((yyvsp[-2].p))+strlen((yyvsp[-1].p))); 
									strcat(p,(yyvsp[-2].p)); 
									strcat(p,(yyvsp[-1].p)); 
									(yyval.a) = newast('T',newstr(p),newstr((yyvsp[0].p)));
								 }
#line 1468 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 6:
#line 57 "P7.y" /* yacc.c:1652  */
    { (yyval.a) = newast('T',(yyvsp[-1].a),newstr((yyvsp[0].p)));}
#line 1474 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 7:
#line 59 "P7.y" /* yacc.c:1652  */
    {(yyval.a) = newast('T',(yyvsp[-1].a),(yyvsp[0].a));}
#line 1480 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 8:
#line 60 "P7.y" /* yacc.c:1652  */
    {(yyval.a) = newast('T',(yyvsp[-1].a),(yyvsp[0].a));}
#line 1486 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 9:
#line 61 "P7.y" /* yacc.c:1652  */
    {(yyval.a) = newast('T',(yyvsp[-1].a),(yyvsp[0].a));}
#line 1492 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 10:
#line 62 "P7.y" /* yacc.c:1652  */
    {(yyval.a) = newast('T',(yyvsp[-1].a),(yyvsp[0].a));}
#line 1498 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 11:
#line 63 "P7.y" /* yacc.c:1652  */
    {(yyval.a) = newast('T',(yyvsp[-1].a),(yyvsp[0].a));}
#line 1504 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 12:
#line 64 "P7.y" /* yacc.c:1652  */
    {(yyval.a) = newast('T',(yyvsp[-1].a),(yyvsp[0].a));}
#line 1510 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 13:
#line 65 "P7.y" /* yacc.c:1652  */
    {(yyval.a) = newast('T',(yyvsp[-1].a),(yyvsp[0].a));}
#line 1516 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 14:
#line 66 "P7.y" /* yacc.c:1652  */
    {(yyval.a) = newast('T',(yyvsp[-1].a),(yyvsp[0].a));}
#line 1522 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 15:
#line 67 "P7.y" /* yacc.c:1652  */
    {(yyval.a) = newast('T',(yyvsp[-1].a),(yyvsp[0].a));}
#line 1528 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 16:
#line 68 "P7.y" /* yacc.c:1652  */
    {(yyval.a) = newast('T',(yyvsp[-1].a),(yyvsp[0].a));}
#line 1534 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 17:
#line 69 "P7.y" /* yacc.c:1652  */
    {(yyval.a) = newast('T',(yyvsp[-1].a),(yyvsp[0].a));}
#line 1540 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 18:
#line 70 "P7.y" /* yacc.c:1652  */
    {(yyval.a) =newstr("");}
#line 1546 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 19:
#line 72 "P7.y" /* yacc.c:1652  */
    {(yyval.a) = newast('T',newstr((yyvsp[-2].p)),(yyvsp[-1].a));}
#line 1552 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 20:
#line 74 "P7.y" /* yacc.c:1652  */
    {(yyval.a) = newast('T',(yyvsp[-1].a),(yyvsp[0].a));}
#line 1558 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 21:
#line 75 "P7.y" /* yacc.c:1652  */
    {(yyval.a) = newast('T',(yyvsp[-1].a),(yyvsp[0].a));}
#line 1564 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 22:
#line 76 "P7.y" /* yacc.c:1652  */
    {(yyval.a) = newast('T',(yyvsp[-1].a),(yyvsp[0].a));}
#line 1570 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 23:
#line 77 "P7.y" /* yacc.c:1652  */
    {(yyval.a) = newast('T',(yyvsp[-1].a),(yyvsp[0].a));}
#line 1576 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 24:
#line 78 "P7.y" /* yacc.c:1652  */
    {(yyval.a) = newast('T',(yyvsp[-1].a),(yyvsp[0].a));}
#line 1582 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 25:
#line 79 "P7.y" /* yacc.c:1652  */
    {(yyval.a) = newast('T',(yyvsp[-1].a),(yyvsp[0].a));}
#line 1588 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 26:
#line 80 "P7.y" /* yacc.c:1652  */
    {(yyval.a) = newast('T',(yyvsp[-1].a),(yyvsp[0].a));}
#line 1594 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 27:
#line 81 "P7.y" /* yacc.c:1652  */
    {(yyval.a) = newast('T',(yyvsp[-1].a),(yyvsp[0].a));}
#line 1600 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 28:
#line 82 "P7.y" /* yacc.c:1652  */
    {(yyval.a) = newast('T',(yyvsp[-1].a),(yyvsp[0].a));}
#line 1606 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 29:
#line 83 "P7.y" /* yacc.c:1652  */
    {(yyval.a) = newast('T',(yyvsp[-1].a),(yyvsp[0].a));}
#line 1612 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 30:
#line 84 "P7.y" /* yacc.c:1652  */
    {(yyval.a) = newast('T',(yyvsp[-1].a),(yyvsp[0].a));}
#line 1618 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 31:
#line 85 "P7.y" /* yacc.c:1652  */
    {(yyval.a) = newast('T',(yyvsp[-1].a),(yyvsp[0].a));}
#line 1624 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 32:
#line 86 "P7.y" /* yacc.c:1652  */
    {(yyval.a) = newast('T',(yyvsp[-1].a),(yyvsp[0].a));}
#line 1630 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 33:
#line 87 "P7.y" /* yacc.c:1652  */
    {(yyval.a) = newast('T',(yyvsp[-1].a),(yyvsp[0].a));}
#line 1636 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 34:
#line 88 "P7.y" /* yacc.c:1652  */
    {(yyval.a) = newast('T',(yyvsp[-1].a),(yyvsp[0].a));}
#line 1642 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 35:
#line 89 "P7.y" /* yacc.c:1652  */
    {(yyval.a) = newast('T',(yyvsp[-1].a),newstr((yyvsp[0].p)));}
#line 1648 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 36:
#line 90 "P7.y" /* yacc.c:1652  */
    {(yyval.a) =newstr("");}
#line 1654 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 37:
#line 93 "P7.y" /* yacc.c:1652  */
    {(yyval.a)=newast('T',newstr((yyvsp[-1].p)),(yyvsp[0].a));}
#line 1660 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 38:
#line 95 "P7.y" /* yacc.c:1652  */
    {(yyval.a) = newast('T',(yyvsp[-1].a),newstr("\\end{center} "));}
#line 1666 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 39:
#line 98 "P7.y" /* yacc.c:1652  */
    {	
			char *p = (char *)malloc(strlen((yyvsp[-1].p))+3);
			strcat(p,(yyvsp[-1].p));
			strcat(p,"} ");
			(yyval.a) = newast('T',newstr((yyvsp[-2].p)),newstr(p));
		}
#line 1677 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 40:
#line 105 "P7.y" /* yacc.c:1652  */
    {	
			char *p = (char *)malloc(strlen((yyvsp[-1].p))+3);
			strcat(p,(yyvsp[-1].p));
			strcat(p,"} ");
			(yyval.a) = newast('T',newstr((yyvsp[-2].p)),newstr(p));
		}
#line 1688 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 41:
#line 112 "P7.y" /* yacc.c:1652  */
    {	
			char *p = (char *)malloc(strlen((yyvsp[-1].p))+3);
			strcat(p,(yyvsp[-1].p));
			strcat(p,"} ");
			(yyval.a) = newast('T',newstr((yyvsp[-2].p)),newstr(p));
		}
#line 1699 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 42:
#line 119 "P7.y" /* yacc.c:1652  */
    {	
			char *p = (char *)malloc(strlen((yyvsp[-1].p))+3);
			strcat(p,(yyvsp[-1].p));
			strcat(p,"} ");
			(yyval.a) = newast('T',newstr((yyvsp[-2].p)),newstr(p));
		}
#line 1710 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 43:
#line 126 "P7.y" /* yacc.c:1652  */
    {	
			char *p = (char *)malloc(strlen((yyvsp[-1].p))+3);
			strcat(p,(yyvsp[-1].p));
			strcat(p,"} ");
			(yyval.a) = newast('T',newstr((yyvsp[-2].p)),newstr(p));
		}
#line 1721 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 44:
#line 134 "P7.y" /* yacc.c:1652  */
    {	
			char *p = (char *)malloc(strlen((yyvsp[-1].p))+3);
			strcat(p,(yyvsp[-1].p));
			strcat(p,"} ");
			(yyval.a) = newast('T',newstr((yyvsp[-2].p)),newstr(p));
		}
#line 1732 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 45:
#line 141 "P7.y" /* yacc.c:1652  */
    {	
			char *p = (char *)malloc(strlen((yyvsp[-1].p))+3);
			strcat(p,(yyvsp[-1].p));
			strcat(p,"} ");
			(yyval.a) = newast('T',newstr((yyvsp[-2].p)),newstr(p));
		}
#line 1743 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 46:
#line 149 "P7.y" /* yacc.c:1652  */
    {
			char *p = (char *)malloc(strlen((yyvsp[-1].p))+3);
			strcat(p,(yyvsp[-1].p));
			strcat(p,"}$ ");
			(yyval.a) = newast('T',newstr((yyvsp[-2].p)),newstr(p));
		}
#line 1754 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 47:
#line 156 "P7.y" /* yacc.c:1652  */
    {
			char *p = (char *)malloc(strlen((yyvsp[-1].p))+3);
			strcat(p,(yyvsp[-1].p));
			strcat(p,"}$ ");
			(yyval.a) = newast('T',newstr((yyvsp[-2].p)),newstr(p));
		}
#line 1765 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 48:
#line 162 "P7.y" /* yacc.c:1652  */
    { (yyval.a) = newast('T',NULL,newstr((yyvsp[0].p)));}
#line 1771 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 49:
#line 165 "P7.y" /* yacc.c:1652  */
    { (yyval.a) = newast('T',NULL,newstr((yyvsp[0].p)));}
#line 1777 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 50:
#line 170 "P7.y" /* yacc.c:1652  */
    {
			char *p = (char *)malloc(strlen((yyvsp[-1].p))+3);
			strcat(p,(yyvsp[-1].p));
			strcat(p,"}");
			(yyval.a) = newast('T',newstr((yyvsp[-2].p)),newstr(p));
		}
#line 1788 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 51:
#line 177 "P7.y" /* yacc.c:1652  */
    {
			char *p = (char *)malloc(strlen((yyvsp[-1].p))+3);
			strcat(p,(yyvsp[-1].p));
			strcat(p,"}");
			(yyval.a) = newast('T',newstr((yyvsp[-2].p)),newstr(p));
		}
#line 1799 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 52:
#line 184 "P7.y" /* yacc.c:1652  */
    {
			char *p = (char *)malloc(strlen((yyvsp[-1].p))+3);
			strcat(p,(yyvsp[-1].p));
			strcat(p,"}");
			(yyval.a) = newast('T',newstr((yyvsp[-2].p)),newstr(p));
		}
#line 1810 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 53:
#line 191 "P7.y" /* yacc.c:1652  */
    {
			char *p = (char *)malloc(strlen((yyvsp[-1].p))+3);
			strcat(p,(yyvsp[-1].p));
			strcat(p,"}");
			(yyval.a) = newast('T',newstr((yyvsp[-2].p)),newstr(p));
		}
#line 1821 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 54:
#line 199 "P7.y" /* yacc.c:1652  */
    {
			char *p = (char *) malloc(strlen((yyvsp[-1].p))+20);
			char * fontnam = (char *)malloc(15);
			char c = (yyvsp[-2].p)[12];
			if(c=='0'|| c=='1')
				strcpy(fontnam,"\\tiny");
			else if (c=='2')
				strcpy(fontnam,"\\scriptsize");
			else if (c=='3')
				strcpy(fontnam,"\\footnotesize");
			else if (c=='4')
				strcpy(fontnam,"\\small");
			else if (c=='5') 
				strcpy(fontnam,"\\normalsize");
			else if (c=='6')
				strcpy(fontnam,"\\large");
			else if (c=='7')
				strcpy(fontnam,"\\LARGE");
			else if (c=='8')
				strcpy(fontnam,"\\huge");
			else
				strcpy(fontnam,"\\Huge");

			strcpy(p,"{ ");
			strcat(p,fontnam);
			strcat(p," ");
			strcat(p, (yyvsp[-1].p));
			strcat(p, " }");
			(yyval.a) = newast('T',NULL,newstr(p));
		}
#line 1856 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 55:
#line 230 "P7.y" /* yacc.c:1652  */
    {(yyval.a)=newast('T',newstr((yyvsp[-1].p)),(yyvsp[0].a));}
#line 1862 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 56:
#line 232 "P7.y" /* yacc.c:1652  */
    {(yyval.a)=newast('T',(yyvsp[-2].a),(yyvsp[-1].a));}
#line 1868 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 57:
#line 234 "P7.y" /* yacc.c:1652  */
    { (yyval.a)=newast('T',newstr("\\caption{"),newstr(strcat((yyvsp[0].p),"} \\end{figure}")));}
#line 1874 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 58:
#line 236 "P7.y" /* yacc.c:1652  */
    {(yyval.a) = newast('T',NULL,newstr("\\newline "));}
#line 1880 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 59:
#line 237 "P7.y" /* yacc.c:1652  */
    {(yyval.a) = newast('T',NULL,newstr((yyvsp[0].p)));}
#line 1886 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 60:
#line 238 "P7.y" /* yacc.c:1652  */
    {(yyval.a) = newast('T',NULL,newstr((yyvsp[0].p)));}
#line 1892 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 61:
#line 240 "P7.y" /* yacc.c:1652  */
    { 
							char *p = (char *)malloc(200);
							strcpy(p,"{");
							strcat(p,(yyvsp[-1].p));
							strcat(p,"}");
							(yyval.a)=newast('T',newstr("\\includegraphics"),newstr(p));
								}
#line 1904 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 62:
#line 248 "P7.y" /* yacc.c:1652  */
    {
							char *p = (char *)malloc(200);
							strcpy(p,"\\includegraphics");
							strcat(p,"[width=");
							strcat(p,(yyvsp[-1].p));
							strcat(p,"px, height=");
							strcat(p,(yyvsp[-2].p));
							strcat(p,"px ]{");
                            strcat(p,(yyvsp[-3].p));
                            strcat(p,"}");
                            (yyval.a) = newast('T',NULL,newstr(p));
						}
#line 1921 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 63:
#line 261 "P7.y" /* yacc.c:1652  */
    {
						

						rows=0;cols=0;
						char *ch = (char *)malloc(50);
						int no_cols=cols_1/rows_1,i;
						strcat(ch,"\\begin{tabular}{");	
						if(border=='1')
						{
						for(i=0;i<no_cols;i++)
							strcat(ch,"|l");
						strcat(ch,"|}");
						char *p = (char *) malloc(150);
						//strcpy(p,$1);
						strcat(p,ch);
						strcat(p,"\\hline ");
						(yyval.a)=newast('T',newstr(p),(yyvsp[0].a));
						}
						else
						{
						for(i=0;i<no_cols;i++)
						strcat(ch,"l ");
						strcat(ch," }");
						char *p = (char *) malloc(150);
						//strcpy(p,$1);
						strcat(p,ch);
						//strcat(p,"\\hline ");
						(yyval.a)=newast('T',newstr(p),(yyvsp[0].a));
						}
						}
#line 1956 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 64:
#line 293 "P7.y" /* yacc.c:1652  */
    { 
					(yyval.a) = newast('T',(yyvsp[-1].a),newstr("\\end{tabular} \\newline"));
					cols_1=cols; rows_1=rows;
					
					}
#line 1966 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 65:
#line 299 "P7.y" /* yacc.c:1652  */
    {(yyval.a)=newast('T',(yyvsp[-1].a),(yyvsp[0].a));}
#line 1972 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 66:
#line 300 "P7.y" /* yacc.c:1652  */
    {(yyval.a) =newstr("");}
#line 1978 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 67:
#line 303 "P7.y" /* yacc.c:1652  */
    {
								rows++;	
								if(border=='1')
								(yyval.a) = newast('T',(yyvsp[-1].a),newstr("\\\\ \\hline "));
								else
								(yyval.a) = newast('T',(yyvsp[-1].a),newstr("\\\\ "));	
								}
#line 1990 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 68:
#line 311 "P7.y" /* yacc.c:1652  */
    {
									cols++;
									char * p = (char *)malloc(strlen((yyvsp[-1].p))+4);
									strcat(p,(yyvsp[-1].p));
									(yyval.a)=newast('T',(yyvsp[-3].a),newstr(p));
								}
#line 2001 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 69:
#line 319 "P7.y" /* yacc.c:1652  */
    {
									cols++;
									char * p = (char *)malloc(strlen((yyvsp[-1].p))+4);
									strcat(p,(yyvsp[-1].p));
									strcat(p," & ");
									(yyval.a)=newast('T',(yyvsp[-3].a),newstr(p));
								}
#line 2013 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 70:
#line 326 "P7.y" /* yacc.c:1652  */
    {
							cols++;

							char * p = (char *)malloc(strlen((yyvsp[-1].p))+5);
							strcpy(p,(yyvsp[-1].p));
							strcat(p," & ");
							(yyval.a) = newstr(p);
							}
#line 2026 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 71:
#line 335 "P7.y" /* yacc.c:1652  */
    {(yyval.a)=newast('T',newstr("\\begin{description}"),(yyvsp[0].a));}
#line 2032 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 72:
#line 337 "P7.y" /* yacc.c:1652  */
    {(yyval.a)=newast('T',(yyvsp[-1].a),newstr("\\end{description}"));}
#line 2038 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 73:
#line 338 "P7.y" /* yacc.c:1652  */
    {(yyval.a) = newast('T',(yyvsp[-1].a),(yyvsp[0].a));}
#line 2044 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 74:
#line 339 "P7.y" /* yacc.c:1652  */
    {(yyval.a) =newstr("");}
#line 2050 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 75:
#line 341 "P7.y" /* yacc.c:1652  */
    {
							char * p = (char *)malloc(strlen((yyvsp[-4].p))+7);
							strcpy(p,"\\item[");
							strcat(p,(yyvsp[-4].p));
							strcat(p,"] ");
							//strcat(p,$5);
							(yyval.a) = newast('T',newstr(p),(yyvsp[-1].a));
						}
#line 2063 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 76:
#line 351 "P7.y" /* yacc.c:1652  */
    {
				(yyval.a) = newast('T',newstr("\\section*{}"),(yyvsp[-1].a));
			}
#line 2071 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 77:
#line 355 "P7.y" /* yacc.c:1652  */
    { (yyval.a) = newast('T',newstr((yyvsp[-1].p)),(yyvsp[0].a));}
#line 2077 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 78:
#line 356 "P7.y" /* yacc.c:1652  */
    { (yyval.a) = newast('T',(yyvsp[-1].a),newstr((yyvsp[0].p)));}
#line 2083 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 79:
#line 357 "P7.y" /* yacc.c:1652  */
    { (yyval.a) = newast('T',newstr((yyvsp[-1].p)),(yyvsp[0].a));}
#line 2089 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 80:
#line 358 "P7.y" /* yacc.c:1652  */
    { (yyval.a) = newast('T',(yyvsp[-1].a),newstr((yyvsp[0].p)));}
#line 2095 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 81:
#line 359 "P7.y" /* yacc.c:1652  */
    { (yyval.a) = newast('T',(yyvsp[-1].a),(yyvsp[0].a));}
#line 2101 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 82:
#line 360 "P7.y" /* yacc.c:1652  */
    { (yyval.a) = newast('T',(yyvsp[-1].a),(yyvsp[0].a));}
#line 2107 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 83:
#line 361 "P7.y" /* yacc.c:1652  */
    { (yyval.a) = newast('T',(yyvsp[-1].a),(yyvsp[0].a));}
#line 2113 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 84:
#line 362 "P7.y" /* yacc.c:1652  */
    {(yyval.a) =newstr("");}
#line 2119 "P7.tab.c" /* yacc.c:1652  */
    break;

  case 85:
#line 363 "P7.y" /* yacc.c:1652  */
    {(yyval.a) = newast('T',newstr((yyvsp[-2].p)),newstr((yyvsp[-1].p)));}
#line 2125 "P7.tab.c" /* yacc.c:1652  */
    break;


#line 2129 "P7.tab.c" /* yacc.c:1652  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
