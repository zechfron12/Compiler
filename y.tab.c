/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

	void yyerror(char* s);
	int yylex();
	#include "stdio.h"
	#include "stdlib.h"
	#include "ctype.h"
	#include "string.h"
	void ins();
	void insV();
	int flag=0;
	extern char curid[20];
	extern char curtype[20];
	extern char curval[20];
	extern int currnest;
	void deletedata (int );
	int checkscope(char*);
	int check_id_is_func(char *);
	void insertST(char*, char*);
	void insertSTnest(char*, int);
	void insertSTparamscount(char*, int);
	int getSTparamscount(char*);
	int check_duplicate(char*);
	int check_declaration(char*, char *);
	int check_params(char*);
	int duplicate(char *s);
	int checkarray(char*);
	char currfunctype[100];
	char currfunc[100];
	char currfunccall[100];
	void insertSTF(char*);
	char gettype(char*,int);
	char getfirst(char*);
	extern int params_count;
	int call_params_count;


#line 103 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
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
   by #include "y.tab.h".  */
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
    PRINT = 268,
    RETURN = 269,
    VOID = 270,
    WHILE = 271,
    FOR = 272,
    DO = 273,
    BREAK = 274,
    identifier = 275,
    array_identifier = 276,
    integer_constant = 277,
    string_constant = 278,
    float_constant = 279,
    character_constant = 280,
    ELSE = 281,
    modulo_assignment_operator = 282,
    multiplication_assignment_operator = 283,
    division_assignment_operator = 284,
    addition_assignment_operator = 285,
    subtraction_assignment_operator = 286,
    assignment_operator = 287,
    OR_operator = 288,
    AND_operator = 289,
    equality_operator = 290,
    inequality_operator = 291,
    lessthan_assignment_operator = 292,
    lessthan_operator = 293,
    greaterthan_assignment_operator = 294,
    greaterthan_operator = 295,
    add_operator = 296,
    subtract_operator = 297,
    multiplication_operator = 298,
    division_operator = 299,
    modulo_operator = 300,
    exclamation_operator = 301,
    increment_operator = 302,
    decrement_operator = 303
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
#define PRINT 268
#define RETURN 269
#define VOID 270
#define WHILE 271
#define FOR 272
#define DO 273
#define BREAK 274
#define identifier 275
#define array_identifier 276
#define integer_constant 277
#define string_constant 278
#define float_constant 279
#define character_constant 280
#define ELSE 281
#define modulo_assignment_operator 282
#define multiplication_assignment_operator 283
#define division_assignment_operator 284
#define addition_assignment_operator 285
#define subtraction_assignment_operator 286
#define assignment_operator 287
#define OR_operator 288
#define AND_operator 289
#define equality_operator 290
#define inequality_operator 291
#define lessthan_assignment_operator 292
#define lessthan_operator 293
#define greaterthan_assignment_operator 294
#define greaterthan_operator 295
#define add_operator 296
#define subtract_operator 297
#define multiplication_operator 298
#define division_operator 299
#define modulo_operator 300
#define exclamation_operator 301
#define increment_operator 302
#define decrement_operator 303

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 38 "parser.y" /* yacc.c:355  */

	int val;

#line 243 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 260 "y.tab.c" /* yacc.c:358  */

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
# elif ! defined YYSIZE_T
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

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   257

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  71
/* YYNRULES -- Number of rules.  */
#define YYNRULES  144
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  224

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   303

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      53,    54,     2,     2,    50,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    49,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    51,     2,    52,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    55,     2,    56,     2,     2,     2,     2,
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
      45,    46,    47,    48
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    77,    77,    80,    83,    84,    87,    88,    91,    94,
      94,    97,    97,    98,    98,   102,   102,   105,   106,   109,
     110,   113,   114,   115,   118,   118,   118,   118,   119,   120,
     121,   122,   123,   126,   126,   126,   126,   129,   129,   129,
     129,   132,   132,   135,   135,   138,   141,   144,   147,   147,
     150,   150,   153,   156,   157,   160,   160,   163,   164,   167,
     167,   168,   168,   169,   169,   170,   173,   173,   176,   177,
     180,   181,   184,   184,   187,   188,   191,   191,   192,   192,
     193,   193,   195,   196,   206,   209,   212,   215,   218,   219,
     222,   230,   236,   242,   248,   254,   260,   261,   262,   263,
     267,   272,   273,   276,   277,   281,   282,   285,   286,   289,
     289,   289,   290,   290,   290,   293,   294,   297,   298,   301,
     302,   305,   305,   305,   308,   309,   312,   324,   324,   332,
     333,   334,   337,   337,   354,   354,   357,   357,   360,   360,
     361,   364,   365,   366,   367
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "INT", "CHAR", "FLOAT", "DOUBLE",
  "LONG", "SHORT", "SIGNED", "UNSIGNED", "STRUCT", "PRINT", "RETURN",
  "VOID", "WHILE", "FOR", "DO", "BREAK", "identifier", "array_identifier",
  "integer_constant", "string_constant", "float_constant",
  "character_constant", "ELSE", "modulo_assignment_operator",
  "multiplication_assignment_operator", "division_assignment_operator",
  "addition_assignment_operator", "subtraction_assignment_operator",
  "assignment_operator", "OR_operator", "AND_operator",
  "equality_operator", "inequality_operator",
  "lessthan_assignment_operator", "lessthan_operator",
  "greaterthan_assignment_operator", "greaterthan_operator",
  "add_operator", "subtract_operator", "multiplication_operator",
  "division_operator", "modulo_operator", "exclamation_operator",
  "increment_operator", "decrement_operator", "';'", "','", "'['", "']'",
  "'('", "')'", "'{'", "'}'", "$accept", "program", "declaration_list",
  "D", "declaration", "variable_declaration", "variable_declaration_list",
  "variable_declaration_identifier", "$@1", "$@2", "vdi",
  "identifier_array_type", "initilization_params", "initilization",
  "type_specifier", "unsigned_grammar", "signed_grammar", "long_grammar",
  "short_grammar", "function_declaration", "function_declaration_type",
  "function_declaration_param_statement", "params", "parameters_list",
  "$@3", "parameters_identifier_list",
  "parameters_identifier_list_breakup", "param_identifier", "$@4",
  "param_identifier_breakup", "statement", "compound_statement", "$@5",
  "statment_list", "expression_statment", "conditional_statements", "$@6",
  "conditional_statements_breakup", "iterative_statements", "$@7", "$@8",
  "$@9", "return_statement", "break_statement", "string_initilization",
  "array_initialization", "array_int_declarations",
  "array_int_declarations_breakup", "expression", "print",
  "simple_expression", "and_expression", "unary_relation_expression",
  "regular_expression", "relational_operators", "sum_expression",
  "sum_operators", "term", "MULOP", "factor", "mutable", "$@10",
  "immutable", "call", "$@11", "arguments", "arguments_list", "$@12", "A",
  "$@13", "constant", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,    59,
      44,    91,    93,    40,    41,   123,   125
};
# endif

#define YYPACT_NINF -71

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-71)))

#define YYTABLE_NINF -70

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     172,   -71,   -71,   -71,   -71,     3,    13,    61,    63,   -71,
      20,   -71,   172,   -71,    66,   -71,   172,   -71,   -71,   -71,
     -71,   -71,     3,    13,   -71,   -71,     3,    13,   -71,   -71,
     -71,   -71,    10,   -71,    49,   -71,   -71,   -71,     5,   -71,
     -71,   -71,   -71,   -71,   -71,    -7,    -7,   -71,    93,    53,
     204,   -12,    -3,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
      34,    35,    62,     8,    69,    74,   204,    79,    77,   -71,
     -71,   -71,   -71,   -71,   -12,   -71,    70,   -71,    93,   -71,
     -71,    78,   -71,   -71,   -71,   -71,   -71,    80,   -71,    98,
     100,   -71,    71,    76,    81,   -71,    73,   -71,   -71,   -71,
      98,   -71,    87,   108,   -71,    90,   172,   -71,   -12,   109,
     -71,    94,   -12,    70,   130,   -71,   -71,    96,   -71,    95,
     150,   -71,   -12,   -12,   -71,   -71,   -71,   -71,   -71,   -71,
      15,   -71,   -71,    15,   -71,   -71,   -71,    15,    70,    70,
      70,    70,    70,    70,   -71,   -71,   116,   127,   -71,    99,
     -71,   -71,   -31,   134,   -71,    -9,   136,   133,    70,    70,
     -71,   150,   132,   100,   -71,    76,    81,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,    -8,   -71,   -71,   -71,   -71,   -71,
     -71,    70,   -71,   -12,   -12,   -71,   135,   -71,   138,   -71,
     -71,   169,   204,   139,   204,     9,    -6,   142,   -71,   -71,
     144,   141,   174,   -71,   -71,   -71,   -71,    70,   -71,   169,
     -71,   -71,   204,   -71,    70,   146,   -71,   -71,   -71,   147,
     -71,   142,   -71,   -71
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    24,    25,    26,    27,    42,    44,    40,    36,    32,
       0,     2,     5,     6,     0,     7,    49,    41,    28,    43,
      29,    37,    42,    44,    31,    33,    42,    44,    30,     1,
       4,     3,    11,    13,     0,    10,    50,    45,     0,    48,
      38,    39,    34,    35,    46,    18,    18,     8,     0,     0,
      66,     0,     0,    12,    15,    14,    11,     9,    55,    51,
      54,     0,     0,     0,     0,     0,    66,     0,   126,   127,
     141,   142,   143,   144,     0,    71,     0,    65,     0,    47,
      60,     0,    59,    61,    62,    63,    64,     0,    99,    98,
     102,   104,   106,   108,   116,   120,   125,   124,   130,   131,
      16,   125,     0,     0,    17,    58,     0,    52,     0,     0,
      82,     0,     0,     0,     0,    84,   132,     0,   105,     0,
      66,    70,     0,     0,   113,   114,   110,   112,   109,   111,
       0,   117,   118,     0,   121,   122,   123,     0,     0,     0,
       0,     0,     0,     0,    96,    97,    23,     0,    20,     0,
      56,    53,     0,     0,    83,     0,     0,     0,   135,     0,
     129,    66,     0,   101,   103,   107,   115,   119,    95,    93,
      94,    91,    92,    90,     0,    19,    21,    22,    85,    57,
      72,     0,    76,     0,     0,   136,     0,   134,     0,    68,
      67,     0,    66,     0,    66,     0,     0,   140,   133,   128,
      89,     0,    75,   100,    77,    78,    80,     0,   137,     0,
      87,    86,    66,    73,     0,     0,   138,    88,    74,     0,
      81,   140,    79,   139
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -71,   -71,   186,   -71,   -71,    43,   -71,   154,   -71,   -71,
     158,   -71,   -71,   -71,     6,   -71,   -71,    24,    29,   -71,
     -71,   -71,   -71,   110,   -71,   -71,   -71,   -71,   -71,   -71,
     -50,   -71,   -71,    44,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,    84,   -71,    22,   -71,   -62,   -71,
     -46,   111,   -70,   -71,   -71,   102,   -71,   101,   -71,   103,
     -48,   -71,   -71,   -71,   -71,   -71,   -71,   -71,    14,   -71,
     -71
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,    11,    31,    12,    77,    34,    35,    45,    46,
      53,    54,   104,   175,    78,    28,    24,    18,    20,    15,
      16,    37,    38,    39,    49,    59,   107,    60,   105,   150,
     161,    80,    81,   162,    82,    83,   192,   213,    84,   194,
     214,   215,    85,    86,   148,   177,   201,   210,    87,    88,
      89,    90,    91,    92,   130,    93,   133,    94,   137,    95,
      96,   117,    97,    98,   158,   186,   187,   197,   208,   221,
      99
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      79,   111,   122,   101,   118,   100,    14,    17,    68,    69,
      70,    71,    72,    73,   119,   178,   114,    19,    14,   102,
      29,    62,    36,   180,   122,    51,   101,   122,    68,    69,
      70,    71,    72,    73,    74,    68,    69,    70,    71,    72,
      73,    76,   122,    13,    52,   182,    40,   191,   206,   103,
      42,   156,    41,   164,    74,    13,    43,   110,   205,    50,
     101,    76,   152,    44,   101,    21,   155,    25,    76,    22,
      23,    26,    27,    58,   101,   101,   168,   169,   170,   171,
     172,   173,   101,    62,   106,   101,    32,    33,   108,   101,
      68,    69,    70,    71,    72,    73,   185,   188,    47,    48,
     138,   139,   140,   141,   142,   143,   124,   125,   126,   127,
     128,   129,    36,    56,    33,   109,    74,   131,   132,   193,
     144,   145,   112,    76,   134,   135,   136,   113,   115,   121,
     116,   122,   153,   120,   123,   101,   101,   195,   196,   146,
     147,   149,   202,   154,   204,   216,   157,   159,   174,   160,
     178,   179,   219,    61,     1,     2,     3,     4,     5,     6,
       7,     8,   218,    62,    63,     9,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,     1,     2,     3,     4,
       5,     6,     7,     8,   181,   183,   184,     9,   190,   198,
     199,   200,   207,   203,   209,   220,    74,   211,    30,    75,
     212,   222,    57,    76,    55,   189,   -69,    61,     1,     2,
       3,     4,     5,     6,     7,     8,   151,    62,    63,     9,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
     176,   217,   165,   163,   166,   223,     0,     0,     0,     0,
     167,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      74,     0,     0,    75,     0,     0,     0,    76
};

static const yytype_int16 yycheck[] =
{
      50,    63,    33,    51,    74,    51,     0,     4,    20,    21,
      22,    23,    24,    25,    76,    23,    66,     4,    12,    22,
       0,    13,    16,    54,    33,    32,    74,    33,    20,    21,
      22,    23,    24,    25,    46,    20,    21,    22,    23,    24,
      25,    53,    33,     0,    51,    54,    22,    55,    54,    52,
      26,   113,    23,   123,    46,    12,    27,    49,    49,    54,
     108,    53,   108,    53,   112,     4,   112,     4,    53,     8,
       9,     8,     9,    20,   122,   123,   138,   139,   140,   141,
     142,   143,   130,    13,    50,   133,    20,    21,    53,   137,
      20,    21,    22,    23,    24,    25,   158,   159,    49,    50,
      27,    28,    29,    30,    31,    32,    35,    36,    37,    38,
      39,    40,   106,    20,    21,    53,    46,    41,    42,   181,
      47,    48,    53,    53,    43,    44,    45,    53,    49,    49,
      53,    33,    23,    55,    34,   183,   184,   183,   184,    52,
      32,    51,   192,    49,   194,   207,    16,    51,    32,    54,
      23,    52,   214,     3,     4,     5,     6,     7,     8,     9,
      10,    11,   212,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     4,     5,     6,     7,
       8,     9,    10,    11,    50,    49,    53,    15,    56,    54,
      52,    22,    50,    54,    50,    49,    46,    56,    12,    49,
      26,    54,    48,    53,    46,   161,    56,     3,     4,     5,
       6,     7,     8,     9,    10,    11,   106,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
     146,   209,   130,   122,   133,   221,    -1,    -1,    -1,    -1,
     137,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    -1,    -1,    49,    -1,    -1,    -1,    53
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    11,    15,
      58,    59,    61,    62,    71,    76,    77,     4,    74,     4,
      75,     4,     8,     9,    73,     4,     8,     9,    72,     0,
      59,    60,    20,    21,    63,    64,    71,    78,    79,    80,
      74,    75,    74,    75,    53,    65,    66,    49,    50,    81,
      54,    32,    51,    67,    68,    67,    20,    64,    20,    82,
      84,     3,    13,    14,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    46,    49,    53,    62,    71,    87,
      88,    89,    91,    92,    95,    99,   100,   105,   106,   107,
     108,   109,   110,   112,   114,   116,   117,   119,   120,   127,
     107,   117,    22,    52,    69,    85,    50,    83,    53,    53,
      49,   105,    53,    53,    87,    49,    53,   118,   109,   105,
      55,    49,    33,    34,    35,    36,    37,    38,    39,    40,
     111,    41,    42,   113,    43,    44,    45,   115,    27,    28,
      29,    30,    31,    32,    47,    48,    52,    32,   101,    51,
      86,    80,   107,    23,    49,   107,   105,    16,   121,    51,
      54,    87,    90,   108,   109,   112,   114,   116,   105,   105,
     105,   105,   105,   105,    32,    70,   101,   102,    23,    52,
      54,    50,    54,    49,    53,   105,   122,   123,   105,    90,
      56,    55,    93,   105,    96,   107,   107,   124,    54,    52,
      22,   103,    87,    54,    87,    49,    54,    50,   125,    50,
     104,    56,    26,    94,    97,    98,   105,   103,    87,   105,
      49,   126,    54,   125
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    57,    58,    59,    60,    60,    61,    61,    62,    63,
      63,    65,    64,    66,    64,    67,    67,    68,    68,    69,
      69,    70,    70,    70,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    72,    72,    72,    72,    73,    73,    73,
      73,    74,    74,    75,    75,    76,    77,    78,    79,    79,
      81,    80,    82,    83,    83,    85,    84,    86,    86,    87,
      87,    87,    87,    87,    87,    87,    89,    88,    90,    90,
      91,    91,    93,    92,    94,    94,    96,    95,    97,    95,
      98,    95,    99,    99,   100,   101,   102,   103,   104,   104,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     106,   107,   107,   108,   108,   109,   109,   110,   110,   111,
     111,   111,   111,   111,   111,   112,   112,   113,   113,   114,
     114,   115,   115,   115,   116,   116,   117,   118,   117,   119,
     119,   119,   121,   120,   122,   122,   124,   123,   126,   125,
     125,   127,   127,   127,   127
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     0,     1,     1,     3,     3,
       1,     0,     3,     0,     3,     1,     2,     2,     0,     3,
       2,     1,     1,     0,     1,     1,     1,     1,     2,     2,
       2,     2,     1,     1,     2,     2,     0,     1,     2,     2,
       0,     1,     0,     1,     0,     2,     3,     3,     1,     0,
       0,     3,     2,     2,     0,     0,     3,     2,     0,     1,
       1,     1,     1,     1,     1,     1,     0,     4,     2,     0,
       2,     1,     0,     7,     2,     0,     0,     6,     0,     9,
       0,     8,     2,     3,     2,     2,     4,     2,     2,     0,
       3,     3,     3,     3,     3,     3,     2,     2,     1,     1,
       6,     3,     1,     3,     1,     2,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     0,     5,     3,
       1,     1,     0,     5,     1,     0,     0,     3,     0,     4,
       0,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
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
  unsigned long int yylno = yyrline[yyrule];
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
                       &(yyvsp[(yyi + 1) - (yynrhs)])
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
| yyreduce -- Do a reduction.  |
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
        case 11:
#line 97 "parser.y" /* yacc.c:1646  */
    {if(duplicate(curid)){yyerror("Duplicate\n");}insertSTnest(curid,currnest); ins();  }
#line 1539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 98 "parser.y" /* yacc.c:1646  */
    {if(duplicate(curid)){yyerror("Duplicate\n");}insertSTnest(curid,currnest); ins();  }
#line 1545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 109 "parser.y" /* yacc.c:1646  */
    {if((yyval.val) < 1) {yyerror("Wrong array size"); } }
#line 1551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 141 "parser.y" /* yacc.c:1646  */
    { strcpy(currfunctype, curtype); strcpy(currfunc, curid); check_duplicate(curid); insertSTF(curid); ins(); }
#line 1557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 150 "parser.y" /* yacc.c:1646  */
    { check_params(curtype); }
#line 1563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 150 "parser.y" /* yacc.c:1646  */
    { insertSTparamscount(currfunc, params_count); }
#line 1569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 160 "parser.y" /* yacc.c:1646  */
    { ins();insertSTnest(curid,1); params_count++; }
#line 1575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 173 "parser.y" /* yacc.c:1646  */
    {currnest++;}
#line 1581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 173 "parser.y" /* yacc.c:1646  */
    {deletedata(currnest);currnest--;}
#line 1587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 184 "parser.y" /* yacc.c:1646  */
    {if((yyvsp[-1].val)!=1){yyerror("Condition checking is not of type int\n");}}
#line 1593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 191 "parser.y" /* yacc.c:1646  */
    {if((yyvsp[-1].val)!=1){yyerror("Condition checking is not of type int\n");}}
#line 1599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 192 "parser.y" /* yacc.c:1646  */
    {if((yyvsp[-1].val)!=1){yyerror("Condition checking is not of type int\n");}}
#line 1605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 193 "parser.y" /* yacc.c:1646  */
    {if((yyvsp[-1].val)!=1){yyerror("Condition checking is not of type int\n");}}
#line 1611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 195 "parser.y" /* yacc.c:1646  */
    {if(strcmp(currfunctype,"void")) {yyerror("Returning void of a non-void function\n"); }}
#line 1617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 196 "parser.y" /* yacc.c:1646  */
    {

										if((currfunctype[0]=='i' || currfunctype[0]=='c') && (yyvsp[-1].val)!=1)
										{
											yyerror("Expression doesn't match return type of function\n"); 
										}
			              
			                     	}
#line 1630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 209 "parser.y" /* yacc.c:1646  */
    {insV();}
#line 1636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 222 "parser.y" /* yacc.c:1646  */
    {
																	  if((yyvsp[-2].val)==1 && (yyvsp[0].val)==1) 
																	  {
																				(yyval.val)=1;
																				} 
																				else 
																				{(yyval.val)=-1; yyerror("Type mismatch\n"); } 
																			}
#line 1649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 230 "parser.y" /* yacc.c:1646  */
    {
																	  if((yyvsp[-2].val)==1 && (yyvsp[0].val)==1) 
																				(yyval.val)=1; 
																				else 
																				{(yyval.val)=-1; yyerror("Type mismatch\n"); } 
																			}
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 236 "parser.y" /* yacc.c:1646  */
    {
																	  if((yyvsp[-2].val)==1 && (yyvsp[0].val)==1) 
																				(yyval.val)=1; 
																				else 
																				{(yyval.val)=-1; yyerror("Type mismatch\n"); } 
																			}
#line 1671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 242 "parser.y" /* yacc.c:1646  */
    {
																	  if((yyvsp[-2].val)==1 && (yyvsp[0].val)==1) 
																				(yyval.val)=1; 
																				else 
																				{(yyval.val)=-1; yyerror("Type mismatch\n"); } 
																			}
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 248 "parser.y" /* yacc.c:1646  */
    {
																	  if((yyvsp[-2].val)==1 && (yyvsp[0].val)==1) 
																				(yyval.val)=1; 
																				else 
																				{(yyval.val)=-1; yyerror("Type mismatch\n"); } 
																			}
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 254 "parser.y" /* yacc.c:1646  */
    {
																	  if((yyvsp[-2].val)==1 && (yyvsp[0].val)==1) 
																				(yyval.val)=1; 
																				else 
																				{(yyval.val)=-1; yyerror("Type mismatch\n"); } 
																			}
#line 1704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 260 "parser.y" /* yacc.c:1646  */
    {if((yyvsp[-1].val) == 1) (yyval.val)=1; else (yyval.val)=-1;}
#line 1710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 261 "parser.y" /* yacc.c:1646  */
    {if((yyvsp[-1].val) == 1) (yyval.val)=1; else (yyval.val)=-1;}
#line 1716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 262 "parser.y" /* yacc.c:1646  */
    {if((yyvsp[0].val) == 1) (yyval.val)=1; else (yyval.val)=-1;}
#line 1722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 263 "parser.y" /* yacc.c:1646  */
    {if((yyvsp[0].val) == 1) (yyval.val)=1; else (yyval.val)=-1;}
#line 1728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 267 "parser.y" /* yacc.c:1646  */
    { (yyval.val) = 1;}
#line 1734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 272 "parser.y" /* yacc.c:1646  */
    {if((yyvsp[-2].val) == 1 && (yyvsp[0].val)==1) (yyval.val)=1; else (yyval.val)=-1;}
#line 1740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 273 "parser.y" /* yacc.c:1646  */
    {if((yyvsp[0].val) == 1) (yyval.val)=1; else (yyval.val)=-1;}
#line 1746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 276 "parser.y" /* yacc.c:1646  */
    {if((yyvsp[-2].val) == 1 && (yyvsp[0].val)==1) (yyval.val)=1; else (yyval.val)=-1;}
#line 1752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 277 "parser.y" /* yacc.c:1646  */
    {if((yyvsp[0].val) == 1) (yyval.val)=1; else (yyval.val)=-1;}
#line 1758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 281 "parser.y" /* yacc.c:1646  */
    {if((yyvsp[0].val)==1) (yyval.val)=1; else (yyval.val)=-1;}
#line 1764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 282 "parser.y" /* yacc.c:1646  */
    {if((yyvsp[0].val) == 1) (yyval.val)=1; else (yyval.val)=-1;}
#line 1770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 285 "parser.y" /* yacc.c:1646  */
    {if((yyvsp[-2].val) == 1 && (yyvsp[0].val)==1) (yyval.val)=1; else (yyval.val)=-1;}
#line 1776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 286 "parser.y" /* yacc.c:1646  */
    {if((yyvsp[0].val) == 1) (yyval.val)=1; else (yyval.val)=-1;}
#line 1782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 293 "parser.y" /* yacc.c:1646  */
    {if((yyvsp[-2].val) == 1 && (yyvsp[0].val)==1) (yyval.val)=1; else (yyval.val)=-1;}
#line 1788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 294 "parser.y" /* yacc.c:1646  */
    {if((yyvsp[0].val) == 1) (yyval.val)=1; else (yyval.val)=-1;}
#line 1794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 301 "parser.y" /* yacc.c:1646  */
    {if((yyvsp[-2].val) == 1 && (yyvsp[0].val)==1) (yyval.val)=1; else (yyval.val)=-1;}
#line 1800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 302 "parser.y" /* yacc.c:1646  */
    {if((yyvsp[0].val) == 1) (yyval.val)=1; else (yyval.val)=-1;}
#line 1806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 308 "parser.y" /* yacc.c:1646  */
    {if((yyvsp[0].val) == 1) (yyval.val)=1; else (yyval.val)=-1;}
#line 1812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 309 "parser.y" /* yacc.c:1646  */
    {if((yyvsp[0].val) == 1) (yyval.val)=1; else (yyval.val)=-1;}
#line 1818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 312 "parser.y" /* yacc.c:1646  */
    {
						  if(check_id_is_func(curid))
						  {yyerror("Function name used as Identifier\n"); exit(8);}
			              if(!checkscope(curid))
			              {printf("%s\n",curid);yyerror("Undeclared\n");} 
			              if(!checkarray(curid))
			              {printf("%s\n",curid);yyerror("Array ID has no subscript\n");}
			              if(gettype(curid,0)=='i' || gettype(curid,1)== 'c')
			              (yyval.val) = 1;
			              else
			              (yyval.val) = -1;
			              }
#line 1835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 324 "parser.y" /* yacc.c:1646  */
    {if(!checkscope(curid)){printf("%s\n",curid);yyerror("Undeclared\n");}}
#line 1841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 325 "parser.y" /* yacc.c:1646  */
    {if(gettype(curid,0)=='i' || gettype(curid,1)== 'c')
			              		(yyval.val) = 1;
			              		else
			              		(yyval.val) = -1;
			              		}
#line 1851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 332 "parser.y" /* yacc.c:1646  */
    {if((yyvsp[-1].val)==1) (yyval.val)=1; else (yyval.val)=-1;}
#line 1857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 334 "parser.y" /* yacc.c:1646  */
    {if((yyvsp[0].val)==1) (yyval.val)=1; else (yyval.val)=-1;}
#line 1863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 337 "parser.y" /* yacc.c:1646  */
    {
			             if(!check_declaration(curid, "Function"))
			             { yyerror("Function not declared"); } 
			             insertSTF(curid); 
						 strcpy(currfunccall,curid);
			             }
#line 1874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 343 "parser.y" /* yacc.c:1646  */
    { if(strcmp(currfunccall,"printf"))
							{ 
								if(getSTparamscount(currfunccall)!=call_params_count)
								{	
									yyerror("Number of arguments in function call doesn't match number of parameters");
									exit(8);
								}
							} 
						 }
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 357 "parser.y" /* yacc.c:1646  */
    { call_params_count++; }
#line 1894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 360 "parser.y" /* yacc.c:1646  */
    { call_params_count++; }
#line 1900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 364 "parser.y" /* yacc.c:1646  */
    {  insV(); (yyval.val)=1; }
#line 1906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 365 "parser.y" /* yacc.c:1646  */
    {  insV(); (yyval.val)=-1;}
#line 1912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 366 "parser.y" /* yacc.c:1646  */
    {  insV(); }
#line 1918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 367 "parser.y" /* yacc.c:1646  */
    {  insV();(yyval.val)=1; }
#line 1924 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1928 "y.tab.c" /* yacc.c:1646  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
#line 369 "parser.y" /* yacc.c:1906  */


extern FILE *yyin;
extern int yylineno;
extern char *yytext;
void insertSTtype(char *,char *);
void insertSTvalue(char *, char *);
void incertCT(char *, char *);
void printST();
void printFT();
void printCT();

int main(int argc , char **argv)
{
	yyin = fopen(argv[1], "r");
	yyparse();

	if(flag == 0)
	{
		printf("Status: Parsing Complete - Valid" "\n");

		freopen("symbol_table.txt","w",stdout);
		printf("%30s" "SYMBOL TABLE" "\n", " ");
		printf("%30s %s\n", " ", "------------");
		printST();

		printf("\n\n%30s"  "CONSTANT TABLE" "\n", " ");
		printf("%30s %s\n", " ", "--------------");
		printCT();
freopen("symbol_table_functions.txt","w",stdout);
			printf("\n\n%30s"  "FUNCTUION TABLE" "\n", " ");
		printf("%30s %s\n", " ", "--------------");
		printFT();
	}
}

void yyerror(char *s)
{
	printf("LINE : %d\n ERROR: %s \n", yylineno, s);
	flag=1;
	printf( "Status: Parsing Failed - Invalid\n");
	exit(7);
}

void ins()
{
	insertSTtype(curid,curtype);
}

void insV()
{
	insertSTvalue(curid,curval);
}

int yywrap()
{
	return 1;
}
