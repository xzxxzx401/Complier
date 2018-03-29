%{
	#include <stdio.h>
	#include <ctype.h>
	#include "SyntaxTreeNodeType.h"
 
 
	void yyerror(char *text);
	int yylex(void);
%}
 
/////////////////////////////////////////////////////////////////////////////
// declarations section
 
// place any declarations here
%union{
	SyntaxTreeNode *a;
	SyntaxTreeNodeOperator *b;
	SyntaxTreeNodeFinal *c;
}
%token <c> NUMBER
%token <b> OP
%token PROGRAM
%token ID
%type <a> programstruct program_head program_body
 
%%
 
/////////////////////////////////////////////////////////////////////////////
// rules section
 
// place your YACC rules here (there must be at least one)

programstruct : program_head ';' program_body '.'{$$ = MakeNode(1,{$1,$3});}

program_head : PROGRAM ID {$$=MakeLeaf("aaa",1);}

program_body : NUMBER {$$=MakeLeaf(2,2);}
	
%%
 
/////////////////////////////////////////////////////////////////////////////
// programs section
 
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
}
 
int main(void)
{
  
   yyparse();
 
   system("PAUSE");
   return 0;
}
 
void yyerror(const char *text)
{
   fprintf(stderr,"%s\n",text);
}