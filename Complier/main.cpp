#include"SyntaxTree\SyntaxTreeNodeType.h"
#include<iostream>
#include"SyntaxAnalyze\tmp.tab.h"

using namespace std;

string inputFileName;
SyntaxTreeNode *rt;
extern int yydebug;
int main(void)
{
	//yydebug = 1;
	inputFileName = "TestCases\\test2.pas";
	yyparse() == 0 ? cout << "\n!!Success\n" : cout << "\n!!Fail\n";

	trans(rt, 0);

	delete rt;
	system("PAUSE");
	return 0;
}