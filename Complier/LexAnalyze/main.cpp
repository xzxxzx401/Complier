#include "InputBuffer.h"
#include "Lexer.h"
#include <iostream>

using namespace std;

#include <cstdlib>
//
//int main()
//{
//	string inputFileName = "..\\test.pas";
//
//	//cout << "Please input the file name:" << endl;
//	//cin >> inputFileName;
//
//	InputBuffer inputBuffer(inputFileName);
//	
//	if (!inputBuffer.getFileState())
//	{
//		cout << "File not Exist!" << endl;
//		return -1;
//	}
//
//	Lexer lexer;
//
//	//starting analyse
//	lexer.lexicalAnalyse(inputBuffer);
//	LetterTriple tmp("", 0, 0);
//	tmp = lexer.getTriple();
//	while (tmp.value != "")
//	{
//		cout << tmp.toString() << endl;
//		tmp = lexer.getTriple();
//	}
//
//	system("pause");
//
//	return 0;
//}