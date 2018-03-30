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
			{
#ifdef SYNTAXDEBUG
				cout << __FILE__ + __LINE__ << "Should not reach here";
				assert(0);
#endif // SYNTAXDEBUG
			}
			break;
		}
		case SymbolType::_id:
		{
			yylval.c = new SyntaxTreeNodeFinal(0, tmp.value, tmp.row);
			return yytokentype::ID;
		}
		case SymbolType::_delimiter:
		{
#ifdef SYNTAXDEBUG
			assert(tmp.value.size() == 1);
#endif // SYNTAXDEBUG
			return tmp.value[0];
		}
		case SymbolType::_integer:
		{
			SyntaxTreeNodeFinalValue val;
			val.intValue = stoi(tmp.value);
			yylval.c = new SyntaxTreeNodeFinal(1, val, yylinenum);
			return yytokentype::NUM;
		}
		case SymbolType::_char:
		{
			SyntaxTreeNodeFinalValue val;
			val.charValue = tmp.value[0];
			yylval.c = new SyntaxTreeNodeFinal(4, val, yylinenum);
			return yytokentype::NUM;
		}
		case SymbolType::_boolean:
		{
			SyntaxTreeNodeFinalValue val;
			if (tmp.value == "true")
				val.boolValue = 1;
			else if (tmp.value == "false")
				val.boolValue = 0;
			else
			{
#ifdef SYNTAXDEBUG
				cout << __FILE__ + __LINE__ << "Should not reach here";
				assert(0);
#endif // SYNTAXDEBUG
			}

			yylval.c = new SyntaxTreeNodeFinal(3, val, yylinenum);
			return yytokentype::NUM;
		}
		case SymbolType::_real:
		{
			SyntaxTreeNodeFinalValue val;
			val.realValue = stod(tmp.value);
			yylval.c = new SyntaxTreeNodeFinal(2, val, yylinenum);
			return yytokentype::NUM;
		}
		case SymbolType::_relop:
		{
			if (tmp.value == "=")
			{
				yylval.b = new SyntaxTreeNodeOperator(0, tmp.row);
				return yytokentype::EQU;
			}
			else if (tmp.value == "<>")
			{
				yylval.b = new SyntaxTreeNodeOperator(1, tmp.row);
				return yytokentype::DIV;
			}
			else if (tmp.value == "<")
			{
				yylval.b = new SyntaxTreeNodeOperator(2, tmp.row);
				return yytokentype::LESS;
			}
			else if (tmp.value == "<=")
			{
				yylval.b = new SyntaxTreeNodeOperator(3, tmp.row);
				return yytokentype::ELESS;
			}
			else if (tmp.value == ">")
			{
				yylval.b = new SyntaxTreeNodeOperator(4, tmp.row);
				return yytokentype::GRETTER;
			}
			else if (tmp.value == ">=")
			{
				yylval.b = new SyntaxTreeNodeOperator(5, tmp.row);
				return yytokentype::EGRETTER;
			}
			else
			{
#ifdef SYNTAXDEBUG
				cout << __FILE__ + __LINE__ << "Should not reach here";
				assert(0);
#endif // SYNTAXDEBUG
			}
		}
		case SymbolType::_mulop:
		{
			if (tmp.value == "*")
			{
				yylval.b = new SyntaxTreeNodeOperator(9, tmp.row);
				return yytokentype::MUL;
			}
			else if (tmp.value == "/")
			{
				yylval.b = new SyntaxTreeNodeOperator(10, tmp.row);
				return yytokentype::DIV;
			}
			else if (tmp.value == "div")
			{
				yylval.b = new SyntaxTreeNodeOperator(11, tmp.row);
				return yytokentype::IDIV;
			}
			else if(tmp.value=="mod")
			{
				yylval.b = new SyntaxTreeNodeOperator(12, tmp.row);
				return yytokentype::MOD;
			}
			else if (tmp.value == "and")
			{
				yylval.b = new SyntaxTreeNodeOperator(13, tmp.row);
				return yytokentype::AND;
			}
			else
			{
#ifdef SYNTAXDEBUG
				cout << __FILE__ + __LINE__ << "Should not reach here";
				assert(0);
#endif // SYNTAXDEBUG
			}
		}
		case SymbolType::_addop:
		{
			if (tmp.value == "+")
			{
				yylval.b = new SyntaxTreeNodeOperator(6, tmp.row);
				return yytokentype::ADD;
			}
			else if (tmp.value == "-")
			{
				yylval.b = new SyntaxTreeNodeOperator(7, tmp.row);
				return yytokentype::SUB;
			}
			else if (tmp.value == "or")
			{
				yylval.b = new SyntaxTreeNodeOperator(8, tmp.row);
				return yytokentype::OR;
			}
			else
			{
#ifdef SYNTAXDEBUG
				cout << __FILE__ + __LINE__ << "Should not reach here";
				assert(0);
#endif // SYNTAXDEBUG
			}
		}
		case SymbolType::_assignop:
		{
			yylval.b = new SyntaxTreeNodeOperator(14, tmp.row);
			return yytokentype::EQU;
		}
		case SymbolType::_dotdot:
		{
			return yytokentype::DOTDOT;
		}
		default:
		{
#ifdef SYNTAXDEBUG
			cout << __FILE__ + __LINE__ << "Should not reach here";
			assert(0);
#endif // SYNTAXDEBUG
			break;
		}
		}
	}
	return 0;
}
