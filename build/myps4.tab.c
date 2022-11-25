/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1





# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
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

#include "myps4.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_PICTURE = 3,                    /* PICTURE  */
  YYSYMBOL_STRING = 4,                     /* STRING  */
  YYSYMBOL_START = 5,                      /* START  */
  YYSYMBOL_END = 6,                        /* END  */
  YYSYMBOL_FOR = 7,                        /* FOR  */
  YYSYMBOL_TO = 8,                         /* TO  */
  YYSYMBOL_STEP = 9,                       /* STEP  */
  YYSYMBOL_DO = 10,                        /* DO  */
  YYSYMBOL_DONE = 11,                      /* DONE  */
  YYSYMBOL_VAR = 12,                       /* VAR  */
  YYSYMBOL_ID = 13,                        /* ID  */
  YYSYMBOL_TINT = 14,                      /* TINT  */
  YYSYMBOL_TNUM = 15,                      /* TNUM  */
  YYSYMBOL_TSTRING = 16,                   /* TSTRING  */
  YYSYMBOL_TPOINT = 17,                    /* TPOINT  */
  YYSYMBOL_TPATH = 18,                     /* TPATH  */
  YYSYMBOL_TTERM = 19,                     /* TTERM  */
  YYSYMBOL_LATE_BIND = 20,                 /* LATE_BIND  */
  YYSYMBOL_INT = 21,                       /* INT  */
  YYSYMBOL_FLOAT = 22,                     /* FLOAT  */
  YYSYMBOL_PATHOPEN = 23,                  /* PATHOPEN  */
  YYSYMBOL_PATHCLOSE = 24,                 /* PATHCLOSE  */
  YYSYMBOL_MOD = 25,                       /* MOD  */
  YYSYMBOL_26_ = 26,                       /* '+'  */
  YYSYMBOL_27_ = 27,                       /* '-'  */
  YYSYMBOL_28_ = 28,                       /* '*'  */
  YYSYMBOL_29_ = 29,                       /* '/'  */
  YYSYMBOL_30_ = 30,                       /* ':'  */
  YYSYMBOL_31_ = 31,                       /* ';'  */
  YYSYMBOL_32_ = 32,                       /* '='  */
  YYSYMBOL_33_ = 33,                       /* '('  */
  YYSYMBOL_34_ = 34,                       /* ')'  */
  YYSYMBOL_35_ = 35,                       /* ','  */
  YYSYMBOL_36_ = 36,                       /* '{'  */
  YYSYMBOL_37_ = 37,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 38,                  /* $accept  */
  YYSYMBOL_program = 39,                   /* program  */
  YYSYMBOL_declarations = 40,              /* declarations  */
  YYSYMBOL_commands = 41,                  /* commands  */
  YYSYMBOL_declaration = 42,               /* declaration  */
  YYSYMBOL_command = 43,                   /* command  */
  YYSYMBOL_type = 44,                      /* type  */
  YYSYMBOL_assignment = 45,                /* assignment  */
  YYSYMBOL_late_binding = 46,              /* late_binding  */
  YYSYMBOL_call = 47,                      /* call  */
  YYSYMBOL_termcall = 48,                  /* termcall  */
  YYSYMBOL_forloop = 49,                   /* forloop  */
  YYSYMBOL_expression = 50,                /* expression  */
  YYSYMBOL_expression_list = 51,           /* expression_list  */
  YYSYMBOL_nonempty_expression_list = 52,  /* nonempty_expression_list  */
  YYSYMBOL_factor = 53,                    /* factor  */
  YYSYMBOL_number = 54,                    /* number  */
  YYSYMBOL_point = 55,                     /* point  */
  YYSYMBOL_path = 56,                      /* path  */
  YYSYMBOL_term = 57,                      /* term  */
  YYSYMBOL_variable = 58,                  /* variable  */
  YYSYMBOL_eval_func = 59,                 /* eval_func  */
  YYSYMBOL_string = 60                     /* string  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 60 "../myps4.y"

#include <iostream>
#include <list>
#include <map>
#include <set>

using namespace std;

extern int yylex();
extern FILE *yyin;
extern int yylineno;

const char *PREAMBLE = "%!PS-Adobe\n%%Creator: myps4 compiler \n%%Title: ";

/* Every operator is directly mapped to a sequence of postscript commands as far as possible. The
 * transformations and "clip" are handled in a special way, since they need to defer the execution
 * of the term-argument until the current matrix is adjusted. Paths are represented by a procedure
 * that generates them, so operations that construct paths must also be handled in a special way, so
 * their result is returned in a form protected from execution. The operation "write" has 2
 * signatures. This is handled in an ad hoc fashion in the rules. */
map<string, string> OPERATION_TABLE = {
    {string("draw"), string("cvx exec stroke setmatrix")},
    {string("fill"), string("cvx exec fill setmatrix")},
    {string("setcolor"), string("setrgbcolor")},
    {string("setdrawstyle"), string("2 array astore 0 setdash")},
    {string("setfont"), string("selectfont")},
    {string("setlinewidth"), string("setlinewidth")},
    {string("arc"), string("newpath arc")},
    {string("ellipse"), string("newpath 6 -2 roll translate 4 -2 roll dup 3 1 roll div 1 scale \
3 1 roll 0 0 5 2 roll arc")},
    {string("string2path"), string("3 -2 roll moveto true charpath")},
    {string("num2string"), string("100 string cvs")},
    {string("write"), string("3 -2 roll moveto show")},

    {string("rotate"), string("\
matrix currentmatrix \
3 1 roll \
2 -1 roll \
rotate \
exec \
setmatrix")},

    {string("scale"), string("\
matrix currentmatrix \
4 1 roll \
3 -2 roll \
scale \
exec \
setmatrix")},

    {string("translate"), string("\
matrix currentmatrix \
4 1 roll \
3 -2 roll \
translate \
exec \
setmatrix")},

    {string("clip"), string("\
clipsave \
exch cvx exec \
clip \
setmatrix \
exec \
cliprestore")},

    {string("sin"), string("sin")},
    {string("cos"), string("cos")},
    {string("ln"), string("ln")},
    {string("abs"), string("abs")},
    {string("exp"), string("exp")},
    {string("random"), string("exch dup 3 1 roll sub 1 add rand exch mod add")}
};

/* These operations must defer the execution of their last argument until the current matrix has
 * been modiefied. If the last argument is between curly braces in the myPS code, this would happen
 * anyway. Otherwise, we must put curly braces around Whatever postscript code this argument expands
 * to. I found it simplest to always put the braces. */
map<string, int> DEFERRING_OPERATIONS = {
    {string("rotate"), 1},
    {string("scale"), 2},
    {string("translate"), 2},
    {string("clip"), 1},
};

/* These operations expand to postscript code between curly braces with the "executable" attribute
 * disabled, i.e. with the "literal" attribute. This code can be used to construct a path. Simply
 * append a "cvx" to make it executable and execute it when needed. */
set<string> PATH_CONSTRUCTORS = {
    string("arc"),
    string("ellipse"),
    string("string2path")
};

/* This function checks if <code> is enclosed in curly braces. It is needed to implement the rule,
 * that curly braces around the last argument of the transformations and of "clip" can be omitted if
 * that argument is only one command. */
int
is_block(string code)
{
    int nopen;
    auto b = code.begin(), e = code.end(), c = b;

    if(code[0] != '{')
        return 0;
    nopen = 0;
    c = b;
    c++;
    nopen = 1;
    while(c != e) {
        if(*c == '{')
            nopen++;
        else if(*c == '}')
            nopen--;
        if(nopen == 0) {
            c++;
            if(c == e) {
                return 1;
            }
            else
                return 0;
            c--;
        }
        c++;
    }

    return 0;
}

void
yyerror(ComplexNode **root, const char *s)
{
    cerr << "Error (line " << yylineno << ")\n" << s << "\n\n";
}

string
strip_quotes(const string &s)
{
    return s.substr(1, s.size() - 2);
}

string
escape_parentheses(const string &s)
{
    string res;

    for(auto c = s.begin(); c != s.end(); c++) {
        if(*c == '(' || *c == ')')
            res += '\\';
        res += *c;
    }

    return res;
}


#line 320 "myps4.tab.c"


#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

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
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   168

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  54
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  107

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   280


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      33,    34,    28,    26,    35,    27,     2,    29,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    30,    31,
       2,    32,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    36,     2,    37,     2,     2,     2,     2,
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
      25
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   217,   217,   221,   222,   224,   225,   227,   229,   230,
     231,   232,   233,   235,   236,   237,   238,   239,   240,   242,
     249,   256,   275,   277,   283,   284,   285,   286,   287,   288,
     289,   291,   293,   295,   297,   299,   301,   302,   305,   306,
     312,   313,   314,   315,   316,   317,   318,   320,   321,   323,
     326,   337,   340,   342,   363
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  static const char *const yy_sname[] =
  {
  "end of file", "error", "invalid token", "PICTURE", "STRING", "START",
  "END", "FOR", "TO", "STEP", "DO", "DONE", "VAR", "ID", "TINT", "TNUM",
  "TSTRING", "TPOINT", "TPATH", "TTERM", "LATE_BIND", "INT", "FLOAT",
  "PATHOPEN", "PATHCLOSE", "MOD", "'+'", "'-'", "'*'", "'/'", "':'", "';'",
  "'='", "'('", "')'", "','", "'{'", "'}'", "$accept", "program",
  "declarations", "commands", "declaration", "command", "type",
  "assignment", "late_binding", "call", "termcall", "forloop",
  "expression", "expression_list", "nonempty_expression_list", "factor",
  "number", "point", "path", "term", "variable", "eval_func", "string", YY_NULLPTR
  };
  return yy_sname[yysymbol];
}
#endif

#define YYPACT_NINF (-38)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      13,    25,    33,   -38,    26,   -38,    29,    47,    26,    39,
       0,   -38,   149,    43,   -16,    57,     0,   -38,   -38,   -38,
     -38,    45,   -38,   -38,   -38,   -38,   -38,   -38,    48,    53,
      28,    46,   -38,    28,   -38,   -38,   -38,   -38,    52,    54,
     -38,   -38,    28,    44,    49,    28,     0,   -38,   124,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,    28,   109,    56,
     -38,    28,    28,    62,    28,   -38,    28,   -38,    76,    51,
      28,    28,    28,    28,    28,   -38,   131,    28,    60,    -6,
      58,   -38,    87,    98,   -38,    28,   -38,   -17,    31,    31,
     -38,   -38,   -38,   -38,   -38,    28,   -38,   -38,   -38,   114,
      -1,   -38,    28,    71,     0,    82,   -38
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,    54,     3,     1,     0,     0,     3,     0,
       5,     4,     0,     0,     0,     0,     5,     8,     9,    10,
      11,     0,    13,    14,    15,    16,    17,    18,     0,     0,
       0,     0,    22,    36,     2,     6,    12,     7,     0,    52,
      47,    48,     0,     0,     0,     0,     5,    35,     0,    24,
      40,    42,    43,    46,    44,    45,    41,     0,    38,     0,
      37,     0,    36,     0,     0,    25,     0,    26,     0,     0,
       0,     0,     0,     0,     0,    20,     0,     0,     0,     0,
       0,    50,     0,     0,    27,     0,    51,    34,    30,    31,
      32,    33,    19,    39,    21,     0,    53,    28,    29,     0,
       0,    49,     0,     0,     5,     0,    23
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -38,   -38,    99,   -15,   -38,   -38,   -38,   -38,   -38,   -38,
     -38,   -10,   -27,    55,   -37,    30,   -38,   -38,   -38,   -38,
     -38,   -38,    94
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     7,    15,     8,    16,    28,    17,    18,    19,
      20,    47,    58,    59,    60,    49,    50,    51,    52,    53,
      54,    55,    56
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      21,    35,    95,    48,    30,    63,    21,    13,   102,    71,
      72,    73,    74,    14,    31,    32,     1,    33,    68,    70,
      71,    72,    73,    74,    70,    71,    72,    73,    74,     3,
      76,    69,     3,     5,    79,    13,    21,    82,     6,    83,
      93,    39,     9,    87,    88,    89,    90,    91,     3,    40,
      41,    42,    10,     3,    43,    44,    29,    39,    99,    73,
      74,    45,    39,    34,    46,    40,    41,    42,   100,    12,
      40,    41,    42,    65,    67,   103,    36,    64,    57,    37,
      46,   104,    66,    38,    61,    46,    81,    62,    86,   105,
      78,    94,    96,   106,    21,     4,    70,    71,    72,    73,
      74,    70,    71,    72,    73,    74,     0,    11,     0,     0,
      84,    85,    70,    71,    72,    73,    74,    80,     0,     0,
       0,    97,    85,    70,    71,    72,    73,    74,     0,     0,
       0,     0,    98,    85,    70,    71,    72,    73,    74,    70,
      71,    72,    73,    74,    77,     0,     0,     0,   101,    70,
      71,    72,    73,    74,     0,    75,    70,    71,    72,    73,
      74,     0,    92,    22,    23,    24,    25,    26,    27
};

static const yytype_int8 yycheck[] =
{
      10,    16,     8,    30,    20,    42,    16,     7,     9,    26,
      27,    28,    29,    13,    30,    31,     3,    33,    45,    25,
      26,    27,    28,    29,    25,    26,    27,    28,    29,     4,
      57,    46,     4,     0,    61,     7,    46,    64,    12,    66,
      77,    13,    13,    70,    71,    72,    73,    74,     4,    21,
      22,    23,     5,     4,    26,    27,    13,    13,    85,    28,
      29,    33,    13,     6,    36,    21,    22,    23,    95,    30,
      21,    22,    23,    43,    44,   102,    31,    33,    32,    31,
      36,    10,    33,    30,    32,    36,    24,    33,    37,   104,
      34,    31,    34,    11,   104,     1,    25,    26,    27,    28,
      29,    25,    26,    27,    28,    29,    -1,     8,    -1,    -1,
      34,    35,    25,    26,    27,    28,    29,    62,    -1,    -1,
      -1,    34,    35,    25,    26,    27,    28,    29,    -1,    -1,
      -1,    -1,    34,    35,    25,    26,    27,    28,    29,    25,
      26,    27,    28,    29,    35,    -1,    -1,    -1,    34,    25,
      26,    27,    28,    29,    -1,    31,    25,    26,    27,    28,
      29,    -1,    31,    14,    15,    16,    17,    18,    19
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    39,     4,    60,     0,    12,    40,    42,    13,
       5,    40,    30,     7,    13,    41,    43,    45,    46,    47,
      48,    49,    14,    15,    16,    17,    18,    19,    44,    13,
      20,    30,    31,    33,     6,    41,    31,    31,    30,    13,
      21,    22,    23,    26,    27,    33,    36,    49,    50,    53,
      54,    55,    56,    57,    58,    59,    60,    32,    50,    51,
      52,    32,    33,    52,    33,    53,    33,    53,    50,    41,
      25,    26,    27,    28,    29,    31,    50,    35,    34,    50,
      51,    24,    50,    50,    34,    35,    37,    50,    50,    50,
      50,    50,    31,    52,    31,     8,    34,    34,    34,    50,
      50,    34,     9,    50,    10,    41,    11
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    38,    39,    40,    40,    41,    41,    42,    43,    43,
      43,    43,    43,    44,    44,    44,    44,    44,    44,    45,
      46,    47,    48,    49,    50,    50,    50,    50,    50,    50,
      50,    50,    50,    50,    50,    50,    51,    51,    52,    52,
      53,    53,    53,    53,    53,    53,    53,    54,    54,    55,
      56,    57,    58,    59,    60
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     6,     0,     2,     0,     2,     5,     1,     1,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     5,
       4,     5,     2,    12,     1,     2,     2,     3,     4,     4,
       3,     3,     3,     3,     3,     1,     0,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       3,     3,     1,     4,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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
        yyerror (root, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, root); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, ComplexNode **root)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (root);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, ComplexNode **root)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep, root);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule, ComplexNode **root)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)], root);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, root); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif



static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
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
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yystrlen (yysymbol_name (yyarg[yyi]));
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp = yystpcpy (yyp, yysymbol_name (yyarg[yyi++]));
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, ComplexNode **root)
{
  YY_USE (yyvaluep);
  YY_USE (root);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (ComplexNode **root)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
  case 2: /* program: PICTURE string declarations START commands END  */
#line 218 "../myps4.y"
                        { *root = new ComplexNode(PREAMBLE + (yyvsp[-4].content)->code + "\n%%EndComments\n\n"
                                                  + (yyvsp[-1].content)->code); }
#line 1573 "myps4.tab.c"
    break;

  case 5: /* commands: %empty  */
#line 224 "../myps4.y"
                             { (yyval.content) = new ComplexNode(""); }
#line 1579 "myps4.tab.c"
    break;

  case 6: /* commands: command commands  */
#line 225 "../myps4.y"
                                       { (yyval.content) = new ComplexNode((yyvsp[-1].content)->code + "\n" + (yyvsp[0].content)->code); }
#line 1585 "myps4.tab.c"
    break;

  case 8: /* command: assignment  */
#line 229 "../myps4.y"
                                 { (yyval.content) = (yyvsp[0].content); }
#line 1591 "myps4.tab.c"
    break;

  case 9: /* command: late_binding  */
#line 230 "../myps4.y"
                                   { (yyval.content) = (yyvsp[0].content); }
#line 1597 "myps4.tab.c"
    break;

  case 10: /* command: call  */
#line 231 "../myps4.y"
                           { (yyval.content) = (yyvsp[0].content); }
#line 1603 "myps4.tab.c"
    break;

  case 11: /* command: termcall  */
#line 232 "../myps4.y"
                               { (yyval.content) = (yyvsp[0].content); }
#line 1609 "myps4.tab.c"
    break;

  case 12: /* command: forloop ';'  */
#line 233 "../myps4.y"
                                  { (yyval.content) = (yyvsp[-1].content); }
#line 1615 "myps4.tab.c"
    break;

  case 19: /* assignment: ID ':' '=' expression ';'  */
#line 243 "../myps4.y"
                        { (yyval.content) = new ComplexNode("/" + (yyvsp[-4].content)->code + " " + (yyvsp[-1].content)->code + " def"); }
#line 1621 "myps4.tab.c"
    break;

  case 20: /* late_binding: ID LATE_BIND expression ';'  */
#line 250 "../myps4.y"
                        { 
                            if((yyvsp[-1].content)->code[0] != '{' )
                                (yyvsp[-1].content)->code = "{ " + (yyvsp[-1].content)->code + " }";
                            (yyval.content) = new ComplexNode("/" + (yyvsp[-3].content)->code + " " + (yyvsp[-1].content)->code + " def");
                        }
#line 1631 "myps4.tab.c"
    break;

  case 21: /* call: ID '(' expression_list ')' ';'  */
#line 257 "../myps4.y"
                        {
                            if(DEFERRING_OPERATIONS.count((yyvsp[-4].content)->code)) {
                                auto c = (yyvsp[-2].content)->children.begin();
                                advance(c, DEFERRING_OPERATIONS[(yyvsp[-4].content)->code]);
                                if(!is_block((*c)->code))
                                    (*c)->code = "{" + (*c)->code + "}";
                            }
                            if((yyvsp[-4].content)->code == "write" && (yyvsp[-2].content)->children.size() == 1)
                                (yyvsp[-2].content)->append_child(new ComplexNode("currentpoint 3 2 roll"));
                            if(OPERATION_TABLE.count((yyvsp[-4].content)->code))
                                (yyvsp[-2].content)->concat_children(" ", " ", " " + OPERATION_TABLE[(yyvsp[-4].content)->code]);
                            else {
                                cerr << "Unknown operation \"" + (yyvsp[-4].content)->code + "\".\n";
                                exit(1);
                            }
                            (yyval.content) = (yyvsp[-2].content);
                        }
#line 1653 "myps4.tab.c"
    break;

  case 22: /* termcall: ID ';'  */
#line 275 "../myps4.y"
                             { (yyval.content) = (yyvsp[-1].content); }
#line 1659 "myps4.tab.c"
    break;

  case 23: /* forloop: FOR ID ':' '=' expression TO expression STEP expression DO commands DONE  */
#line 278 "../myps4.y"
                        { (yyval.content) = new ComplexNode((yyvsp[-7].content)->code + " " + (yyvsp[-3].content)->code + " " + (yyvsp[-5].content)->code + " { /"
                                               + (yyvsp[-10].content)->code + " exch def\n" + (yyvsp[-1].content)->code
                                               + "} for"); }
#line 1667 "myps4.tab.c"
    break;

  case 24: /* expression: factor  */
#line 283 "../myps4.y"
                             { (yyval.content) = (yyvsp[0].content); }
#line 1673 "myps4.tab.c"
    break;

  case 25: /* expression: '+' factor  */
#line 284 "../myps4.y"
                                 { (yyval.content) = (yyvsp[0].content); }
#line 1679 "myps4.tab.c"
    break;

  case 26: /* expression: '-' factor  */
#line 285 "../myps4.y"
                                 { (yyval.content) = new ComplexNode((yyvsp[0].content)->code + " -1 mul"); }
#line 1685 "myps4.tab.c"
    break;

  case 27: /* expression: '(' expression ')'  */
#line 286 "../myps4.y"
                                         { (yyval.content) = (yyvsp[-1].content); }
#line 1691 "myps4.tab.c"
    break;

  case 28: /* expression: '+' '(' expression ')'  */
#line 287 "../myps4.y"
                                             { (yyval.content) = (yyvsp[-1].content); }
#line 1697 "myps4.tab.c"
    break;

  case 29: /* expression: '-' '(' expression ')'  */
#line 288 "../myps4.y"
                                             { (yyval.content) = new ComplexNode((yyvsp[-1].content)->code + " -1 mul"); }
#line 1703 "myps4.tab.c"
    break;

  case 30: /* expression: expression '+' expression  */
#line 290 "../myps4.y"
                        { (yyval.content) = new ComplexNode((yyvsp[-2].content)->code + " " + (yyvsp[0].content)->code + " add"); }
#line 1709 "myps4.tab.c"
    break;

  case 31: /* expression: expression '-' expression  */
#line 292 "../myps4.y"
                        { (yyval.content) = new ComplexNode((yyvsp[-2].content)->code + " " + (yyvsp[0].content)->code + " sub"); }
#line 1715 "myps4.tab.c"
    break;

  case 32: /* expression: expression '*' expression  */
#line 294 "../myps4.y"
                        { (yyval.content) = new ComplexNode((yyvsp[-2].content)->code + " " + (yyvsp[0].content)->code + " mul"); }
#line 1721 "myps4.tab.c"
    break;

  case 33: /* expression: expression '/' expression  */
#line 296 "../myps4.y"
                        { (yyval.content) = new ComplexNode((yyvsp[-2].content)->code + " " + (yyvsp[0].content)->code + " div"); }
#line 1727 "myps4.tab.c"
    break;

  case 34: /* expression: expression MOD expression  */
#line 298 "../myps4.y"
                        { (yyval.content) = new ComplexNode((yyvsp[-2].content)->code + " " + (yyvsp[0].content)->code + " mod"); }
#line 1733 "myps4.tab.c"
    break;

  case 35: /* expression: forloop  */
#line 299 "../myps4.y"
                              { (yyval.content) = (yyvsp[0].content); }
#line 1739 "myps4.tab.c"
    break;

  case 36: /* expression_list: %empty  */
#line 301 "../myps4.y"
                             { (yyval.content) = new ComplexNode(""); }
#line 1745 "myps4.tab.c"
    break;

  case 37: /* expression_list: nonempty_expression_list  */
#line 302 "../myps4.y"
                                               { (yyval.content) = (yyvsp[0].content); }
#line 1751 "myps4.tab.c"
    break;

  case 38: /* nonempty_expression_list: expression  */
#line 305 "../myps4.y"
                                 { (yyval.content) = new ComplexNode(""); (yyval.content)->append_child((yyvsp[0].content)); }
#line 1757 "myps4.tab.c"
    break;

  case 39: /* nonempty_expression_list: expression ',' nonempty_expression_list  */
#line 307 "../myps4.y"
                        {
                            (yyvsp[0].content)->prepend_child((yyvsp[-2].content));
                            (yyval.content) = (yyvsp[0].content);
                        }
#line 1766 "myps4.tab.c"
    break;

  case 40: /* factor: number  */
#line 312 "../myps4.y"
                             { (yyval.content) = (yyvsp[0].content); }
#line 1772 "myps4.tab.c"
    break;

  case 41: /* factor: string  */
#line 313 "../myps4.y"
                             { (yyval.content) = new ComplexNode("(" + (yyvsp[0].content)->code + ")"); }
#line 1778 "myps4.tab.c"
    break;

  case 42: /* factor: point  */
#line 314 "../myps4.y"
                            { (yyval.content) = (yyvsp[0].content); }
#line 1784 "myps4.tab.c"
    break;

  case 43: /* factor: path  */
#line 315 "../myps4.y"
                           { (yyval.content) = (yyvsp[0].content); }
#line 1790 "myps4.tab.c"
    break;

  case 44: /* factor: variable  */
#line 316 "../myps4.y"
                               { (yyval.content) = (yyvsp[0].content); }
#line 1796 "myps4.tab.c"
    break;

  case 45: /* factor: eval_func  */
#line 317 "../myps4.y"
                                { (yyval.content) = (yyvsp[0].content); }
#line 1802 "myps4.tab.c"
    break;

  case 46: /* factor: term  */
#line 318 "../myps4.y"
                           { (yyval.content) = (yyvsp[0].content); }
#line 1808 "myps4.tab.c"
    break;

  case 47: /* number: INT  */
#line 320 "../myps4.y"
                          { (yyval.content) = (yyvsp[0].content); }
#line 1814 "myps4.tab.c"
    break;

  case 48: /* number: FLOAT  */
#line 321 "../myps4.y"
                            { (yyval.content) = (yyvsp[0].content); }
#line 1820 "myps4.tab.c"
    break;

  case 49: /* point: '(' expression ',' expression ')'  */
#line 324 "../myps4.y"
                        { (yyval.content) = new ComplexNode((yyvsp[-3].content)->code + " " + (yyvsp[-1].content)->code); }
#line 1826 "myps4.tab.c"
    break;

  case 50: /* path: PATHOPEN nonempty_expression_list PATHCLOSE  */
#line 327 "../myps4.y"
                        { 
                            if((yyvsp[-1].content)->children.size() <= 1) {
                                cerr << "A path must have at least two points.\n";
                                exit(1);
                            }
                            (yyvsp[-1].content)->concat_children(" moveto ", " lineto ", " lineto") ;
                            (yyvsp[-1].content)->code = "{ matrix currentmatrix newpath " + (yyvsp[-1].content)->code + "} cvlit";
                            (yyval.content) = (yyvsp[-1].content);
                        }
#line 1840 "myps4.tab.c"
    break;

  case 51: /* term: '{' commands '}'  */
#line 338 "../myps4.y"
                        { (yyval.content) = new ComplexNode("{ " + (yyvsp[-1].content)->code + "}"); }
#line 1846 "myps4.tab.c"
    break;

  case 52: /* variable: ID  */
#line 340 "../myps4.y"
                         { (yyval.content) = (yyvsp[0].content); }
#line 1852 "myps4.tab.c"
    break;

  case 53: /* eval_func: ID '(' expression_list ')'  */
#line 343 "../myps4.y"
                        {
                            if(DEFERRING_OPERATIONS.count((yyvsp[-3].content)->code)) {
                                /* The operation is deferring (i.e. a transformation). Protect the
                                 * last argument from execution. */
                                auto c = (yyvsp[-1].content)->children.begin();
                                advance(c, DEFERRING_OPERATIONS[(yyvsp[-3].content)->code]);
                                if(!is_block((*c)->code))
                                    (*c)->code = "{" + (*c)->code + "}";
                            }
                            (yyvsp[-1].content)->concat_children(" ", " ", " ");
                            if(OPERATION_TABLE.count((yyvsp[-3].content)->code))
                                (yyval.content) = new ComplexNode((yyvsp[-1].content)->code + OPERATION_TABLE[(yyvsp[-3].content)->code]);
                            else {
                                cerr << "Unknown operation \"" + (yyvsp[-3].content)->code + "\".\n";
                                exit(1);
                            }
                            /* Protect the path-valued result from execution. */
                            if(PATH_CONSTRUCTORS.count((yyvsp[-3].content)->code))
                                (yyval.content)->code = "{ matrix currentmatrix " + (yyval.content)->code + "} cvlit";
                        }
#line 1877 "myps4.tab.c"
    break;

  case 54: /* string: STRING  */
#line 363 "../myps4.y"
                             { (yyval.content) = new ComplexNode(escape_parentheses(strip_quotes((yyvsp[0].content)->code))); }
#line 1883 "myps4.tab.c"
    break;


#line 1887 "myps4.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (root, yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
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
                      yytoken, &yylval, root);
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, root);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (root, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, root);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, root);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 364 "../myps4.y"


void
usage()
{
    cout << "Usage: myps_check [OPTION]... [FILE]\n  -s Show syntax tree.\n  -d Show syntax tree and debug track.\n";
}

void
get_options(int argc, char **argv, char *options, char **in_filename)
{
    int i;
    char *s;

    for(i = 0; i < 256; i++)
        options[i] = 0;

    for(i = 1; i < argc; i++) {
        s = argv[i];
        if(s[0] == '-') {
            s++;
            while(*s)
                options[*(s++)] = 1;
        }
    }
    *in_filename = NULL;
    if(argc > 1 && argv[argc - 1][0] != '-')
        *in_filename = argv[argc - 1];
}

/* Called if a file name has been given on the command line. Read from this file instead of stdin.*/
FILE*
change_yyin(char *in_filename)
{
    FILE *input;

    if(!(input = fopen(in_filename, "r"))) {
        usage();
        printf("Error: Can't open file %s.\n", in_filename);
        exit(1);
    }
    yyin = input;

    return input;
}

int
main(int argc, char* argv[])
{
    ComplexNode *root;
    char options[256], *in_filename;
    FILE *input;

    get_options(argc, argv, options, &in_filename);
    if(options['h']) {
        usage();
        return 0;
    }   
    input = NULL;
    if(in_filename)
        input = change_yyin(in_filename);
    yydebug = 0;
    if(options['d'])
        yydebug = 1;
    if(yyparse(&root) != 0)
        return 1;
    if(input)
        fclose(input);
    cout << root->code;

    return 0;
}
