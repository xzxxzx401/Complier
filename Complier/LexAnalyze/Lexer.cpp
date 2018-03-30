#include "Lexer.h"

#define END_STATE -1

void __toLower(string &str)
{
	for (int i = 0; i < str.length(); ++i)
		if (str[i] <= 'Z'&&str[i] >= 'A') str[i] += 32;
}

Lexer::Lexer()
{
	curLine = 1;
	curCol = 1;
	curChar = 0;
	curWord = 0;
	errorNum = 0;

	curPtrInList = 0;

	inbuf = InputBuffer(default_file_name);

	if (inbuf.getFileState())
	{
		lexicalAnalyse(inbuf);
	}
	else
	{
		cout << "File not exist!" << endl;
	}
}

Lexer::Lexer(const string &file)
{
	curLine = 1;
	curCol = 1;
	curChar = 0;
	curWord = 0;
	errorNum = 0;

	curPtrInList = 0;

	inbuf = InputBuffer(file);

	if (inbuf.getFileState())
	{
		lexicalAnalyse(inbuf);
	}
	else
	{
		cout << "File not exist!" << endl;
	}
}

void Lexer::lexicalAnalyse(InputBuffer &inBuf)
{
	char ch;
	int charType = 0;
	bool exitCode = true;
	Type type = 0;

	ch = inBuf.peekchar();
	if (ch == EOF)
	{
		exitCode = false;
	}
	
	while (exitCode)
	{
		//get the first char type and use it in the automata
		charType = judgeCharType(ch);

		//choose different way according to the first char type
		switch (charType)
		{
			case _num:
				type = judgeNum(ch, inBuf);
				break;

			case _letter:
				type = judgeID(ch, inBuf);
				break;

			case _ignore:
				inBuf.getchar();
				type = 0;
				break;

			case _other:
				type = judgePunc(ch, inBuf);
				break;

			default:
				#if LEXDEBUG==1

				cout << "An unknown char has been input! ASCII is " 
					<< (int)ch << endl;

				#endif

				type = _error6;//err6:unknown char

				break;
		}

		if (type >= _error1)//error const number
		{
			++errorNum;

			printErrorInfo(type);

			if (type == _error1 || type == _error2 || type == _error4)
			{
				inBuf.moveBackFPtr(1);
			}
			else if (type == _error6)
			{
				inBuf.getchar();
			}
			else if (type == _error3)
			{
				//read all char until meeting '\'' '\n' or EOF
				ch = inBuf.peekchar();
				while (ch != '\'' && ch != '\n' && ch != EOF)
				{
					ch = inBuf.peekchar();
				}
				while (0 != inBuf.getchar());
			}
		}
		else if (type != 0)
		{
			//Output:<type,symbol>
			string str = "";

			ch = inBuf.getchar();
			while (ch != 0 && ch != EOF)
			{
				str += ch;
				
				//counting word and moving pointer
				if (ch != ' ' && ch != '\n' && ch != '\t' && ch != '\r')
				{
					++curChar;
				}

				if (ch == '\n')
				{
					++curLine;
					curCol = 1;
				}
				else if (ch == '\t')
				{
					curCol += 4;
				}
				else
				{
					++curCol;
				}
				
				ch = inBuf.getchar();
			}
			

			//judge type is ID or keyword
			if (type == _id)
			{
				++curWord;//increase number of letter in this file

				__toLower(str);

				for (int i = 0; i < NumOfKey; ++i)
				{
					if (keyArr[i] == str)
					{
						type = _key;
						break;
					}
				}
				for (int i = 0; i < NumOfBoolConst; ++i)
				{
					if (boolConstArr[i] == str)
					{
						type = _boolean;
					}
				}
				for (int i = 0; i < NumOfOperator; ++i)
				{
					if (operatorArr[i] == str)
					{
						if (i <= PosOfAddOperator)
						{
							type = _addop;
						}
						else type = _mulop;
					}
				}
			}

			//add to the list
			if(type!=_note)
			{ 
				letterList.push_back(LetterTriple(str, type, curLine));
			}
			
		}
		else//charType is _ignore, moving pointer
		{
			if (ch == '\n')
			{
				++curLine;
				curCol = 1;
			}
			else if (ch == '\t')
			{
				curCol += 4;
			}
			else
			{
				++curCol;
			}
		}

		//get next char
		ch = inBuf.peekchar();
		if (ch == EOF)
		{
			exitCode = false;
		}
	}

	//print the finish info
	printStatistics();
}

int Lexer::judgeCharType(const char &ch)
{
	if (ch >= '0'&&ch <= '9')
	{
		return _num;
	}
	else if ((ch >= 'A' && ch <= 'Z') ||
		(ch >= 'a' && ch <= 'z'))
	{
		return _letter;
	}
	else if (ch == '\n' || ch == ' ' || ch == '\t' || ch == '\r')
	{
		return _ignore;
	}
	else if (isSign(ch))
	{
		return _other;
	}
	return 0;
}

Type Lexer::judgeNum(char ch, InputBuffer &inBuf)
{
	bool isPeekable = true;

	Type returnTypeCode = 0;

	int state = 0;

	while (state != END_STATE)
	{
		switch (state)
		{
			case 0:
				if (ch <= '9'&&ch >= '0')
				{
					state = 1;
				}
				state = state ? state : END_STATE;
				break;

			case 1:
				if (ch <= '9'&&ch >= '0')
				{
					state = 1;
				}
				else if (ch == '.')
				{
					state = 3;
				}
				else //ch = other
				{
					inBuf.moveBackFPtr(1);
					isPeekable = false;
					state = 2;
				}
				break;

			case 2://End (_integer)
				state = END_STATE;
				returnTypeCode = _integer;
				break;

			case 3:
				if (ch <= '9'&&ch >= '0')
				{
					state = 4;
				}
				else //ch = other
				{
					state = END_STATE;
					returnTypeCode = _error1;
				}
				break;

			case 4:
				if (ch <= '9'&&ch >= '0')
				{
					state = 4;
				}
				else //ch = other
				{
					inBuf.moveBackFPtr(1);
					isPeekable = false;
					state = 5;
				}
				break;

			case 5://End (_real)
				state = END_STATE;
				returnTypeCode = _real;
				break;

			default:
				#if LEXDEBUG==1

				cout << "Wrong state in judgeNum.(state is:" << state << ")" << endl;

				#endif
				break;
		}

		if (state != END_STATE && isPeekable)
		{
			ch = inBuf.peekchar();
		}
	}

	return returnTypeCode;
}

Type Lexer::judgeID(char ch, InputBuffer &inBuf)
{
	bool isPeekable = true;

	int state = 0;

	Type returnTypeCode = 0;

	int typeOfCh;

	while (state != END_STATE)
	{
		switch (state)
		{
			case 0://ch is a~z A~Z
				if (_letter == judgeCharType(ch))
				{
					state = 6;
				}
				state = state ? state : END_STATE;
				break;

			case 6:
				typeOfCh = judgeCharType(ch);
				if (typeOfCh == _num || typeOfCh == _letter)
				{
					state = 6;
				}
				else
				{
					//leave the extra char behind
					inBuf.moveBackFPtr(1);
					isPeekable = false;
					state = 7;
				}
				break;

			case 7://End (_id)
				//judge is ID or keyword after quit function
				returnTypeCode = _id;

				state = END_STATE;
				break;

			default:
				#if LEXDEBUG==1

				cout << "Wrong state in judgeID.(state is:" << state << ")" << endl;

				#endif
				break;
		}

		if (state != END_STATE && isPeekable)
		{
			ch = inBuf.peekchar();
		}
	}

	return returnTypeCode;
}

Type Lexer::judgePunc(char ch, InputBuffer &inBuf)
{
	bool isPeekable = true;

	int state = 0;
	Type returnTypeCode = 0;

	while (state != END_STATE)
	{
		switch (state)
		{
			case 0:
				for (int i = 0; i < NumOfOperHead; ++i)
				{
					if (ch == signToState[0][i])
					{
						state = signToState[1][i];
						if (i < NumOfEndState)
						{
							isPeekable = false;
						}
					}
				}
				state = state ? state : END_STATE;
				break;

			case 1://End (_delimiter)
				state = END_STATE;
				returnTypeCode = _delimiter;
				break;

			case 2://End (_addop)
				state = END_STATE;
				returnTypeCode = _addop;
				break;

			case 3://End (_mulop)
				state = END_STATE;
				returnTypeCode = _mulop;
				break;

			case 4://End (_relop)
				state = END_STATE;
				returnTypeCode = _relop;
				break;

			case 5:
				if (ch == '=' || ch == '>')
				{
					isPeekable = false;
					state = 4;
				}
				else //ch = other
				{
					isPeekable = false;
					inBuf.moveBackFPtr(1);
					state = 4;
				}
				break;

			case 6:
				if (ch == '=')
				{
					isPeekable = false;
					state = 4;
				}
				else //ch = other
				{
					isPeekable = false;
					inBuf.moveBackFPtr(1);
					state = 4;
				}
				break;

			case 7:
				if (ch == '=')
				{
					isPeekable = false;
					state = 8;
				}
				else //ch = other
				{
					isPeekable = false;
					inBuf.moveBackFPtr(1);
					state = 1;
				}
				break;

			case 8://End (_assignop)
				returnTypeCode = _assignop;
				state = END_STATE;
				break;

			case 9:
				if (ch == '.')
				{
					isPeekable = false;
					state = 10;
				}
				else //ch = other
				{
					isPeekable = false;
					state = 1;
				}
				break;

			case 10://End (_dotdot)
				returnTypeCode = _dotdot;
				state = END_STATE;
				break;

			case 11:
				if (ch == '}')
				{
					isPeekable = false;
					state = 12;
				}
				else if (ch == EOF)
				{
					returnTypeCode = _error4;
					state = END_STATE;
				}
				else //ch = other
				{
					state = 11;
				}
				break;

			case 12://End (_note)
				returnTypeCode = _note;
				state = END_STATE;
				break;

			case 13:
				if (ch == '\'')
				{
					state = 16;
				}
				else
				{
					state = 14;
				}
				break;

			case 14:
				if (ch == '\'')
				{
					isPeekable = false;
					state = 15;
				}
				else //ch = other
				{
					returnTypeCode = _error3;
					state = END_STATE;
				}
				break;

			case 15://END (_char)
				returnTypeCode = _char;
				state = END_STATE;
				break;

			case 16:
				if (ch == '\'')
				{
					state = 14;
				}
				else if (ch == EOF)
				{
					returnTypeCode = _error5;
					state = END_STATE;
				}
				else //ch = other
				{
					returnTypeCode = _error2;
					state = END_STATE;
				}
				break;

			default:

				#if LEXDEBUG==1

					cout << "Wrong state in judgePunc.(state is:" << state << ")" << endl;

				#endif // _DEBUG_

				break;
		}

		if (state != END_STATE && isPeekable)
		{
			ch = inBuf.peekchar();
		}
	}

	return returnTypeCode;
}

bool Lexer::isSign(const char &ch)
{
	//check the ch that if it's the available sign or not
	for (int i = 1; i <= NumOfSign; ++i)
	{
		if (ch == signArr[i])
		{
			return true;
		}
	}
	return false;
}

void Lexer::printErrorInfo(const Type &type)
{

	cout << "< Error: In line " << curLine << ", col "
		<< curCol << ":" << endl;
	switch (type)
	{
		case _error1:
			cout << "  err1:err1:error const number" 
				<< " >" << endl;
			break;

		case _error2:
			cout << "  err2:emypy char"
				<< " >" << endl;
			break;

		case _error3:
			cout << "  err3:char is too long"
				<< " >" << endl;
			break;

		case _error4:
			cout << "  err4:annotation is not closed"
				<< " >" << endl;
			break;

		case _error5:
			cout << "  err5:single quotes is not closed"
				<< " >" << endl;
			break;

		case _error6:
			cout << "  err6:unknown char"
				<< " >" << endl;
			break;

		default:
			cout << "Unknown error type!Type is " << type<<endl;
			break;
	}

}

void Lexer::printStatistics(void)
{
	#if LEXDEBUG==1

	cout << "\n\n==========================" << endl;
	cout << "Lexical analysis finish!" << endl;
	cout << errorNum << " Error(s), " << curChar << " chars, " << endl;
	cout << curWord << " words, " << curLine << " line(s)." << endl;
	cout << "==========================" << endl;

	#endif//LEXDEBUG
}

LetterTriple Lexer::getTriple(void)
{
	if (curPtrInList == letterList.size()) return LetterTriple("", 0, 0);
	return letterList[curPtrInList++];
}
