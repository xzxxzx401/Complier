#include"SyntaxTree\SyntaxTreeNodeType.h"
#include<iostream>
#include"SyntaxAnalyze\tmp.tab.h"
#include<set>

using namespace std;

string inputFileName;
SyntaxTreeNode *rt;
extern int yynerrs;
#if YYDEBUG
extern int yydebug;
#endif // YYDEBUG

extern int yyparse();
extern void trans(const SyntaxTreeNode* rt, int lev);

int main(void)
{
#if YYDEBUG
    yydebug = 1;
#endif // YYDEBUG
    inputFileName = "TestCases\\Wrong\\test3.pas";
    if (yyparse() == 0 && yynerrs == 0)
    {
        cout << "\n!!Success\n";
        trans(rt, 0);
    }
    else
    {
        cout << "\n!!Fail With " << yynerrs << " Errors!\n";
    }

    delete rt;
    system("PAUSE");
    return 0;
}