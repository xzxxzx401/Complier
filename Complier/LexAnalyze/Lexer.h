#ifndef _LEXER_
#define _LEXER_

#include "InputBuffer.h"
#include "LetterTriple.h"
#include <vector>

//#define DEBUG

using namespace std;

#define NumOfSign 17

const char signArr[NumOfSign] =
{
	'+','-','*','/','=','(',')',';','[',']'
	,',','<','>',':','.','\'','{'
};

#define NumOfOperHead 17
#define NumOfEndState 11

const char signToState[2][NumOfOperHead] =
{
	{';','[',']','(',')',',','+','-','*','/','=','<','>',':','.','{','\''}
	,{1,1,1,1,1,1,2,2,3,3,4,5,6,7,9,11,13}
};

#define NumOfKey 19

const string keyArr[NumOfKey] =
{
	"program","const","var","procedure","function","begin","end"
	,"array","of","if","then","else","for","to","do"
	,"integer","boolean","real","char"
};

#define NumOfBoolConst 2

const string boolConstArr[NumOfBoolConst] =
{
	"true","false"
};

#define NumOfOperator 5
#define PosOfAddOperator 1

const string operatorArr[NumOfOperator] =
{
	"or","not","div","mod","and"
};

enum CharType
{
	_num=1,		/* 0 to 9 */
	_letter=2,	/* 'a' to 'z' ,'A' to 'Z' and '_' */
	_ignore=3,	/* '\n' , ' ' and '\t' */
	_other=4	/* except above three */
};

typedef int Type;

enum SymbolType
{
	_error1 = 0x101,//err1:error const number (12.)
	_error2 = 0x102,//err2:emypy char
	_error3 = 0x103,//err3:char is too long
	_error4 = 0x104,//err4:annotation is not closed
	_error5 = 0x105,//err5:single quotes is not closed
	_error6 = 0x106,//err6:unknown char

	_note=0,
	_real,
	_integer,
	_char,
	_boolean,//
	_key,//关键字
	_id,//标识符
	_delimiter=8,//界符

	_addop=71,
	_mulop,
	_relop,
	_assignop,
	_dotdot
};



class Lexer
{
private:
	int curLine;
	int curCol;
	int curChar;
	int curWord;
	int errorNum;

	vector<LetterTriple> letterList;
	int curPtrInList;

public:
	Lexer();

	void lexicalAnalyse(InputBuffer&);

	LetterTriple getTriple(void);
private:
	int judgeCharType(const char&);

	//These three functions below will judge the symbol
	//start with number,letter and punctuation and
	//return its type or deal the error

	Type judgeNum(char, InputBuffer&);

	Type judgeID(char, InputBuffer&);

	Type judgePunc(char, InputBuffer&);

	bool isSign(const char&);

	void printErrorInfo(const Type&);

	void printStatistics(void);
};

#endif
