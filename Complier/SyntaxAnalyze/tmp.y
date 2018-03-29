%{
	#include <stdio.h>
	#include <ctype.h>
	#include"..\SyntaxTree\SyntaxTreeNodeType.h"
 
 
	void yyerror(const char *text);
	extern int yylex(void);
	extern int yylinenum;
	extern int yyval;
%}
 
/////////////////////////////////////////////////////////////////////////////
// declarations section
 
// place any declarations here
%union{
	SyntaxTreeNode *a;
	SyntaxTreeNodeOperator *b;
	SyntaxTreeNodeFinal *c;
}
%token <c> NUM ID
%token <b> OP
%token PROGRAM CONST VAR PROCEDURE FUNCTION BEGIN END ARRAY OF IF THEN ELSE FOR TO DO INTEGER BOOLEAN REAL CHAR 
%type <a> programstruct program_head program_body const_declarations const_declaration const_value
 
%%
 
/////////////////////////////////////////////////////////////////////////////
// rules section
 
// place your YACC rules here (there must be at least one)

programstruct : program_head ';' program_body '.'{$$ = MakeNode(1,{$1,$3});}

program_head : PROGRAM ID {$$=MakeNode(2,{$2});}

program_body : const_declarations /*var_declarations subprogram_declarations compound_statement*/ {$$=MakeNode(3,{$1,NULL,NULL,NULL}/*,$2,$3,$4}*/);}

const_declarations : CONST const_declaration {$$=MakeNode(4,{$2});}
const_declarations : {$$=NULL;}
const_declaration : const_declaration ';' ID '=' const_value{$$=MakeNode(6,{$1,$3,$5});}
const_declaration : ID '=' const_value {$$=MakeNode(7,{$1,$3});}
const_value : '+' NUM {$$=MakeNode(8,{$2});}
const_value : '-' NUM {$$=MakeNode(9,{$2});}
const_value : NUM {$$=MakeNode(10,{$1});}

/*
var_declarations -> var var_declaration ;
var_declarations -> epsilon
var_declaration -> var_declaration ; idlist : type
var_declaration -> idlist : type
idlist -> idlist , id
idlist -> id
type->simple_type
type->array [ period ] of simple_type
simple_type->integer
simple_type -> real
simple_type -> boolean
simple_type -> char
period -> period, digits .. digits
period -> digits .. digits
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