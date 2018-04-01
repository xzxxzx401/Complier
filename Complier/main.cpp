#include"SyntaxTree\SyntaxTreeNodeType.h"
#include<iostream>
#include"SyntaxAnalyze\tmp.tab.h"

using namespace std;

string inputFileName;
SyntaxTreeNode *rt;
#if YYDEBUG
extern int yydebug;
#endif // YYDEBUG

int main(void)
{
#if YYDEBUG
	//yydebug = 1;
#endif // YYDEBUG
	inputFileName = "TestCases\\test_big.pas";
	yyparse() == 0 ? cout << "\n!!Success\n" : cout << "\n!!Fail\n";

	trans(rt, 0);

	delete rt;
	system("PAUSE");
	return 0;
}