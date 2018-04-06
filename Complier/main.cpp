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

set<int> ids;
int pds[70];

int main(void)
{
#if YYDEBUG
    yydebug = 1;
#endif // YYDEBUG
    inputFileName = "TestCases\\Right\\test3.pas";
    if (yyparse() == 0 && yynerrs == 0)
    {
        cout << "\n!!Success\n";
        trans(rt, 0);
        memset(pds, 0, sizeof(pds));
        for (auto id : ids)
        {
            pds[id] = 1;
        }
        for (int i = 0; i < 69; i++)
            if (pds[i] != 1)
                cout << i << endl;
    }
    else
    {
        cout << "\n!!Fail With " << yynerrs << " Errors!\n";
    }

    delete rt;
    system("PAUSE");
    return 0;
}