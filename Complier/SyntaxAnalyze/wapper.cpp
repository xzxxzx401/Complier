#include "../LexAnalyze/InputBuffer.h"
#include "../LexAnalyze/Lexer.h"
#include "tmp.tab.h"
#include <iostream>

int yylinenum;
int yyval;
extern string inputFileName;

int yylex(void)
{
	static InputBuffer inputBuffer(inputFileName);
	static Lexer lexer;
	//starting analyse
	lexer.lexicalAnalyse(inputBuffer);
	static LetterTriple tmp("", 0, 0);
	tmp = lexer.getTriple();
	while (tmp.value != "")
	{
		cout << tmp.toString() << endl;
		tmp = lexer.getTriple();
		yylinenum = tmp.row;
		yyval = tmp.attribute;

		switch (tmp.attribute)
		{
			case SymbolType::_key
			{

			}
		default:
			break;
		}
	}
	return 0;
}
