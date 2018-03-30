#pragma once

///�������ڵ�
///��ʾ�﷨��һ���ս��
///opnum��ʾ��������
///			0 1  2 3  4 5
///relop	= <> < <= > >=
///			6 7 8
///addlop	+ - or
///			9 10 11  12  13
///mulop	* /  div mod and
///			14
///assignop	:=

#include "SyntaxTreeNode.h"
class SyntaxTreeNodeOperator :
	public SyntaxTreeNode
{
public:
	SyntaxTreeNodeOperator(int op, int linenum);

	virtual ~SyntaxTreeNodeOperator();
	const int GetOp()const { return this->op; }
private:
	int op;
	int linenum;
};



inline SyntaxTreeNodeOperator::SyntaxTreeNodeOperator(int op, int linenum)
	:SyntaxTreeNode(0), op(op), linenum(linenum)
{}


inline SyntaxTreeNodeOperator::~SyntaxTreeNodeOperator()
{}
