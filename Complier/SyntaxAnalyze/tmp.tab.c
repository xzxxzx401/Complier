
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* "%code top" blocks.  */

/* Line 171 of yacc.c  */
#line 4 ".\\tmp.y"

	#include <stdio.h>
	#include <ctype.h>
	#include"..\SyntaxTree\SyntaxTreeNodeType.h"
 
 
	void yyerror(const char *text);
	extern int yylex(void);
	extern int yylinenum;
	extern int yyval;
	extern SyntaxTreeNode *rt;



/* Line 171 of yacc.c  */
#line 86 "tmp.tab.c"


/* Copy the first part of user declarations.  */


/* Line 189 of yacc.c  */
#line 93 "tmp.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

/* "%code requires" blocks.  */

/* Line 209 of yacc.c  */
#line 1 ".\\tmp.y"

	#include"..\SyntaxTree\SyntaxTreeNodeType.h"



/* Line 209 of yacc.c  */
#line 123 "tmp.tab.c"

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
     PROGRAM = 275,
     CONST = 276,
     VAR = 277,
     PROCEDURE = 278,
     FUNCTION = 279,
     BEGIN = 280,
     END = 281,
     ARRAY = 282,
     OF = 283,
     IF = 284,
     THEN = 285,
     ELSE = 286,
     FOR = 287,
     TO = 288,
     DO = 289,
     INTEGER = 290,
     BOOLEAN = 291,
     REAL = 292,
     CHAR = 293,
     DOTDOT = 294,
     NOT = 295
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 25 ".\\tmp.y"

	SyntaxTreeNode *a;
	SyntaxTreeNodeOperator *b;
	SyntaxTreeNodeFinal *c;



/* Line 214 of yacc.c  */
#line 188 "tmp.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 200 "tmp.tab.c"

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
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

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

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   244

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNRULES -- Number of states.  */
#define YYNSTATES  201

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   295

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      47,    48,     2,     2,    44,     2,    42,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    43,    41,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    45,     2,    46,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40
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
     249,   250,   254,   256,   258,   262,   266,   270,   274,   278,
     282,   284,   288,   292,   296,   298,   302,   306,   310,   314,
     318,   320,   322,   324,   329,   333,   336
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      50,     0,    -1,    51,    41,    52,    42,    -1,    20,    19,
      -1,     1,    -1,    20,     1,    -1,    53,    56,    62,    71,
      -1,     1,    53,    56,    62,    71,    -1,    21,    54,    41,
      -1,    -1,    54,    41,    19,     3,    55,    -1,    19,     3,
      55,    -1,     1,    -1,    10,    18,    -1,    11,    18,    -1,
      18,    -1,    22,    57,    41,    -1,    -1,    57,    41,    58,
      43,    59,    -1,    58,    43,    59,    -1,     1,    -1,    58,
      44,    19,    -1,    19,    -1,     1,    -1,    60,    -1,    27,
      45,    61,    46,    28,    60,    -1,     1,    -1,    35,    -1,
      37,    -1,    36,    -1,    38,    -1,    61,    44,    18,    39,
      18,    -1,    18,    39,    18,    -1,    62,    63,    41,    -1,
      -1,    64,    41,    70,    -1,    23,    19,    65,    -1,    24,
      19,    65,    43,    60,    -1,    23,     1,    -1,    24,     1,
      -1,    47,    66,    48,    -1,    -1,    66,    41,    67,    -1,
      67,    -1,    68,    -1,    69,    -1,    22,    69,    -1,    58,
      43,    60,    -1,    53,    56,    71,    -1,     1,    53,    56,
      71,    -1,    25,    72,    26,    -1,    72,    41,    73,    -1,
      73,    -1,    74,     9,    79,    -1,    76,    -1,    71,    -1,
      29,    79,    30,    73,    77,    -1,    29,     1,    30,    73,
      77,    -1,    32,    19,     9,    79,    33,    79,    34,    73,
      -1,    32,    19,     9,     1,    33,    79,    34,    73,    -1,
      32,    19,     9,    79,    33,     1,    34,    73,    -1,    32,
      19,     9,     1,    33,     1,    34,    73,    -1,    -1,     1,
      -1,    19,    75,    -1,    45,    78,    46,    -1,    -1,    19,
      -1,    19,    47,    78,    48,    -1,    31,    73,    -1,    -1,
      78,    44,    79,    -1,    79,    -1,     1,    -1,    80,     3,
      80,    -1,    80,     4,    80,    -1,    80,     5,    80,    -1,
      80,     6,    80,    -1,    80,     7,    80,    -1,    80,     8,
      80,    -1,    80,    -1,    80,    10,    81,    -1,    80,    16,
      81,    -1,    80,    11,    81,    -1,    81,    -1,    81,    12,
      82,    -1,    81,    13,    82,    -1,    81,    14,    82,    -1,
      81,    15,    82,    -1,    81,    17,    82,    -1,    82,    -1,
      18,    -1,    74,    -1,    19,    47,    78,    48,    -1,    47,
      79,    48,    -1,    40,    82,    -1,    11,    82,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    52,    52,    55,    57,    58,    60,    62,    65,    69,
      71,    74,    76,    78,    81,    84,    87,    91,    93,    96,
      98,   101,   104,   106,   109,   112,   114,   116,   119,   122,
     125,   128,   131,   134,   138,   140,   143,   146,   148,   149,
     151,   155,   157,   160,   163,   166,   169,   172,   175,   177,
     179,   182,   184,   186,   188,   190,   192,   194,   196,   198,
     199,   200,   202,   203,   204,   206,   209,   210,   212,   214,
     217,   218,   220,   222,   223,   224,   225,   226,   227,   228,
     230,   232,   233,   234,   236,   238,   239,   240,   241,   242,
     244,   245,   246,   247,   248,   249,   250
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "EQU", "NEQU", "GRETTER", "EGRETTER",
  "LESS", "ELESS", "ASSIGNOP", "ADD", "SUB", "MUL", "DIV", "IDIV", "AND",
  "OR", "MOD", "NUM", "ID", "PROGRAM", "CONST", "VAR", "PROCEDURE",
  "FUNCTION", "BEGIN", "END", "ARRAY", "OF", "IF", "THEN", "ELSE", "FOR",
  "TO", "DO", "INTEGER", "BOOLEAN", "REAL", "CHAR", "DOTDOT", "NOT", "';'",
  "'.'", "':'", "','", "'['", "']'", "'('", "')'", "$accept",
  "programstruct", "program_head", "program_body", "const_declarations",
  "const_declaration", "const_value", "var_declarations",
  "var_declaration", "idlist", "type", "simple_type", "period",
  "subprogram_declarations", "subprogram", "subprogram_head",
  "formal_parameter", "parameter_list", "parameter", "var_parameter",
  "value_parameter", "subprogram_body", "compound_statement",
  "statement_list", "statement", "variable", "id_varpart",
  "procedure_call", "else_part", "expression_list", "expression",
  "simple_expression", "term", "factor", 0
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
     295,    59,    46,    58,    44,    91,    93,    40,    41
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    49,    50,    51,    51,    51,    52,    52,    53,    53,
      54,    54,    54,    55,    55,    55,    56,    56,    57,    57,
      57,    58,    58,    58,    59,    59,    59,    60,    60,    60,
      60,    61,    61,    62,    62,    63,    64,    64,    64,    64,
      65,    65,    66,    66,    67,    67,    68,    69,    70,    70,
      71,    72,    72,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    74,    75,    75,    76,    76,    77,
      77,    78,    78,    78,    79,    79,    79,    79,    79,    79,
      79,    80,    80,    80,    80,    81,    81,    81,    81,    81,
      81,    82,    82,    82,    82,    82,    82
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
       8,     8,     0,     1,     2,     3,     0,     1,     4,     2,
       0,     3,     1,     1,     3,     3,     3,     3,     3,     3,
       1,     3,     3,     3,     1,     3,     3,     3,     3,     3,
       1,     1,     1,     4,     3,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     4,     0,     0,     0,     5,     3,     1,     0,     9,
       0,     0,    17,    17,    12,     0,     0,     2,     0,    34,
      34,     0,     8,    23,    22,     0,     0,     0,     0,     0,
       0,    15,    11,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     6,     7,    13,    14,     0,    23,     0,    26,
       0,    27,    29,    28,    30,    19,    24,    21,    38,    41,
      39,    41,    63,    67,     0,     0,    55,     0,    52,     0,
      54,    33,     0,    10,     0,     0,     0,    36,     0,     0,
       0,    64,     0,     0,    91,    66,     0,     0,    92,     0,
      80,    84,    90,     0,    50,     0,     0,     9,    17,    35,
      18,     0,     0,     0,     0,     0,    43,    44,    45,     0,
      73,     0,    72,     0,     0,    96,     0,    95,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    51,    53,    17,     0,     0,
       0,     0,    46,     0,     0,    40,    37,     0,    65,    68,
      70,     0,    94,    70,    74,    75,    76,    77,    78,    79,
      81,    83,    82,    85,    86,    87,    88,    89,     0,     0,
       0,    48,    32,     0,     0,    47,    42,    71,     0,    57,
      93,    56,     0,     0,    49,     0,    25,    69,     0,     0,
       0,     0,    31,     0,     0,     0,     0,    61,    59,    60,
      58
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    11,    12,    16,    32,    19,    25,   104,
      55,    56,   102,    27,    40,    41,    77,   105,   106,   107,
     108,    99,    66,    67,    68,    88,    81,    70,   179,   111,
     112,    90,    91,    92
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -105
static const yytype_int16 yypact[] =
{
      17,  -105,    19,    35,    23,  -105,  -105,  -105,   146,    -6,
      20,    25,    48,    48,  -105,    70,    36,  -105,    62,  -105,
    -105,   115,    67,    79,  -105,   139,    73,   127,   127,   111,
     144,  -105,  -105,   171,   160,    16,   163,    64,    65,   134,
     140,   151,  -105,  -105,  -105,  -105,   115,  -105,   121,  -105,
     150,  -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,   149,
    -105,   149,  -105,    -1,    15,   178,  -105,    72,  -105,   189,
    -105,  -105,    89,  -105,    16,   192,     9,  -105,   173,    31,
      31,  -105,   187,    29,  -105,    49,    29,    29,  -105,   188,
     183,   194,  -105,   210,  -105,   134,    29,    -6,    48,  -105,
    -105,   181,    88,    78,   133,   -29,  -105,  -105,  -105,   177,
    -105,    94,  -105,    71,   117,  -105,    31,  -105,   174,   117,
      29,    29,    29,    29,    29,    29,    29,    29,    29,    29,
      29,    29,    29,    29,    81,  -105,  -105,    48,   196,   205,
     206,   197,  -105,   177,     9,  -105,  -105,    29,  -105,  -105,
     195,    97,  -105,   195,   162,   162,   162,   162,   162,   162,
     194,   194,   194,  -105,  -105,  -105,  -105,  -105,   198,   199,
     196,  -105,  -105,   190,   177,  -105,  -105,  -105,   117,  -105,
    -105,  -105,    84,    90,  -105,   209,  -105,  -105,   200,   201,
     202,   203,  -105,   117,   117,   117,   117,  -105,  -105,  -105,
    -105
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -105,  -105,  -105,  -105,    -4,  -105,   182,   -10,  -105,    -5,
     156,  -102,  -105,   213,  -105,  -105,   179,  -105,    95,  -105,
     135,  -105,   -26,  -105,   -89,   -39,  -105,  -105,    91,   -71,
     -60,    80,  -104,   -72
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -67
static const yytype_int16 yytable[] =
{
      69,    42,    43,    20,    89,    13,   135,   146,   -66,   113,
      47,   115,   144,    26,   117,    10,    82,    49,     1,   145,
       5,    14,   160,   161,   162,   150,    83,   118,    24,    48,
     153,   103,   110,    84,    85,     7,   136,     2,     6,    15,
      83,   175,    83,    50,    79,   151,    80,    84,    85,    84,
      85,    51,    52,    53,    54,    86,    69,   163,   164,   165,
     166,   167,    87,    23,     8,    58,    60,    17,    98,    86,
      18,    86,   186,    21,   169,    69,    87,    22,    87,    47,
      69,    24,   168,    59,    61,   188,    33,   177,   138,   187,
      97,   190,    83,   137,    79,    83,   116,    24,    94,    84,
      85,    83,    84,    85,   197,   198,   199,   200,    84,    85,
      10,    -9,   171,    95,    -9,   147,    35,    36,    62,   149,
     -20,    86,   189,   191,    86,    29,    30,   170,    87,    44,
      86,    87,   140,    31,   141,    62,    63,    87,   147,    69,
     148,   147,    39,   -62,   184,   180,    64,     9,   -62,    65,
      37,    38,    39,    63,    69,    69,    69,    69,   -62,    39,
     -62,    47,    45,    64,    74,    36,    65,    10,    -9,    -9,
      -9,    -9,   126,   127,    46,   -62,   143,    36,   128,    24,
      34,    71,    57,   -16,   -16,   -16,   120,   121,   122,   123,
     124,   125,    72,   126,   127,    75,    76,    93,    96,   128,
     154,   155,   156,   157,   158,   159,   129,   130,   131,   132,
     101,   133,    51,    52,    53,    54,   109,   114,   119,   134,
     139,    39,   152,   172,   173,   174,   178,   192,    73,   185,
     100,   182,   183,    28,   193,   194,   195,   196,   142,   176,
      78,     0,     0,     0,   181
};

static const yytype_int16 yycheck[] =
{
      39,    27,    28,    13,    64,     9,    95,   109,     9,    80,
       1,    83,    41,    18,    86,    21,     1,     1,     1,    48,
       1,     1,   126,   127,   128,   114,    11,    87,    19,    34,
     119,    22,     1,    18,    19,     0,    96,    20,    19,    19,
      11,   143,    11,    27,    45,   116,    47,    18,    19,    18,
      19,    35,    36,    37,    38,    40,    95,   129,   130,   131,
     132,   133,    47,     1,    41,     1,     1,    42,    72,    40,
      22,    40,   174,     3,   134,   114,    47,    41,    47,     1,
     119,    19,     1,    19,    19,     1,    19,   147,    98,   178,
       1,     1,    11,    97,    45,    11,    47,    19,    26,    18,
      19,    11,    18,    19,   193,   194,   195,   196,    18,    19,
      21,    22,   138,    41,    25,    44,    43,    44,     1,    48,
      41,    40,   182,   183,    40,    10,    11,   137,    47,    18,
      40,    47,    44,    18,    46,     1,    19,    47,    44,   178,
      46,    44,    25,    26,   170,    48,    29,     1,    31,    32,
      23,    24,    25,    19,   193,   194,   195,   196,    41,    25,
      26,     1,    18,    29,    43,    44,    32,    21,    22,    23,
      24,    25,    10,    11,     3,    41,    43,    44,    16,    19,
      41,    41,    19,    23,    24,    25,     3,     4,     5,     6,
       7,     8,    41,    10,    11,    45,    47,    19,     9,    16,
     120,   121,   122,   123,   124,   125,    12,    13,    14,    15,
      18,    17,    35,    36,    37,    38,    43,    30,    30,     9,
      39,    25,    48,    18,    18,    28,    31,    18,    46,    39,
      74,    33,    33,    20,    34,    34,    34,    34,   103,   144,
      61,    -1,    -1,    -1,   153
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    20,    50,    51,     1,    19,     0,    41,     1,
      21,    52,    53,    53,     1,    19,    54,    42,    22,    56,
      56,     3,    41,     1,    19,    57,    58,    62,    62,    10,
      11,    18,    55,    19,    41,    43,    44,    23,    24,    25,
      63,    64,    71,    71,    18,    18,     3,     1,    58,     1,
      27,    35,    36,    37,    38,    59,    60,    19,     1,    19,
       1,    19,     1,    19,    29,    32,    71,    72,    73,    74,
      76,    41,    41,    55,    43,    45,    47,    65,    65,    45,
      47,    75,     1,    11,    18,    19,    40,    47,    74,    79,
      80,    81,    82,    19,    26,    41,     9,     1,    53,    70,
      59,    18,    61,    22,    58,    66,    67,    68,    69,    43,
       1,    78,    79,    78,    30,    82,    47,    82,    79,    30,
       3,     4,     5,     6,     7,     8,    10,    11,    16,    12,
      13,    14,    15,    17,     9,    73,    79,    53,    56,    39,
      44,    46,    69,    43,    41,    48,    60,    44,    46,    48,
      73,    78,    48,    73,    80,    80,    80,    80,    80,    80,
      81,    81,    81,    82,    82,    82,    82,    82,     1,    79,
      56,    71,    18,    18,    28,    60,    67,    79,    31,    77,
      48,    77,    33,    33,    71,    39,    60,    73,     1,    79,
       1,    79,    18,    34,    34,    34,    34,    73,    73,    73,
      73
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
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
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

/* Prevent warnings from -Wmissing-prototypes.  */
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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

/* Line 1455 of yacc.c  */
#line 53 ".\\tmp.y"
    {(yyval.a) = MakeNode(1,{(yyvsp[(1) - (4)].a),(yyvsp[(3) - (4)].a)});rt=(yyval.a);;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 56 ".\\tmp.y"
    {(yyval.a)=MakeNode(2,{(yyvsp[(2) - (2)].c)});;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 57 ".\\tmp.y"
    {(yyval.a)=nullptr;;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 58 ".\\tmp.y"
    {(yyval.a)=nullptr;;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 61 ".\\tmp.y"
    {(yyval.a)=MakeNode(3,{(yyvsp[(1) - (4)].a),(yyvsp[(2) - (4)].a),(yyvsp[(3) - (4)].a),(yyvsp[(4) - (4)].a)});;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 62 ".\\tmp.y"
    {(yyval.a)=nullptr;;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 66 ".\\tmp.y"
    {(yyval.a)=MakeNode(4,{(yyvsp[(2) - (3)].a)});;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 69 ".\\tmp.y"
    {(yyval.a)=MakeNode(5,{});;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 72 ".\\tmp.y"
    {(yyval.a)=MakeNode(6,	{(yyvsp[(1) - (5)].a),(yyvsp[(3) - (5)].c),(yyvsp[(5) - (5)].a)});;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 75 ".\\tmp.y"
    {(yyval.a)=MakeNode(7,	{(yyvsp[(1) - (3)].c),(yyvsp[(3) - (3)].a)});;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 76 ".\\tmp.y"
    {(yyval.a)=nullptr;;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 79 ".\\tmp.y"
    {(yyval.a)=MakeNode(8,{(yyvsp[(2) - (2)].c)});;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 82 ".\\tmp.y"
    {(yyval.a)=MakeNode(9,{(yyvsp[(2) - (2)].c)});;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 85 ".\\tmp.y"
    {(yyval.a)=MakeNode(10,{(yyvsp[(1) - (1)].c)});;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 88 ".\\tmp.y"
    {(yyval.a)=MakeNode(11,{(yyvsp[(2) - (3)].a)});;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 91 ".\\tmp.y"
    {(yyval.a)=MakeNode(12,{});;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 94 ".\\tmp.y"
    {(yyval.a)=MakeNode(13,{(yyvsp[(1) - (5)].a),(yyvsp[(3) - (5)].a),(yyvsp[(5) - (5)].a)});;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 97 ".\\tmp.y"
    {(yyval.a)=MakeNode(14,{(yyvsp[(1) - (3)].a),(yyvsp[(3) - (3)].a)});;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 99 ".\\tmp.y"
    {(yyval.a)=nullptr;;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 102 ".\\tmp.y"
    {(yyval.a)=MakeNode(15,{(yyvsp[(1) - (3)].a),(yyvsp[(3) - (3)].c)});;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 105 ".\\tmp.y"
    {(yyval.a)=MakeNode(16,{(yyvsp[(1) - (1)].c)});;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 106 ".\\tmp.y"
    {(yyval.a)=nullptr;;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 110 ".\\tmp.y"
    {(yyval.a)=MakeNode(17,{(yyvsp[(1) - (1)].a)});;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 113 ".\\tmp.y"
    {(yyval.a)=MakeNode(18,{(yyvsp[(3) - (6)].a),(yyvsp[(6) - (6)].a)});;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 114 ".\\tmp.y"
    {(yyval.a)=nullptr;;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 117 ".\\tmp.y"
    {(yyval.a)=MakeNode(19,{});;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 120 ".\\tmp.y"
    {(yyval.a)=MakeNode(20,{});;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 123 ".\\tmp.y"
    {(yyval.a)=MakeNode(21,{});;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 126 ".\\tmp.y"
    {(yyval.a)=MakeNode(22,{});;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 129 ".\\tmp.y"
    {(yyval.a)=MakeNode(23,{(yyvsp[(1) - (5)].a),(yyvsp[(3) - (5)].c),(yyvsp[(5) - (5)].c)});;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 132 ".\\tmp.y"
    {(yyval.a)=MakeNode(24,{(yyvsp[(1) - (3)].c),(yyvsp[(3) - (3)].c)});;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 135 ".\\tmp.y"
    {(yyval.a)=MakeNode(25,{(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].a)});;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 138 ".\\tmp.y"
    {(yyval.a)=MakeNode(26,{});;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 141 ".\\tmp.y"
    {(yyval.a)=MakeNode(27,{(yyvsp[(1) - (3)].a),(yyvsp[(3) - (3)].a)});;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 144 ".\\tmp.y"
    {(yyval.a)=MakeNode(28,{(yyvsp[(2) - (3)].c),(yyvsp[(3) - (3)].a)});;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 147 ".\\tmp.y"
    {(yyval.a)=MakeNode(29,{(yyvsp[(2) - (5)].c),(yyvsp[(3) - (5)].a),(yyvsp[(5) - (5)].a)});;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 148 ".\\tmp.y"
    {(yyval.a)=nullptr;;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 149 ".\\tmp.y"
    {(yyval.a)=nullptr;;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 152 ".\\tmp.y"
    {(yyval.a)=MakeNode(30,{(yyvsp[(2) - (3)].a)});;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 155 ".\\tmp.y"
    {(yyval.a)=MakeNode(31,{});;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 158 ".\\tmp.y"
    {(yyval.a)=MakeNode(32,{(yyvsp[(1) - (3)].a),(yyvsp[(3) - (3)].a)});;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 161 ".\\tmp.y"
    {(yyval.a)=MakeNode(33,{(yyvsp[(1) - (1)].a)});;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 164 ".\\tmp.y"
    {(yyval.a)=MakeNode(34,{(yyvsp[(1) - (1)].a)});;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 167 ".\\tmp.y"
    {(yyval.a)=MakeNode(35,{(yyvsp[(1) - (1)].a)});;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 170 ".\\tmp.y"
    {(yyval.a)=MakeNode(36,{(yyvsp[(2) - (2)].a)});;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 173 ".\\tmp.y"
    {(yyval.a)=MakeNode(37,{(yyvsp[(1) - (3)].a),(yyvsp[(3) - (3)].a)});;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 176 ".\\tmp.y"
    {(yyval.a)=MakeNode(38,{(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].a),(yyvsp[(3) - (3)].a)});;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 177 ".\\tmp.y"
    {(yyval.a)=nullptr;;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 180 ".\\tmp.y"
    {(yyval.a)=MakeNode(39,{(yyvsp[(2) - (3)].a)});;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 183 ".\\tmp.y"
    {(yyval.a)=MakeNode(40,{(yyvsp[(1) - (3)].a),(yyvsp[(3) - (3)].a)});;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 185 ".\\tmp.y"
    {(yyval.a)=MakeNode(41,{(yyvsp[(1) - (1)].a)});;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 187 ".\\tmp.y"
    {(yyval.a)=MakeNode(42,{(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].b),(yyvsp[(3) - (3)].a)});;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 189 ".\\tmp.y"
    {(yyval.a)=MakeNode(43,{(yyvsp[(1) - (1)].a)});;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 191 ".\\tmp.y"
    {(yyval.a)=MakeNode(44,{(yyvsp[(1) - (1)].a)});;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 193 ".\\tmp.y"
    {(yyval.a)=MakeNode(45,{(yyvsp[(2) - (5)].a),(yyvsp[(4) - (5)].a),(yyvsp[(5) - (5)].a)});;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 194 ".\\tmp.y"
    {(yyval.a)=nullptr;;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 197 ".\\tmp.y"
    {(yyval.a)=MakeNode(46,{(yyvsp[(2) - (8)].c),(yyvsp[(3) - (8)].b),(yyvsp[(4) - (8)].a),(yyvsp[(6) - (8)].a),(yyvsp[(8) - (8)].a)});;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 198 ".\\tmp.y"
    {(yyval.a)=nullptr;;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 199 ".\\tmp.y"
    {(yyval.a)=nullptr;;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 200 ".\\tmp.y"
    {(yyval.a)=nullptr;;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 202 ".\\tmp.y"
    {(yyval.a)=MakeNode(47,{});;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 203 ".\\tmp.y"
    {(yyval.a)=nullptr;;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 205 ".\\tmp.y"
    {(yyval.a)=MakeNode(48,{(yyvsp[(1) - (2)].c),(yyvsp[(2) - (2)].a)});;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 207 ".\\tmp.y"
    {(yyval.a)=MakeNode(49,{(yyvsp[(2) - (3)].a)});;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 209 ".\\tmp.y"
    {(yyval.a)=MakeNode(50,{});;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 211 ".\\tmp.y"
    {(yyval.a)=MakeNode(51,{(yyvsp[(1) - (1)].c)});;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 213 ".\\tmp.y"
    {(yyval.a)=MakeNode(52,{(yyvsp[(1) - (4)].c),(yyvsp[(3) - (4)].a)});;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 215 ".\\tmp.y"
    {(yyval.a)=MakeNode(53,{(yyvsp[(2) - (2)].a)});;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 217 ".\\tmp.y"
    {(yyval.a)=MakeNode(54,{});;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 219 ".\\tmp.y"
    {(yyval.a)=MakeNode(55,{(yyvsp[(1) - (3)].a),(yyvsp[(3) - (3)].a)});;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 221 ".\\tmp.y"
    {(yyval.a)=MakeNode(56,{(yyvsp[(1) - (1)].a)});;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 222 ".\\tmp.y"
    {(yyval.a)=nullptr;;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 223 ".\\tmp.y"
    {(yyval.a)=MakeNode(57,{(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].b),(yyvsp[(3) - (3)].a)});;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 224 ".\\tmp.y"
    {(yyval.a)=MakeNode(57,{(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].b),(yyvsp[(3) - (3)].a)});;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 225 ".\\tmp.y"
    {(yyval.a)=MakeNode(57,{(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].b),(yyvsp[(3) - (3)].a)});;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 226 ".\\tmp.y"
    {(yyval.a)=MakeNode(57,{(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].b),(yyvsp[(3) - (3)].a)});;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 227 ".\\tmp.y"
    {(yyval.a)=MakeNode(57,{(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].b),(yyvsp[(3) - (3)].a)});;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 228 ".\\tmp.y"
    {(yyval.a)=MakeNode(57,{(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].b),(yyvsp[(3) - (3)].a)});;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 231 ".\\tmp.y"
    {(yyval.a)=MakeNode(58,{(yyvsp[(1) - (1)].a)});;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 232 ".\\tmp.y"
    {(yyval.a)=MakeNode(59,{(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].b),(yyvsp[(3) - (3)].a)});;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 233 ".\\tmp.y"
    {(yyval.a)=MakeNode(59,{(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].b),(yyvsp[(3) - (3)].a)});;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 234 ".\\tmp.y"
    {(yyval.a)=MakeNode(59,{(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].b),(yyvsp[(3) - (3)].a)});;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 237 ".\\tmp.y"
    {(yyval.a)=MakeNode(60,{(yyvsp[(1) - (1)].a)});;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 238 ".\\tmp.y"
    {(yyval.a)=MakeNode(61,{(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].b),(yyvsp[(3) - (3)].a)});;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 239 ".\\tmp.y"
    {(yyval.a)=MakeNode(61,{(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].b),(yyvsp[(3) - (3)].a)});;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 240 ".\\tmp.y"
    {(yyval.a)=MakeNode(61,{(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].b),(yyvsp[(3) - (3)].a)});;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 241 ".\\tmp.y"
    {(yyval.a)=MakeNode(61,{(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].b),(yyvsp[(3) - (3)].a)});;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 242 ".\\tmp.y"
    {(yyval.a)=MakeNode(61,{(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].b),(yyvsp[(3) - (3)].a)});;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 244 ".\\tmp.y"
    {(yyval.a)=MakeNode(62,{(yyvsp[(1) - (1)].a)});;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 245 ".\\tmp.y"
    {(yyval.a)=MakeNode(63,{(yyvsp[(1) - (1)].c)});;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 246 ".\\tmp.y"
    {(yyval.a)=MakeNode(64,{(yyvsp[(1) - (1)].a)});;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 247 ".\\tmp.y"
    {(yyval.a)=MakeNode(65,{(yyvsp[(1) - (4)].c),(yyvsp[(3) - (4)].a)});;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 248 ".\\tmp.y"
    {(yyval.a)=MakeNode(66,{(yyvsp[(2) - (3)].a)});;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 249 ".\\tmp.y"
    {(yyval.a)=MakeNode(67,{(yyvsp[(2) - (2)].a)});;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 250 ".\\tmp.y"
    {(yyval.a)=MakeNode(68,{(yyvsp[(2) - (2)].a)});;}
    break;



/* Line 1455 of yacc.c  */
#line 2246 "tmp.tab.c"
      default: break;
    }
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
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
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



/* Line 1675 of yacc.c  */
#line 253 ".\\tmp.y"

 
/////////////////////////////////////////////////////////////////////////////
// programs section

 
void yyerror(const char *text)
{
   fprintf(stderr,"%d:%s\n",yylinenum,text);
}