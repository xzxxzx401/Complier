%code requires{
	#include"..\SyntaxTree\SyntaxTreeNodeType.h"
}
%code top{
	#include <stdio.h>
	#include <ctype.h>
	#include"..\SyntaxTree\SyntaxTreeNodeType.h"
 
 
	void yyerror(const char *text);//本文件定义，错误处理
	int yyval;//本文件定义，指向当前符号的Node指针
	extern int yylex(void);//模拟词法分析器
	extern int yylinenum;//warpper中定义，全局变量，行号
	extern SyntaxTreeNode *rt;//main中定义，语法树根节点
}
 
/////////////////////////////////////////////////////////////////////////////
// declarations section

%error-verbose //Get More Error Message

%expect 2//only if-then-else conflict and do shift by default

// place any declarations here
%union{
	SyntaxTreeNode *a;
	SyntaxTreeNodeOperator *b;
	SyntaxTreeNodeFinal *c;
}

//		    =   <>     >      >=      <    <=    :=
%token <b> EQU NEQU GRETTER EGRETTER LESS ELESS ASSIGNOP

//		    +   -   *    /  div and  or  mod
%token <b> ADD SUB MUL DIV IDIV AND  OR  MOD

%token <c> NUM ID READ WRITE

%token PROGRAM CONST VAR PROCEDURE FUNCTION BEGIN END ARRAY OF IF THEN ELSE FOR TO DO INTEGER BOOLEAN REAL CHAR DOTDOT NOT

%type <a> programstruct program_head program_body const_declarations const_declaration const_value var_declarations var_declaration idlist type simple_type period subprogram_declarations subprogram subprogram_head formal_parameter parameter_list parameter var_parameter value_parameter subprogram_body compound_statement statement_list statement variable id_varpart procedure_call else_part expression_list expression simple_expression term factor special_list


 
%%
 
/////////////////////////////////////////////////////////////////////////////
// rules section
 
// place your YACC rules here (there must be at least one)

programstruct : program_head ';' program_body '.'
	{$$ = MakeNode(1,{$1,$3});rt=$$;}

program_head : PROGRAM ID 
	{$$=MakeNode(2,{$2});}
	| error{$$=nullptr;}
	| PROGRAM error{$$=nullptr;}

program_body : const_declarations var_declarations subprogram_declarations compound_statement
	{$$=MakeNode(3,{$1,$2,$3,$4});}
	| error const_declarations var_declarations subprogram_declarations compound_statement {$$=nullptr;}


const_declarations : CONST const_declaration ';'
	{$$=MakeNode(4,{$2});}

const_declarations : 
	{$$=MakeNode(5,{});}

const_declaration : const_declaration ';' ID EQU const_value
	{$$=MakeNode(6,	{$1,$3,$5});}

const_declaration : ID EQU const_value 
	{$$=MakeNode(7,	{$1,$3});}
	| error{$$=nullptr;}

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
	| error 
	{$$=nullptr;}

idlist : idlist ',' ID
	{$$=MakeNode(15,{$1,$3});}

idlist : ID
	{$$=MakeNode(16,{$1});}
	| error {$$=nullptr;}//用于检测IDlist中 id位置为非id的情况
	/*例如 var q,char,y,p:boolean;*/

type : simple_type
	{$$=MakeNode(17,{$1});}

type : ARRAY '[' period ']' OF simple_type
	{$$=MakeNode(18,{$3,$6});}
	| error{$$=nullptr;}

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
	
subprogram_declarations : subprogram_declarations subprogram ';'
	{$$=MakeNode(25,{$1,$2});}

subprogram_declarations : 
	{$$=MakeNode(26,{});}

subprogram : subprogram_head  ';' subprogram_body
	{$$=MakeNode(27,{$1,$3});}

subprogram_head : PROCEDURE ID formal_parameter
	{$$=MakeNode(28,{$2,$3});}

subprogram_head : FUNCTION ID formal_parameter ':' simple_type
	{$$=MakeNode(29,{$2,$3,$5});}
	| PROCEDURE error {$$=nullptr;}
	| FUNCTION error {$$=nullptr;}

formal_parameter : '(' parameter_list ')'
	{$$=MakeNode(30,{$2});}

formal_parameter :
	{$$=MakeNode(31,{});}

parameter_list : parameter_list ';' parameter
	{$$=MakeNode(32,{$1,$3});}

parameter_list : parameter
	{$$=MakeNode(33,{$1});}

parameter : var_parameter
	{$$=MakeNode(34,{$1});}

parameter : value_parameter
	{$$=MakeNode(35,{$1});}

var_parameter : VAR value_parameter
	{$$=MakeNode(36,{$2});}

value_parameter : idlist ':' simple_type
	{$$=MakeNode(37,{$1,$3});}

subprogram_body : const_declarations var_declarations compound_statement
	{$$=MakeNode(38,{$1,$2,$3});}
	| error const_declarations var_declarations compound_statement {$$=nullptr;}

compound_statement : BEGIN statement_list END
	{$$=MakeNode(39,{$2});}

statement_list : statement_list ';' statement
	{$$=MakeNode(40,{$1,$3});}

statement_list : statement
	{$$=MakeNode(41,{$1});}

statement : variable ASSIGNOP expression
	{$$=MakeNode(42,{$1,$2,$3});}

statement : procedure_call
	{$$=MakeNode(43,{$1});}

statement : compound_statement
	{$$=MakeNode(44,{$1});}

statement : IF expression THEN statement else_part
	{$$=MakeNode(45,{$2,$4,$5});}
	| IF error THEN statement else_part{$$=nullptr;}

statement : FOR ID ASSIGNOP expression TO expression DO statement
	{$$=MakeNode(46,{$2,$3,$4,$6,$8});}
	| FOR ID ASSIGNOP error TO expression DO statement{$$=nullptr;}
	| FOR ID ASSIGNOP expression TO error DO statement{$$=nullptr;}
	| FOR ID ASSIGNOP error TO error DO statement{$$=nullptr;}

statement : 
	{$$=MakeNode(47,{});}
	| error {$$=nullptr;}

variable : ID id_varpart
	{$$=MakeNode(48,{$1,$2});}

id_varpart : '[' expression_list ']'
	{$$=MakeNode(49,{$2});}

id_varpart : 
	{$$=MakeNode(50,{});}

procedure_call : ID
	{$$=MakeNode(51,{$1});}

procedure_call : ID '(' expression_list ')'
	{$$=MakeNode(52,{$1,$3});}

	|

	READ '(' special_list ')'{$$=MakeNode(52,{$1,$3});}
	|WRITE '(' special_list ')'{$$=MakeNode(52,{$1,$3});}

else_part : ELSE statement 
	{$$=MakeNode(53,{$2});}

else_part : 
	{$$=MakeNode(54,{});}

expression_list : expression_list ',' expression
	{$$=MakeNode(55,{$1,$3});}

special_list : special_list ',' ID {$$=MakeNode(55,{$1,$3});}
	|special_list ',' NUM {$$=MakeNode(55,{$1,$3});}
	//|special_list error{$$=nullptr;}

special_list : ID {$$=MakeNode(56,{$1});}
	|NUM {$$=MakeNode(56,{$1});}
	|error{$$=nullptr;}

expression_list : expression
	{$$=MakeNode(56,{$1});}
	| error{$$=nullptr;}

expression : simple_expression EQU simple_expression 	{$$=MakeNode(57,{$1,$2,$3});} |
			simple_expression NEQU simple_expression 	{$$=MakeNode(57,{$1,$2,$3});} |
			simple_expression GRETTER simple_expression	{$$=MakeNode(57,{$1,$2,$3});} |
			simple_expression EGRETTER simple_expression		{$$=MakeNode(57,{$1,$2,$3});}  |
			simple_expression LESS simple_expression		{$$=MakeNode(57,{$1,$2,$3});}|
			simple_expression ELESS simple_expression		{$$=MakeNode(57,{$1,$2,$3});}

expression : simple_expression
	{$$=MakeNode(58,{$1});}

simple_expression : simple_expression ADD term {$$=MakeNode(59,{$1,$2,$3});}|
					simple_expression OR term {$$=MakeNode(59,{$1,$2,$3});}|
					simple_expression SUB term {$$=MakeNode(59,{$1,$2,$3});}

simple_expression : term
	{$$=MakeNode(60,{$1});}

term : term MUL factor {$$=MakeNode(61,{$1,$2,$3});}|
		term DIV factor {$$=MakeNode(61,{$1,$2,$3});}|
		term IDIV factor {$$=MakeNode(61,{$1,$2,$3});}|
		term AND factor {$$=MakeNode(61,{$1,$2,$3});}|
		term MOD factor {$$=MakeNode(61,{$1,$2,$3});}
	
term : factor {$$=MakeNode(62,{$1});}

factor : NUM {$$=MakeNode(63,{$1});}

factor : variable {$$=MakeNode(64,{$1});}

factor : ID '(' expression_list ')' {$$=MakeNode(65,{$1,$3});}

factor : '(' expression ')' {$$=MakeNode(66,{$2});}

factor : NOT factor {$$=MakeNode(67,{$2});}

factor : SUB factor {$$=MakeNode(68,{$2});}


%%
 
/////////////////////////////////////////////////////////////////////////////
// programs section

 
void yyerror(const char *text)
{
   fprintf(stderr,"[Line %d]:%s\n",yylinenum,text);
}