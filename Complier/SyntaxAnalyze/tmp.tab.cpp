/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* "%code top" blocks.  */
/* Line 349 of yacc.c  */
#line 4 "tmp.y"

	#include <stdio.h>
	#include <ctype.h>
	#include"..\SyntaxTree\SyntaxTreeNodeType.h"
 
 
	void yyerror(const char *text);//本文件定义，错误处理
	int yyval;//本文件定义，指向当前符号的Node指针
	extern int yylex(void);//模拟词法分析器
	extern int yylinenum;//warpper中定义，全局变量，行号
	extern SyntaxTreeNode *rt;//main中定义，语法树根节点


/* Line 349 of yacc.c  */
#line 79 "tmp.tab.cpp"



/* Copy the first part of user declarations.  */

/* Line 371 of yacc.c  */
#line 86 "tmp.tab.cpp"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "tmp.tab.h".  */
#ifndef YY_YY_TMP_TAB_H_INCLUDED
# define YY_YY_TMP_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
/* Line 387 of yacc.c  */
#line 1 "tmp.y"

	#include"..\SyntaxTree\SyntaxTreeNodeType.h"


/* Line 387 of yacc.c  */
#line 123 "tmp.tab.cpp"

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     EQU = 258,
     NEQU = 259,
     GRETTER = 260,
     EGRETTER = 261,
     LESS = 262,
     ELESS = 263,
     ASSIGNOP = 264,
     ADD = 265,
     SUB = 266,
     MUL = 267,
     DIV = 268,
     IDIV = 269,
     AND = 270,
     OR = 271,
     MOD = 272,
     NUM = 273,
     ID = 274,
     READ = 275,
     WRITE = 276,
     PROGRAM = 277,
     CONST = 278,
     VAR = 279,
     PROCEDURE = 280,
     FUNCTION = 281,
     BEGIN = 282,
     END = 283,
     ARRAY = 284,
     OF = 285,
     IF = 286,
     THEN = 287,
     ELSE = 288,
     FOR = 289,
     TO = 290,
     DO = 291,
     INTEGER = 292,
     BOOLEAN = 293,
     REAL = 294,
     CHAR = 295,
     DOTDOT = 296,
     NOT = 297
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 25 "tmp.y"

	SyntaxTreeNode *a;
	SyntaxTreeNodeOperator *b;
	SyntaxTreeNodeFinal *c;


/* Line 387 of yacc.c  */
#line 187 "tmp.tab.cpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_TMP_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 215 "tmp.tab.cpp"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   257

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  103
/* YYNRULES -- Number of states.  */
#define YYNSTATES  215

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   297

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      49,    50,     2,     2,    46,     2,    44,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    45,    43,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    47,     2,    48,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,    11,    13,    16,    21,    27,    31,
      32,    38,    42,    44,    47,    50,    52,    56,    57,    63,
      67,    69,    73,    75,    77,    79,    86,    88,    90,    92,
      94,    96,   102,   106,   110,   111,   115,   119,   125,   128,
     131,   135,   136,   140,   142,   144,   146,   149,   153,   157,
     162,   166,   170,   172,   176,   178,   180,   186,   192,   201,
     210,   219,   228,   229,   231,   234,   238,   239,   241,   246,
     251,   256,   259,   260,   264,   268,   272,   274,   276,   278,
     280,   282,   286,   290,   294,   298,   302,   306,   308,   312,
     316,   320,   322,   326,   330,   334,   338,   342,   344,   346,
     348,   353,   357,   360
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      52,     0,    -1,    53,    43,    54,    44,    -1,    22,    19,
      -1,     1,    -1,    22,     1,    -1,    55,    58,    64,    73,
      -1,     1,    55,    58,    64,    73,    -1,    23,    56,    43,
      -1,    -1,    56,    43,    19,     3,    57,    -1,    19,     3,
      57,    -1,     1,    -1,    10,    18,    -1,    11,    18,    -1,
      18,    -1,    24,    59,    43,    -1,    -1,    59,    43,    60,
      45,    61,    -1,    60,    45,    61,    -1,     1,    -1,    60,
      46,    19,    -1,    19,    -1,     1,    -1,    62,    -1,    29,
      47,    63,    48,    30,    62,    -1,     1,    -1,    37,    -1,
      39,    -1,    38,    -1,    40,    -1,    63,    46,    18,    41,
      18,    -1,    18,    41,    18,    -1,    64,    65,    43,    -1,
      -1,    66,    43,    72,    -1,    25,    19,    67,    -1,    26,
      19,    67,    45,    62,    -1,    25,     1,    -1,    26,     1,
      -1,    49,    68,    50,    -1,    -1,    68,    43,    69,    -1,
      69,    -1,    70,    -1,    71,    -1,    24,    71,    -1,    60,
      45,    62,    -1,    55,    58,    73,    -1,     1,    55,    58,
      73,    -1,    27,    74,    28,    -1,    74,    43,    75,    -1,
      75,    -1,    76,     9,    82,    -1,    78,    -1,    73,    -1,
      31,    82,    32,    75,    79,    -1,    31,     1,    32,    75,
      79,    -1,    34,    19,     9,    82,    35,    82,    36,    75,
      -1,    34,    19,     9,     1,    35,    82,    36,    75,    -1,
      34,    19,     9,    82,    35,     1,    36,    75,    -1,    34,
      19,     9,     1,    35,     1,    36,    75,    -1,    -1,     1,
      -1,    19,    77,    -1,    47,    80,    48,    -1,    -1,    19,
      -1,    19,    49,    80,    50,    -1,    20,    49,    81,    50,
      -1,    21,    49,    81,    50,    -1,    33,    75,    -1,    -1,
      80,    46,    82,    -1,    81,    46,    19,    -1,    81,    46,
      18,    -1,    19,    -1,    18,    -1,     1,    -1,    82,    -1,
       1,    -1,    83,     3,    83,    -1,    83,     4,    83,    -1,
      83,     5,    83,    -1,    83,     6,    83,    -1,    83,     7,
      83,    -1,    83,     8,    83,    -1,    83,    -1,    83,    10,
      84,    -1,    83,    16,    84,    -1,    83,    11,    84,    -1,
      84,    -1,    84,    12,    85,    -1,    84,    13,    85,    -1,
      84,    14,    85,    -1,    84,    15,    85,    -1,    84,    17,
      85,    -1,    85,    -1,    18,    -1,    76,    -1,    19,    49,
      80,    50,    -1,    49,    82,    50,    -1,    42,    85,    -1,
      11,    85,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    52,    52,    55,    57,    58,    60,    62,    65,    69,
      71,    74,    76,    78,    81,    84,    87,    91,    93,    96,
      98,   101,   104,   106,   109,   112,   114,   116,   119,   122,
     125,   128,   131,   134,   138,   140,   143,   146,   148,   149,
     151,   155,   157,   160,   163,   166,   169,   172,   175,   177,
     179,   182,   185,   188,   191,   194,   197,   199,   201,   203,
     204,   205,   208,   209,   211,   214,   218,   220,   223,   228,
     229,   231,   235,   237,   240,   241,   244,   245,   246,   248,
     250,   252,   253,   254,   255,   256,   257,   259,   262,   263,
     264,   266,   269,   270,   271,   272,   273,   275,   277,   279,
     281,   283,   285,   287
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "EQU", "NEQU", "GRETTER", "EGRETTER",
  "LESS", "ELESS", "ASSIGNOP", "ADD", "SUB", "MUL", "DIV", "IDIV", "AND",
  "OR", "MOD", "NUM", "ID", "READ", "WRITE", "PROGRAM", "CONST", "VAR",
  "PROCEDURE", "FUNCTION", "BEGIN", "END", "ARRAY", "OF", "IF", "THEN",
  "ELSE", "FOR", "TO", "DO", "INTEGER", "BOOLEAN", "REAL", "CHAR",
  "DOTDOT", "NOT", "';'", "'.'", "':'", "','", "'['", "']'", "'('", "')'",
  "$accept", "programstruct", "program_head", "program_body",
  "const_declarations", "const_declaration", "const_value",
  "var_declarations", "var_declaration", "idlist", "type", "simple_type",
  "period", "subprogram_declarations", "subprogram", "subprogram_head",
  "formal_parameter", "parameter_list", "parameter", "var_parameter",
  "value_parameter", "subprogram_body", "compound_statement",
  "statement_list", "statement", "variable", "id_varpart",
  "procedure_call", "else_part", "expression_list", "special_list",
  "expression", "simple_expression", "term", "factor", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,    59,    46,    58,    44,    91,    93,    40,
      41
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    53,    53,    53,    54,    54,    55,    55,
      56,    56,    56,    57,    57,    57,    58,    58,    59,    59,
      59,    60,    60,    60,    61,    61,    61,    62,    62,    62,
      62,    63,    63,    64,    64,    65,    66,    66,    66,    66,
      67,    67,    68,    68,    69,    69,    70,    71,    72,    72,
      73,    74,    74,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    76,    77,    77,    78,    78,    78,
      78,    79,    79,    80,    81,    81,    81,    81,    81,    80,
      80,    82,    82,    82,    82,    82,    82,    82,    83,    83,
      83,    83,    84,    84,    84,    84,    84,    84,    85,    85,
      85,    85,    85,    85
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     2,     1,     2,     4,     5,     3,     0,
       5,     3,     1,     2,     2,     1,     3,     0,     5,     3,
       1,     3,     1,     1,     1,     6,     1,     1,     1,     1,
       1,     5,     3,     3,     0,     3,     3,     5,     2,     2,
       3,     0,     3,     1,     1,     1,     2,     3,     3,     4,
       3,     3,     1,     3,     1,     1,     5,     5,     8,     8,
       8,     8,     0,     1,     2,     3,     0,     1,     4,     4,
       4,     2,     0,     3,     3,     3,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     1,     3,     3,
       3,     1,     3,     3,     3,     3,     3,     1,     1,     1,
       4,     3,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     4,     0,     0,     0,     5,     3,     1,     0,     9,
       0,     0,    17,    17,    12,     0,     0,     2,     0,    34,
      34,     0,     8,    23,    22,     0,     0,     0,     0,     0,
       0,    15,    11,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     6,     7,    13,    14,     0,    23,     0,    26,
       0,    27,    29,    28,    30,    19,    24,    21,    38,    41,
      39,    41,    63,    67,     0,     0,     0,     0,    55,     0,
      52,     0,    54,    33,     0,    10,     0,     0,     0,    36,
       0,     0,     0,    64,     0,     0,     0,     0,    98,    66,
       0,     0,    99,     0,    87,    91,    97,     0,    50,     0,
       0,     9,    17,    35,    18,     0,     0,     0,     0,     0,
      43,    44,    45,     0,    80,     0,    79,     0,    78,    77,
      76,     0,     0,     0,   103,     0,   102,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    51,    53,    17,     0,     0,     0,
       0,    46,     0,     0,    40,    37,     0,    65,    68,     0,
      69,    70,    72,     0,   101,    72,    81,    82,    83,    84,
      85,    86,    88,    90,    89,    92,    93,    94,    95,    96,
       0,     0,     0,    48,    32,     0,     0,    47,    42,    73,
      75,    74,     0,    57,   100,    56,     0,     0,    49,     0,
      25,    71,     0,     0,     0,     0,    31,     0,     0,     0,
       0,    61,    59,    60,    58
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    11,    12,    16,    32,    19,    25,   108,
      55,    56,   106,    27,    40,    41,    79,   109,   110,   111,
     112,   103,    68,    69,    70,    92,    83,    72,   193,   115,
     121,   116,    94,    95,    96
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -107
static const yytype_int16 yypact[] =
{
      10,  -107,    20,    14,   -19,  -107,  -107,  -107,   104,    -6,
      32,    38,    63,    63,  -107,    54,    50,  -107,    35,  -107,
    -107,   133,    79,    80,  -107,    95,   175,   184,   184,   102,
     115,  -107,  -107,   142,    15,    73,   153,    66,    71,   146,
     132,   164,  -107,  -107,  -107,  -107,   133,  -107,   177,  -107,
     165,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,   130,
    -107,   130,  -107,     6,   178,   181,     7,   207,  -107,    30,
    -107,   219,  -107,  -107,   136,  -107,    73,   211,    47,  -107,
     186,    26,    26,  -107,    85,    85,   200,     1,  -107,   129,
       1,     1,  -107,   201,   180,   191,  -107,   225,  -107,   146,
       1,    -6,    63,  -107,  -107,   194,   170,   105,   179,    75,
    -107,  -107,  -107,   155,  -107,   171,  -107,    33,  -107,  -107,
    -107,   100,   111,   121,  -107,    26,  -107,   187,   121,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,    58,  -107,  -107,    63,   209,   220,   221,
     210,  -107,   155,    47,  -107,  -107,     1,  -107,  -107,   163,
    -107,  -107,   208,   112,  -107,   208,    12,    12,    12,    12,
      12,    12,   191,   191,   191,  -107,  -107,  -107,  -107,  -107,
     212,   213,   209,  -107,  -107,   202,   155,  -107,  -107,  -107,
    -107,  -107,   121,  -107,  -107,  -107,    77,    90,  -107,   224,
    -107,  -107,   214,   215,   216,   217,  -107,   121,   121,   121,
     121,  -107,  -107,  -107,  -107
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -107,  -107,  -107,  -107,    -4,  -107,   198,   -10,  -107,    13,
     169,  -106,  -107,   226,  -107,  -107,   188,  -107,   101,  -107,
     148,  -107,   -26,  -107,   -93,   -39,  -107,  -107,    91,   -73,
     172,   -62,    68,    78,   -77
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -67
static const yytype_int16 yytable[] =
{
      71,    42,    43,    20,    93,    13,   144,   155,    86,   117,
     124,     1,    87,   126,     7,   -66,    47,    10,    87,    88,
      89,     5,   135,   136,     8,    88,    89,   114,   137,   127,
     162,    26,     2,    14,    24,   165,    23,    87,   145,     6,
     -16,   -16,   -16,    90,    88,    89,   187,    48,    47,    90,
      91,    15,   163,    81,    24,    82,    91,    21,    98,   180,
      71,   175,   176,   177,   178,   179,    24,    58,    90,    87,
     102,   107,    60,    99,    49,    91,    88,    89,   202,   156,
     200,   181,    17,   158,    71,    59,   118,    18,    87,    71,
      61,   204,   147,    22,   189,    88,    89,   146,    33,   201,
      90,    87,    50,   119,   120,     9,    47,    91,    88,    89,
      51,    52,    53,    54,   211,   212,   213,   214,   153,    90,
      44,   183,    62,   -20,    24,   154,    91,    10,    -9,    -9,
      -9,    -9,    90,    45,   203,   205,   182,   101,    34,    91,
      63,    64,    65,    29,    30,    46,   159,    62,    39,   -62,
     160,    31,    66,    71,   -62,    67,   198,   159,   156,    10,
      -9,   161,   194,    -9,   -62,    63,    64,    65,    71,    71,
      71,    71,    57,    39,   -62,    73,    81,    66,   125,    78,
      67,   190,   191,   129,   130,   131,   132,   133,   134,   -62,
     135,   136,    51,    52,    53,    54,   137,   166,   167,   168,
     169,   170,   171,   138,   139,   140,   141,    74,   142,    37,
      38,    39,    77,   172,   173,   174,   149,   156,   150,   157,
      35,    36,    76,    36,   152,    36,    97,    84,   100,   105,
      85,   113,   123,   128,   143,   148,    39,   164,   184,   185,
     186,   192,   206,   199,    75,   104,    28,   196,   197,    80,
     207,   208,   209,   210,   188,   151,   195,   122
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-107)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_uint8 yycheck[] =
{
      39,    27,    28,    13,    66,     9,    99,   113,     1,    82,
      87,     1,    11,    90,     0,     9,     1,    23,    11,    18,
      19,     1,    10,    11,    43,    18,    19,     1,    16,    91,
     123,    18,    22,     1,    19,   128,     1,    11,   100,    19,
      25,    26,    27,    42,    18,    19,   152,    34,     1,    42,
      49,    19,   125,    47,    19,    49,    49,     3,    28,     1,
      99,   138,   139,   140,   141,   142,    19,     1,    42,    11,
      74,    24,     1,    43,     1,    49,    18,    19,     1,    46,
     186,   143,    44,    50,   123,    19,     1,    24,    11,   128,
      19,     1,   102,    43,   156,    18,    19,   101,    19,   192,
      42,    11,    29,    18,    19,     1,     1,    49,    18,    19,
      37,    38,    39,    40,   207,   208,   209,   210,    43,    42,
      18,   147,     1,    43,    19,    50,    49,    23,    24,    25,
      26,    27,    42,    18,   196,   197,   146,     1,    43,    49,
      19,    20,    21,    10,    11,     3,    46,     1,    27,    28,
      50,    18,    31,   192,    33,    34,   182,    46,    46,    23,
      24,    50,    50,    27,    43,    19,    20,    21,   207,   208,
     209,   210,    19,    27,    28,    43,    47,    31,    49,    49,
      34,    18,    19,     3,     4,     5,     6,     7,     8,    43,
      10,    11,    37,    38,    39,    40,    16,   129,   130,   131,
     132,   133,   134,    12,    13,    14,    15,    43,    17,    25,
      26,    27,    47,   135,   136,   137,    46,    46,    48,    48,
      45,    46,    45,    46,    45,    46,    19,    49,     9,    18,
      49,    45,    32,    32,     9,    41,    27,    50,    18,    18,
      30,    33,    18,    41,    46,    76,    20,    35,    35,    61,
      36,    36,    36,    36,   153,   107,   165,    85
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    22,    52,    53,     1,    19,     0,    43,     1,
      23,    54,    55,    55,     1,    19,    56,    44,    24,    58,
      58,     3,    43,     1,    19,    59,    60,    64,    64,    10,
      11,    18,    57,    19,    43,    45,    46,    25,    26,    27,
      65,    66,    73,    73,    18,    18,     3,     1,    60,     1,
      29,    37,    38,    39,    40,    61,    62,    19,     1,    19,
       1,    19,     1,    19,    20,    21,    31,    34,    73,    74,
      75,    76,    78,    43,    43,    57,    45,    47,    49,    67,
      67,    47,    49,    77,    49,    49,     1,    11,    18,    19,
      42,    49,    76,    82,    83,    84,    85,    19,    28,    43,
       9,     1,    55,    72,    61,    18,    63,    24,    60,    68,
      69,    70,    71,    45,     1,    80,    82,    80,     1,    18,
      19,    81,    81,    32,    85,    49,    85,    82,    32,     3,
       4,     5,     6,     7,     8,    10,    11,    16,    12,    13,
      14,    15,    17,     9,    75,    82,    55,    58,    41,    46,
      48,    71,    45,    43,    50,    62,    46,    48,    50,    46,
      50,    50,    75,    80,    50,    75,    83,    83,    83,    83,
      83,    83,    84,    84,    84,    85,    85,    85,    85,    85,
       1,    82,    58,    73,    18,    18,    30,    62,    69,    82,
      18,    19,    33,    79,    50,    79,    35,    35,    73,    41,
      62,    75,     1,    82,     1,    82,    18,    36,    36,    36,
      36,    75,    75,    75,    75
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
	    /* Fall through.  */
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

  return yystpcpy (yyres, yystr) - yyres;
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

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
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
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
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
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
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

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
      yychar = YYLEX;
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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

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
/* Line 1792 of yacc.c  */
#line 53 "tmp.y"
    {(yyval.a) = MakeNode(1,{(yyvsp[(1) - (4)].a),(yyvsp[(3) - (4)].a)});rt=(yyval.a);}
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 56 "tmp.y"
    {(yyval.a)=MakeNode(2,{(yyvsp[(2) - (2)].c)});}
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 57 "tmp.y"
    {(yyval.a)=nullptr;}
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 58 "tmp.y"
    {(yyval.a)=nullptr;}
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 61 "tmp.y"
    {(yyval.a)=MakeNode(3,{(yyvsp[(1) - (4)].a),(yyvsp[(2) - (4)].a),(yyvsp[(3) - (4)].a),(yyvsp[(4) - (4)].a)});}
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 62 "tmp.y"
    {(yyval.a)=nullptr;}
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 66 "tmp.y"
    {(yyval.a)=MakeNode(4,{(yyvsp[(2) - (3)].a)});}
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 69 "tmp.y"
    {(yyval.a)=MakeNode(5,{});}
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 72 "tmp.y"
    {(yyval.a)=MakeNode(6,	{(yyvsp[(1) - (5)].a),(yyvsp[(3) - (5)].c),(yyvsp[(5) - (5)].a)});}
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 75 "tmp.y"
    {(yyval.a)=MakeNode(7,	{(yyvsp[(1) - (3)].c),(yyvsp[(3) - (3)].a)});}
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 76 "tmp.y"
    {(yyval.a)=nullptr;}
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 79 "tmp.y"
    {(yyval.a)=MakeNode(8,{(yyvsp[(2) - (2)].c)});}
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 82 "tmp.y"
    {(yyval.a)=MakeNode(9,{(yyvsp[(2) - (2)].c)});}
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 85 "tmp.y"
    {(yyval.a)=MakeNode(10,{(yyvsp[(1) - (1)].c)});}
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 88 "tmp.y"
    {(yyval.a)=MakeNode(11,{(yyvsp[(2) - (3)].a)});}
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 91 "tmp.y"
    {(yyval.a)=MakeNode(12,{});}
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 94 "tmp.y"
    {(yyval.a)=MakeNode(13,{(yyvsp[(1) - (5)].a),(yyvsp[(3) - (5)].a),(yyvsp[(5) - (5)].a)});}
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 97 "tmp.y"
    {(yyval.a)=MakeNode(14,{(yyvsp[(1) - (3)].a),(yyvsp[(3) - (3)].a)});}
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 99 "tmp.y"
    {(yyval.a)=nullptr;}
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 102 "tmp.y"
    {(yyval.a)=MakeNode(15,{(yyvsp[(1) - (3)].a),(yyvsp[(3) - (3)].c)});}
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 105 "tmp.y"
    {(yyval.a)=MakeNode(16,{(yyvsp[(1) - (1)].c)});}
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 106 "tmp.y"
    {(yyval.a)=nullptr;}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 110 "tmp.y"
    {(yyval.a)=MakeNode(17,{(yyvsp[(1) - (1)].a)});}
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 113 "tmp.y"
    {(yyval.a)=MakeNode(18,{(yyvsp[(3) - (6)].a),(yyvsp[(6) - (6)].a)});}
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 114 "tmp.y"
    {(yyval.a)=nullptr;}
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 117 "tmp.y"
    {(yyval.a)=MakeNode(19,{});}
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 120 "tmp.y"
    {(yyval.a)=MakeNode(20,{});}
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 123 "tmp.y"
    {(yyval.a)=MakeNode(21,{});}
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 126 "tmp.y"
    {(yyval.a)=MakeNode(22,{});}
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 129 "tmp.y"
    {(yyval.a)=MakeNode(23,{(yyvsp[(1) - (5)].a),(yyvsp[(3) - (5)].c),(yyvsp[(5) - (5)].c)});}
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 132 "tmp.y"
    {(yyval.a)=MakeNode(24,{(yyvsp[(1) - (3)].c),(yyvsp[(3) - (3)].c)});}
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 135 "tmp.y"
    {(yyval.a)=MakeNode(25,{(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].a)});}
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 138 "tmp.y"
    {(yyval.a)=MakeNode(26,{});}
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 141 "tmp.y"
    {(yyval.a)=MakeNode(27,{(yyvsp[(1) - (3)].a),(yyvsp[(3) - (3)].a)});}
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 144 "tmp.y"
    {(yyval.a)=MakeNode(28,{(yyvsp[(2) - (3)].c),(yyvsp[(3) - (3)].a)});}
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 147 "tmp.y"
    {(yyval.a)=MakeNode(29,{(yyvsp[(2) - (5)].c),(yyvsp[(3) - (5)].a),(yyvsp[(5) - (5)].a)});}
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 148 "tmp.y"
    {(yyval.a)=nullptr;}
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 149 "tmp.y"
    {(yyval.a)=nullptr;}
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 152 "tmp.y"
    {(yyval.a)=MakeNode(30,{(yyvsp[(2) - (3)].a)});}
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 155 "tmp.y"
    {(yyval.a)=MakeNode(31,{});}
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 158 "tmp.y"
    {(yyval.a)=MakeNode(32,{(yyvsp[(1) - (3)].a),(yyvsp[(3) - (3)].a)});}
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 161 "tmp.y"
    {(yyval.a)=MakeNode(33,{(yyvsp[(1) - (1)].a)});}
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 164 "tmp.y"
    {(yyval.a)=MakeNode(34,{(yyvsp[(1) - (1)].a)});}
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 167 "tmp.y"
    {(yyval.a)=MakeNode(35,{(yyvsp[(1) - (1)].a)});}
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 170 "tmp.y"
    {(yyval.a)=MakeNode(36,{(yyvsp[(2) - (2)].a)});}
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 173 "tmp.y"
    {(yyval.a)=MakeNode(37,{(yyvsp[(1) - (3)].a),(yyvsp[(3) - (3)].a)});}
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 176 "tmp.y"
    {(yyval.a)=MakeNode(38,{(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].a),(yyvsp[(3) - (3)].a)});}
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 177 "tmp.y"
    {(yyval.a)=nullptr;}
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 180 "tmp.y"
    {(yyval.a)=MakeNode(39,{(yyvsp[(2) - (3)].a)});}
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 183 "tmp.y"
    {(yyval.a)=MakeNode(40,{(yyvsp[(1) - (3)].a),(yyvsp[(3) - (3)].a)});}
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 186 "tmp.y"
    {(yyval.a)=MakeNode(41,{(yyvsp[(1) - (1)].a)});}
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 189 "tmp.y"
    {(yyval.a)=MakeNode(42,{(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].b),(yyvsp[(3) - (3)].a)});}
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 192 "tmp.y"
    {(yyval.a)=MakeNode(43,{(yyvsp[(1) - (1)].a)});}
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 195 "tmp.y"
    {(yyval.a)=MakeNode(44,{(yyvsp[(1) - (1)].a)});}
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 198 "tmp.y"
    {(yyval.a)=MakeNode(45,{(yyvsp[(2) - (5)].a),(yyvsp[(4) - (5)].a),(yyvsp[(5) - (5)].a)});}
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 199 "tmp.y"
    {(yyval.a)=nullptr;}
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 202 "tmp.y"
    {(yyval.a)=MakeNode(46,{(yyvsp[(2) - (8)].c),(yyvsp[(3) - (8)].b),(yyvsp[(4) - (8)].a),(yyvsp[(6) - (8)].a),(yyvsp[(8) - (8)].a)});}
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 203 "tmp.y"
    {(yyval.a)=nullptr;}
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 204 "tmp.y"
    {(yyval.a)=nullptr;}
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 205 "tmp.y"
    {(yyval.a)=nullptr;}
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 208 "tmp.y"
    {(yyval.a)=MakeNode(47,{});}
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 209 "tmp.y"
    {(yyval.a)=nullptr;}
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 212 "tmp.y"
    {(yyval.a)=MakeNode(48,{(yyvsp[(1) - (2)].c),(yyvsp[(2) - (2)].a)});}
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 215 "tmp.y"
    {(yyval.a)=MakeNode(49,{(yyvsp[(2) - (3)].a)});}
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 218 "tmp.y"
    {(yyval.a)=MakeNode(50,{});}
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 221 "tmp.y"
    {(yyval.a)=MakeNode(51,{(yyvsp[(1) - (1)].c)});}
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 224 "tmp.y"
    {(yyval.a)=MakeNode(52,{(yyvsp[(1) - (4)].c),(yyvsp[(3) - (4)].a)});}
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 228 "tmp.y"
    {(yyval.a)=MakeNode(52,{(yyvsp[(1) - (4)].c),(yyvsp[(3) - (4)].a)});}
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 229 "tmp.y"
    {(yyval.a)=MakeNode(52,{(yyvsp[(1) - (4)].c),(yyvsp[(3) - (4)].a)});}
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 232 "tmp.y"
    {(yyval.a)=MakeNode(53,{(yyvsp[(2) - (2)].a)});}
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 235 "tmp.y"
    {(yyval.a)=MakeNode(54,{});}
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 238 "tmp.y"
    {(yyval.a)=MakeNode(55,{(yyvsp[(1) - (3)].a),(yyvsp[(3) - (3)].a)});}
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 240 "tmp.y"
    {(yyval.a)=MakeNode(55,{(yyvsp[(1) - (3)].a),(yyvsp[(3) - (3)].c)});}
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 241 "tmp.y"
    {(yyval.a)=MakeNode(55,{(yyvsp[(1) - (3)].a),(yyvsp[(3) - (3)].c)});}
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 244 "tmp.y"
    {(yyval.a)=MakeNode(56,{(yyvsp[(1) - (1)].c)});}
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 245 "tmp.y"
    {(yyval.a)=MakeNode(56,{(yyvsp[(1) - (1)].c)});}
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 246 "tmp.y"
    {(yyval.a)=nullptr;}
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 249 "tmp.y"
    {(yyval.a)=MakeNode(56,{(yyvsp[(1) - (1)].a)});}
    break;

  case 80:
/* Line 1792 of yacc.c  */
#line 250 "tmp.y"
    {(yyval.a)=nullptr;}
    break;

  case 81:
/* Line 1792 of yacc.c  */
#line 252 "tmp.y"
    {(yyval.a)=MakeNode(57,{(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].b),(yyvsp[(3) - (3)].a)});}
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 253 "tmp.y"
    {(yyval.a)=MakeNode(57,{(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].b),(yyvsp[(3) - (3)].a)});}
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 254 "tmp.y"
    {(yyval.a)=MakeNode(57,{(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].b),(yyvsp[(3) - (3)].a)});}
    break;

  case 84:
/* Line 1792 of yacc.c  */
#line 255 "tmp.y"
    {(yyval.a)=MakeNode(57,{(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].b),(yyvsp[(3) - (3)].a)});}
    break;

  case 85:
/* Line 1792 of yacc.c  */
#line 256 "tmp.y"
    {(yyval.a)=MakeNode(57,{(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].b),(yyvsp[(3) - (3)].a)});}
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 257 "tmp.y"
    {(yyval.a)=MakeNode(57,{(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].b),(yyvsp[(3) - (3)].a)});}
    break;

  case 87:
/* Line 1792 of yacc.c  */
#line 260 "tmp.y"
    {(yyval.a)=MakeNode(58,{(yyvsp[(1) - (1)].a)});}
    break;

  case 88:
/* Line 1792 of yacc.c  */
#line 262 "tmp.y"
    {(yyval.a)=MakeNode(59,{(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].b),(yyvsp[(3) - (3)].a)});}
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 263 "tmp.y"
    {(yyval.a)=MakeNode(59,{(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].b),(yyvsp[(3) - (3)].a)});}
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 264 "tmp.y"
    {(yyval.a)=MakeNode(59,{(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].b),(yyvsp[(3) - (3)].a)});}
    break;

  case 91:
/* Line 1792 of yacc.c  */
#line 267 "tmp.y"
    {(yyval.a)=MakeNode(60,{(yyvsp[(1) - (1)].a)});}
    break;

  case 92:
/* Line 1792 of yacc.c  */
#line 269 "tmp.y"
    {(yyval.a)=MakeNode(61,{(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].b),(yyvsp[(3) - (3)].a)});}
    break;

  case 93:
/* Line 1792 of yacc.c  */
#line 270 "tmp.y"
    {(yyval.a)=MakeNode(61,{(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].b),(yyvsp[(3) - (3)].a)});}
    break;

  case 94:
/* Line 1792 of yacc.c  */
#line 271 "tmp.y"
    {(yyval.a)=MakeNode(61,{(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].b),(yyvsp[(3) - (3)].a)});}
    break;

  case 95:
/* Line 1792 of yacc.c  */
#line 272 "tmp.y"
    {(yyval.a)=MakeNode(61,{(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].b),(yyvsp[(3) - (3)].a)});}
    break;

  case 96:
/* Line 1792 of yacc.c  */
#line 273 "tmp.y"
    {(yyval.a)=MakeNode(61,{(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].b),(yyvsp[(3) - (3)].a)});}
    break;

  case 97:
/* Line 1792 of yacc.c  */
#line 275 "tmp.y"
    {(yyval.a)=MakeNode(62,{(yyvsp[(1) - (1)].a)});}
    break;

  case 98:
/* Line 1792 of yacc.c  */
#line 277 "tmp.y"
    {(yyval.a)=MakeNode(63,{(yyvsp[(1) - (1)].c)});}
    break;

  case 99:
/* Line 1792 of yacc.c  */
#line 279 "tmp.y"
    {(yyval.a)=MakeNode(64,{(yyvsp[(1) - (1)].a)});}
    break;

  case 100:
/* Line 1792 of yacc.c  */
#line 281 "tmp.y"
    {(yyval.a)=MakeNode(65,{(yyvsp[(1) - (4)].c),(yyvsp[(3) - (4)].a)});}
    break;

  case 101:
/* Line 1792 of yacc.c  */
#line 283 "tmp.y"
    {(yyval.a)=MakeNode(66,{(yyvsp[(2) - (3)].a)});}
    break;

  case 102:
/* Line 1792 of yacc.c  */
#line 285 "tmp.y"
    {(yyval.a)=MakeNode(67,{(yyvsp[(2) - (2)].a)});}
    break;

  case 103:
/* Line 1792 of yacc.c  */
#line 287 "tmp.y"
    {(yyval.a)=MakeNode(68,{(yyvsp[(2) - (2)].a)});}
    break;


/* Line 1792 of yacc.c  */
#line 2219 "tmp.tab.cpp"
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

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

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

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2055 of yacc.c  */
#line 290 "tmp.y"

 
/////////////////////////////////////////////////////////////////////////////
// programs section

 
void yyerror(const char *text)
{
   fprintf(stderr,"[Line %d]:%s\n",yylinenum,text);
}