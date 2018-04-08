#include "../LexAnalyze/InputBuffer.h"
#include "../LexAnalyze/Lexer.h"
#include "tmp.tab.h"
#include <iostream>
#include <cassert>

int yylinenum;//ȫ�ֱ����������к�
extern YYSTYPE yylval;//yacc�ж��壬����ָ��ǰ�Ǻŵ�ָ��
extern string inputFileName;//main�ж��壬�����ļ�

int yylex(void)//ģ��ʷ������������ֹ��ʷ������������ת���ʺ�yacc������
{
	static Lexer lexer(inputFileName);//�ʷ��������ӿڣ���̬����
	static LetterTriple currentWord("", 0, 0);//��ǰ�����ĵ���Ԫ��
	currentWord = lexer.getTriple();

	if (currentWord.value == "")
		return 0;//��������
	{

#ifdef SYNTAXDEBUG
        //�����ǰ�ĵ�����Ԫ��
		cout << currentWord.toString() << endl;
#endif // SYNTAXDEBUG

		yylinenum = currentWord.row;

		switch (currentWord.attribute)
		{
		case SymbolType::_key://������
		{
			if (currentWord.value == "program")
				return yytokentype::PROGRAM;
			else if (currentWord.value == "const")
				return yytokentype::CONST;
			else if (currentWord.value == "var")
				return yytokentype::VAR;
			else if (currentWord.value == "procedure")
				return yytokentype::PROCEDURE;
			else if (currentWord.value == "function")
				return yytokentype::FUNCTION;
			else if (currentWord.value == "begin")
				return yytokentype::BEGIN;
			else if (currentWord.value == "end")
				return yytokentype::END;
			else if (currentWord.value == "array")
				return yytokentype::ARRAY;
			else if (currentWord.value == "of")
				return yytokentype::OF;
			else if (currentWord.value == "if")
				return yytokentype::IF;
			else if (currentWord.value == "then")
				return yytokentype::THEN;
			else if (currentWord.value == "else")
				return yytokentype::ELSE;
			else if (currentWord.value == "for")
				return yytokentype::FOR;
			else if (currentWord.value == "to")
				return yytokentype::TO;
			else if (currentWord.value == "do")
				return yytokentype::DO;
			else if (currentWord.value == "integer")
				return yytokentype::INTEGER;
			else if (currentWord.value == "boolean")
				return yytokentype::BOOLEAN;
			else if (currentWord.value == "real")
				return yytokentype::REAL;
			else if (currentWord.value == "char")
				return yytokentype::CHAR;
			else
			{
#ifdef SYNTAXDEBUG
				cout << "Line " << __LINE__ << "of" << __FILE__ << " +" << endl;
				cout << "Should not reach here" << endl;
				assert(0);
#endif // SYNTAXDEBUG
			}
			break;
		}
		case SymbolType::_id://��ʶ��
		{
			yylval.c = new SyntaxTreeNodeFinal(0, currentWord.value, currentWord.row);
			return yytokentype::ID;
		}
		case SymbolType::_delimiter://���
		{
#ifdef SYNTAXDEBUG
			assert(currentWord.value.size() == 1);
#endif // SYNTAXDEBUG
			return currentWord.value[0];
		}
		case SymbolType::_integer://����
		{
			SyntaxTreeNodeFinalValue val;
			val.intValue = stoi(currentWord.value);
			yylval.c = new SyntaxTreeNodeFinal(1, val, yylinenum);
			return yytokentype::NUM;
		}
		case SymbolType::_char://�ַ�
		{
			SyntaxTreeNodeFinalValue val;
			val.charValue = currentWord.value[1];
			yylval.c = new SyntaxTreeNodeFinal(4, val, yylinenum);
			return yytokentype::NUM;
		}
		case SymbolType::_boolean://��������
		{
			SyntaxTreeNodeFinalValue val;
			if (currentWord.value == "true")
				val.boolValue = 1;
			else if (currentWord.value == "false")
				val.boolValue = 0;
			else
			{
#ifdef SYNTAXDEBUG
				cout << "Line " << __LINE__ << "of" << __FILE__ << " +" << endl;
				cout << "Should not reach here" << endl;
				assert(0);
#endif // SYNTAXDEBUG
			}

			yylval.c = new SyntaxTreeNodeFinal(3, val, yylinenum);
			return yytokentype::NUM;
		}
		case SymbolType::_real://ʵ��
		{
			SyntaxTreeNodeFinalValue val;
			val.realValue = stod(currentWord.value);
			yylval.c = new SyntaxTreeNodeFinal(2, val, yylinenum);
			return yytokentype::NUM;
		}
		case SymbolType::_relop://�ȽϷ���
		{
			if (currentWord.value == "=")
			{
				yylval.b = new SyntaxTreeNodeOperator(0, currentWord.row);
				return yytokentype::EQU;
			}
			else if (currentWord.value == "<>")
			{
				yylval.b = new SyntaxTreeNodeOperator(1, currentWord.row);
				return yytokentype::NEQU;
			}
			else if (currentWord.value == "<")
			{
				yylval.b = new SyntaxTreeNodeOperator(2, currentWord.row);
				return yytokentype::LESS;
			}
			else if (currentWord.value == "<=")
			{
				yylval.b = new SyntaxTreeNodeOperator(3, currentWord.row);
				return yytokentype::ELESS;
			}
			else if (currentWord.value == ">")
			{
				yylval.b = new SyntaxTreeNodeOperator(4, currentWord.row);
				return yytokentype::GRETTER;
			}
			else if (currentWord.value == ">=")
			{
				yylval.b = new SyntaxTreeNodeOperator(5, currentWord.row);
				return yytokentype::EGRETTER;
			}
			else
			{
#ifdef SYNTAXDEBUG
				cout << "Line " << __LINE__ << "of" << __FILE__ << " +" << endl;
				cout << "Should not reach here" << endl;
				assert(0);
#endif // SYNTAXDEBUG
			}
		}
		case SymbolType::_mulop://�������
		{
			if (currentWord.value == "*")
			{
				yylval.b = new SyntaxTreeNodeOperator(9, currentWord.row);
				return yytokentype::MUL;
			}
			else if (currentWord.value == "/")
			{
				yylval.b = new SyntaxTreeNodeOperator(10, currentWord.row);
				return yytokentype::DIV;
			}
			else if (currentWord.value == "div")
			{
				yylval.b = new SyntaxTreeNodeOperator(11, currentWord.row);
				return yytokentype::IDIV;
			}
			else if (currentWord.value == "mod")
			{
				yylval.b = new SyntaxTreeNodeOperator(12, currentWord.row);
				return yytokentype::MOD;
			}
			else if (currentWord.value == "and")
			{
				yylval.b = new SyntaxTreeNodeOperator(13, currentWord.row);
				return yytokentype::AND;
			}
			else
			{
#ifdef SYNTAXDEBUG
				cout << "Line " << __LINE__ << "of" << __FILE__ << " +" << endl;
				cout << "Should not reach here" << endl;
				assert(0);
#endif // SYNTAXDEBUG
			}
		}
		case SymbolType::_addop://�������
		{
			if (currentWord.value == "+")
			{
				yylval.b = new SyntaxTreeNodeOperator(6, currentWord.row);
				return yytokentype::ADD;
			}
			else if (currentWord.value == "-")
			{
				yylval.b = new SyntaxTreeNodeOperator(7, currentWord.row);
				return yytokentype::SUB;
			}
			else if (currentWord.value == "or")
			{
				yylval.b = new SyntaxTreeNodeOperator(8, currentWord.row);
				return yytokentype::OR;
			}
			else if (currentWord.value == "not")
			{
				yylval.b = new SyntaxTreeNodeOperator(15, currentWord.row);
				return yytokentype::NOT;
			}
			else
			{
#ifdef SYNTAXDEBUG
				cout << "Line " << __LINE__ << "of" << __FILE__ << " +" << endl;
				cout << "Should not reach here" << endl;
				assert(0);
#endif // SYNTAXDEBUG
			}
		}
		case SymbolType::_assignop://��ֵ��
		{
			yylval.b = new SyntaxTreeNodeOperator(14, currentWord.row);
			return yytokentype::ASSIGNOP;
		}
		case SymbolType::_dotdot://�����е�..
		{
			return yytokentype::DOTDOT;
		}
		default:
		{
#ifdef SYNTAXDEBUG
			cout << "Line " << __LINE__ << "of" << __FILE__ << " +" << endl;
			cout << "Should not reach here" << endl;
			assert(0);
#endif // SYNTAXDEBUG
			break;
		}
		}
	}
	return 0;
}
