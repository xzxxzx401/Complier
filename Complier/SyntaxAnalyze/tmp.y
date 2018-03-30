%{
	#include <stdio.h>
	#include <ctype.h>
	#include"..\SyntaxTree\SyntaxTreeNodeType.h"
 
 
	void yyerror(const char *text);
	extern int yylex(void);
	extern int yylinenum;
	extern int yyval;
	extern SyntaxTreeNode *rt;
%}
 
/////////////////////////////////////////////////////////////////////////////
// declarations section
 
// place any declarations here
%union{
	SyntaxTreeNode *a;
	SyntaxTreeNodeOperator *b;
	SyntaxTreeNodeFinal *c;
}

//		    =   <>     >      >=      <    <=
%token <b> EQU NEQU GRETTER EGRETTER LESS ELESS

//		    +   -   *    /  div and  or  mod
%token <b> ADD SUB MUL DIV IDIV AND  OR  MOD

%token <c> NUM ID

%token PROGRAM CONST VAR PROCEDURE FUNCTION BEGIN END ARRAY OF IF THEN ELSE FOR TO DO INTEGER BOOLEAN REAL CHAR DOTDOT

%type <a> programstruct program_head program_body const_declarations const_declaration const_value var_declarations var_declaration idlist type simple_type period
 
%%
 
/////////////////////////////////////////////////////////////////////////////
// rules section
 
// place your YACC rules here (there must be at least one)

programstruct : program_head ';' program_body '.'
	{$$ = MakeNode(1,{$1,$3});rt=$$;}

program_head : PROGRAM ID 
	{$$=MakeNode(2,{$2});}

program_body : const_declarations var_declarations /*subprogram_declarations compound_statement*/ 
	{$$=MakeNode(3,{$1,$2,NULL,NULL}/*,$3,$4}*/);}

const_declarations : CONST const_declaration ';'
	{$$=MakeNode(4,{$2});}

const_declarations : 
	{$$=MakeNode(5,{});}

const_declaration : const_declaration ';' ID EQU const_value
	{$$=MakeNode(6,	{$1,$3,$5});}

const_declaration : ID EQU const_value 
	{$$=MakeNode(7,	{$1,$3});}

const_value : ADD NUM 
	{$$=MakeNode(8,{$2});}//语义分析做类型检查

const_value : SUB NUM 
	{$$=MakeNode(9,{$2});}//语义分析做类型检查

const_value : NUM 
	{$$=MakeNode(10,{$1});}//语义分析做类型检查

var_declarations : VAR var_declaration ';'
	{$$=MakeNode(11,{$2});}

var_declarations : 
	{$$=MakeNode(12,{});}

var_declaration : var_declaration ';' idlist ':' type
	{$$=MakeNode(13,{$1,$3,$5});}

var_declaration : idlist ':' type
	{$$=MakeNode(14,{$1,$3});}

idlist : idlist ',' ID
	{$$=MakeNode(15,{$1,$3});}

idlist : ID
	{$$=MakeNode(16,{$1});}

type : simple_type
	{$$=MakeNode(17,{$1});}

type : ARRAY '[' period ']' OF simple_type
	{$$=MakeNode(18,{$3,$6});}

simple_type : INTEGER
	{$$=MakeNode(19,{});}

simple_type : REAL
	{$$=MakeNode(20,{});}

simple_type : BOOLEAN
	{$$=MakeNode(21,{});}

simple_type : CHAR
	{$$=MakeNode(22,{});}

period : period ',' NUM DOTDOT NUM //语义分析做类型检查
	{$$=MakeNode(23,{$1,$3,$5});}

period : NUM DOTDOT NUM //语义分析做类型检查
	{$$=MakeNode(24,{$1,$3});}
/*
subprogram_declarations -> subprogram_declarations subprogram ;
subprogram_declarations -> epsilon
subprogram -> subprogram_head ; subprogram_body
subprogram_head -> procedure id formal_parameter
subprogram_head -> function id formal_parameter : simple_type
formal_parameter -> ( parameter_list )
formal_parameter -> epsilon
parameter_list -> parameter_list ; parameter
parameter_list -> parameter
parameter -> var_parameter
parameter -> value_parameter
var_parameter -> var value_parameter
value_parameter -> idlist : simple_type
subprogram_body -> const_declarations var_declarations compound_statement
compound_statement -> begin statement_list end
statement_list -> statement_list ; statement
statement_list -> statement
statement -> variable assignop expression
statement -> procedure_call
statement -> compound_statement
statement -> if expression then statement else_part
statement -> for id assignop expression to expression do statement
statement -> epsilon
variable -> id id_varpart
id_varpart -> [ expression_list ]
id_varpart -> epsilon
procedure_call -> id
procedure_call -> id ( expression_list )
else_part -> else statement
else_part -> epsilon
expression_list -> expression_list , expression
expression_list -> expression
expression -> simple_expression relop simple_expression
expression -> simple_expression
simple_expression -> simple_expression addop term
simple_expression -> term
term -> term mulop factor
term -> factor
factor -> num
factor -> variable
factor -> id ( expression_list )
factor -> ( expression )
factor -> not factor
factor -> uminus factor
*/ 
%%
 
/////////////////////////////////////////////////////////////////////////////
// programs section
/*
int yylex(void)
{
   // place your token retrieving code here
   int c = 0;
  
   while( (c = getchar()) == ' ');
   if( isdigit(c) )
   {
       ungetc(c,stdin);
       scanf_s("%lf",&yylval);
       return (NUMBER);
   }
  
   if( '\n' == c )
   {
       return 0;
   }
  
   return c;
}*/
/*
int main(void)
{
  
   yyparse();
 
   system("PAUSE");
   return 0;
}*/
 
void yyerror(const char *text)
{
   fprintf(stderr,"%s\n",text);
}