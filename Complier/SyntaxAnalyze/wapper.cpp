#include "../LexAnalyze/InputBuffer.h"
#include "../LexAnalyze/Lexer.h"
#include "tmp.tab.h"
#include <iostream>
#include <cassert>

int yylinenum;
extern YYSTYPE yylval;
extern string inputFileName;

int yylex(void)
{
	static Lexer lexer(inputFileName);
	//starting analyse

	static LetterTriple tmp("", 0, 0);
	tmp = lexer.getTriple();
	if (tmp.value == "")
		return 0;
	{
		cout << tmp.toString() << endl;
		yylinenum = tmp.row;

		switch (tmp.attribute)
		{
		case SymbolType::_key:
		{
			if (tmp.value == "program")
				return yytokentype::PROGRAM;
			else if (tmp.value == "const")
				return yytokentype::CONST;
			else if (tmp.value == "var")
				return yytokentype::VAR;
			else if (tmp.value == "procedure")
				return yytokentype::PROCEDURE;
			else if (tmp.value == "function")
				return yytokentype::FUNCTION;
			else if (tmp.value == "begin")
				return yytokentype::BEGIN;
			else if (tmp.value == "end")
				return yytokentype::END;
			else if (tmp.value == "array")
				return yytokentype::ARRAY;
			else if (tmp.value == "of")
				return yytokentype::OF;
			else if (tmp.value == "if")
				return yytokentype::IF;
			else if (tmp.value == "then")
				return yytokentype::THEN;
			else if (tmp.value == "else")
				return yytokentype::ELSE;
			else if (tmp.value == "for")
				return yytokentype::FOR;
			else if (tmp.value == "to")
				return yytokentype::TO;
			else if (tmp.value == "do")
				return yytokentype::DO;
			else if (tmp.value == "integer")
				return yytokentype::INTEGER;
			else if (tmp.value == "boolean")
				return yytokentype::BOOLEAN;
			else if (tmp.value == "real")
				return yytokentype::REAL;
			else if (tmp.value == "char")
				return yytokentype::CHAR;
			else
				assert("warpper.cpp" + __LINE__);
			break;
		}
		case SymbolType::_id:
		{
			yylval.c = new SyntaxTreeNodeFinal(0, tmp.value, tmp.row);
			return yytokentype::ID;
		}
		case SymbolType::_delimiter:
		{
			return tmp.value[0];
		}
		case SymbolType::_integer:
		{
			SyntaxTreeNodeFinalValue val;
			val.intValue = stoi(tmp.value);
			yylval.c = new SyntaxTreeNodeFinal(1, val, yylinenum);
			return yytokentype::NUM;
		}
		case SymbolType::_relop:
		{

		}
		case SymbolType::_mulop:
		{

		}
		case SymbolType::_addop:
		{
			if (tmp.value == "+")
			{

			}
			else if (tmp.value == "-")
			{

			}
			else if (tmp.value == "or")
			{

			}
			else
			{
#ifdef SYNTAXDEBUG
				assert(__FILE__ + __LINE__ + "Should not reach here");
#endif // SYNTAXDEBUG
			}
		}
		case SymbolType::_assignop:
		{
			yylval.b = new SyntaxTreeNodeOperator(14);
			return yytokentype::EQU;
		}
		default:
			break;
		}
	}
	return 0;
}
