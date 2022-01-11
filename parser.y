%{
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

%}

%union {
	int val;
}

%type <val> initilization_params conditional_statements iterative_statements return_statement expression simple_expression and_expression unary_relation_expression regular_expression sum_expression term factor mutable immutable constant print

%nonassoc IF
%token INT CHAR FLOAT DOUBLE LONG SHORT SIGNED UNSIGNED STRUCT PRINT
%token RETURN
%token VOID
%token WHILE FOR DO 
%token BREAK
%expect 1

%token identifier array_identifier
%token integer_constant string_constant float_constant character_constant

%nonassoc ELSE

%right modulo_assignment_operator
%right multiplication_assignment_operator division_assignment_operator
%right addition_assignment_operator subtraction_assignment_operator
%right assignment_operator

%left OR_operator
%left AND_operator
%left equality_operator inequality_operator
%left lessthan_assignment_operator lessthan_operator greaterthan_assignment_operator greaterthan_operator
%left add_operator subtract_operator
%left multiplication_operator division_operator modulo_operator

%right exclamation_operator
%left increment_operator decrement_operator 


%start program

%%
program
			: declaration_list;

declaration_list
			: declaration D 

D
			: declaration_list
			| ;

declaration
			: variable_declaration 
			| function_declaration

variable_declaration
			: type_specifier variable_declaration_list ';' 

variable_declaration_list
			: variable_declaration_list ',' variable_declaration_identifier | variable_declaration_identifier;

variable_declaration_identifier 
			: identifier {if(duplicate(curid)){yyerror("Duplicate\n");}insertSTnest(curid,currnest); ins();  } vdi   
			  | array_identifier {if(duplicate(curid)){yyerror("Duplicate\n");}insertSTnest(curid,currnest); ins();  } vdi;
			
			

vdi : identifier_array_type | assignment_operator simple_expression  ; 

identifier_array_type
			: '[' initilization_params
			| ;

initilization_params
			: integer_constant ']' initilization {if($$ < 1) {yyerror("Wrong array size"); } }
			| ']' string_initilization;

initilization
			: string_initilization
			| array_initialization
			| ;

type_specifier 
			: INT | CHAR | FLOAT  | DOUBLE  
			| LONG long_grammar 
			| SHORT short_grammar
			| UNSIGNED unsigned_grammar 
			| SIGNED signed_grammar
			| VOID  ;

unsigned_grammar 
			: INT | LONG long_grammar | SHORT short_grammar | ;

signed_grammar 
			: INT | LONG long_grammar | SHORT short_grammar | ;

long_grammar 
			: INT  | ;

short_grammar 
			: INT | ;

function_declaration
			: function_declaration_type function_declaration_param_statement;

function_declaration_type
			: type_specifier identifier '('  { strcpy(currfunctype, curtype); strcpy(currfunc, curid); check_duplicate(curid); insertSTF(curid); ins(); };

function_declaration_param_statement
			: params ')' statement;

params 
			: parameters_list | ;

parameters_list 
			: type_specifier { check_params(curtype); } parameters_identifier_list { insertSTparamscount(currfunc, params_count); };

parameters_identifier_list 
			: param_identifier parameters_identifier_list_breakup;

parameters_identifier_list_breakup
			: ',' parameters_list 
			| ;

param_identifier 
			: identifier { ins();insertSTnest(curid,1); params_count++; } param_identifier_breakup;

param_identifier_breakup
			: '[' ']'
			| ;

statement 
			: expression_statment | compound_statement 
			| conditional_statements | iterative_statements 
			| return_statement | break_statement 
			| variable_declaration;

compound_statement 
			: {currnest++;} '{'  statment_list  '}' {deletedata(currnest);currnest--;}  ;

statment_list 
			: statement statment_list 
			| ;

expression_statment 
			: expression ';' 
			| ';' ;

conditional_statements 
			: IF '(' simple_expression ')' {if($3!=1){yyerror("Condition checking is not of type int\n");}} statement conditional_statements_breakup;

conditional_statements_breakup
			: ELSE statement
			| ;

iterative_statements 
			: WHILE '(' simple_expression ')' {if($3!=1){yyerror("Condition checking is not of type int\n");}} statement 
			| FOR '(' expression ';' simple_expression ';' {if($5!=1){yyerror("Condition checking is not of type int\n");}} expression ')' 
			| DO statement WHILE '(' simple_expression ')'{if($5!=1){yyerror("Condition checking is not of type int\n");}} ';';
return_statement 
			: RETURN ';' {if(strcmp(currfunctype,"void")) {yyerror("Returning void of a non-void function\n"); }}
			| RETURN expression ';' {

										if((currfunctype[0]=='i' || currfunctype[0]=='c') && $2!=1)
										{
											yyerror("Expression doesn't match return type of function\n"); 
										}
			              
			                     	};

break_statement 
			: BREAK ';' ;

string_initilization
			: assignment_operator string_constant {insV();} ;

array_initialization
			: assignment_operator '{' array_int_declarations '}';

array_int_declarations
			: integer_constant array_int_declarations_breakup;

array_int_declarations_breakup
			: ',' array_int_declarations 
			| ;

expression 
			: mutable assignment_operator expression              {
																	  if($1==1 && $3==1) 
																	  {
																				$$=1;
																				} 
																				else 
																				{$$=-1; yyerror("Type mismatch\n"); } 
																			}
			| mutable addition_assignment_operator expression     {
																	  if($1==1 && $3==1) 
																				$$=1; 
																				else 
																				{$$=-1; yyerror("Type mismatch\n"); } 
																			}
			| mutable subtraction_assignment_operator expression  {
																	  if($1==1 && $3==1) 
																				$$=1; 
																				else 
																				{$$=-1; yyerror("Type mismatch\n"); } 
																			}
			| mutable multiplication_assignment_operator expression {
																	  if($1==1 && $3==1) 
																				$$=1; 
																				else 
																				{$$=-1; yyerror("Type mismatch\n"); } 
																			}
			| mutable division_assignment_operator expression 		{
																	  if($1==1 && $3==1) 
																				$$=1; 
																				else 
																				{$$=-1; yyerror("Type mismatch\n"); } 
																			}
			| mutable modulo_assignment_operator expression 		{
																	  if($1==1 && $3==1) 
																				$$=1; 
																				else 
																				{$$=-1; yyerror("Type mismatch\n"); } 
																			}
			| mutable increment_operator 							{if($1 == 1) $$=1; else $$=-1;}
			| mutable decrement_operator 							{if($1 == 1) $$=1; else $$=-1;}
			| simple_expression {if($1 == 1) $$=1; else $$=-1;}
			| print {if($1 == 1) $$=1; else $$=-1;}
			;

print
 		: PRINT '(' string_constant ',' expression ')' { $$ = 1;}
			;


simple_expression 
			: simple_expression OR_operator and_expression {if($1 == 1 && $3==1) $$=1; else $$=-1;}
			| and_expression {if($1 == 1) $$=1; else $$=-1;};

and_expression 
			: and_expression AND_operator unary_relation_expression {if($1 == 1 && $3==1) $$=1; else $$=-1;}
			  |unary_relation_expression {if($1 == 1) $$=1; else $$=-1;} ;


unary_relation_expression 
			: exclamation_operator unary_relation_expression {if($2==1) $$=1; else $$=-1;} 
			| regular_expression {if($1 == 1) $$=1; else $$=-1;} ;

regular_expression 
			: regular_expression relational_operators sum_expression {if($1 == 1 && $3==1) $$=1; else $$=-1;}
			  | sum_expression {if($1 == 1) $$=1; else $$=-1;} ;
			
relational_operators 
			: greaterthan_assignment_operator | lessthan_assignment_operator | greaterthan_operator 
			| lessthan_operator | equality_operator | inequality_operator ;

sum_expression 
			: sum_expression sum_operators term  {if($1 == 1 && $3==1) $$=1; else $$=-1;}
			| term {if($1 == 1) $$=1; else $$=-1;};

sum_operators 
			: add_operator 
			| subtract_operator ;

term
			: term MULOP factor {if($1 == 1 && $3==1) $$=1; else $$=-1;}
			| factor {if($1 == 1) $$=1; else $$=-1;} ;

MULOP 
			: multiplication_operator | division_operator | modulo_operator ;

factor 
			: immutable {if($1 == 1) $$=1; else $$=-1;} 
			| mutable {if($1 == 1) $$=1; else $$=-1;} ;

mutable 
			: identifier {
						  if(check_id_is_func(curid))
						  {yyerror("Function name used as Identifier\n"); exit(8);}
			              if(!checkscope(curid))
			              {printf("%s\n",curid);yyerror("Undeclared\n");} 
			              if(!checkarray(curid))
			              {printf("%s\n",curid);yyerror("Array ID has no subscript\n");}
			              if(gettype(curid,0)=='i' || gettype(curid,1)== 'c')
			              $$ = 1;
			              else
			              $$ = -1;
			              }
			| array_identifier {if(!checkscope(curid)){printf("%s\n",curid);yyerror("Undeclared\n");}} '[' expression ']' 
			                   {if(gettype(curid,0)=='i' || gettype(curid,1)== 'c')
			              		$$ = 1;
			              		else
			              		$$ = -1;
			              		};

immutable 
			: '(' expression ')' {if($2==1) $$=1; else $$=-1;}
			| call 
			| constant {if($1==1) $$=1; else $$=-1;};

call
			: identifier '('{
			             if(!check_declaration(curid, "Function"))
			             { yyerror("Function not declared"); } 
			             insertSTF(curid); 
						 strcpy(currfunccall,curid);
			             } arguments ')' 
						 { if(strcmp(currfunccall,"printf"))
							{ 
								if(getSTparamscount(currfunccall)!=call_params_count)
								{	
									yyerror("Number of arguments in function call doesn't match number of parameters");
									exit(8);
								}
							} 
						 };

arguments 
			: arguments_list | ;

arguments_list 
			: expression { call_params_count++; } A ;

A
			: ',' expression { call_params_count++; } A 
			| ;

constant 
			: integer_constant 	{  insV(); $$=1; } 
			| string_constant	{  insV(); $$=-1;} 
			| float_constant	{  insV(); } 
			| character_constant{  insV();$$=1; };

%%

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