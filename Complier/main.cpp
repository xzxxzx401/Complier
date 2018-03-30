#include"SyntaxTree\SyntaxTreeNodeType.h"
#include<iostream>
#include"SyntaxAnalyze\tmp.tab.h"

using namespace std;
//int main()
//{
//	SyntaxTreeNodeFinal* nd1 = MakeLeaf(std::string("a"),1); //cout << nd1 << endl;
//	SyntaxTreeNodeFinal* nd2 = MakeLeaf(2,1); //cout << nd2 << endl;
//	auto k=MakeNode(1, { nd1, nd2 });
//	trans(k, 0);
//	system("pause");
//	return 0;
//}
string inputFileName;
SyntaxTreeNode *rt;
int main(void)
{
	inputFileName = "test.pas";
	yyparse() == 0 ? cout << "\n!!Success\n" : cout << "\n!!Fail\n";

	trans(rt, 0);

	system("PAUSE");
	return 0;
}