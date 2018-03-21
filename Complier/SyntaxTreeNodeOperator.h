#pragma once
#include "SyntaxTreeNode.h"
class SyntaxTreeNodeOperator :
	public SyntaxTreeNode
{
public:
	SyntaxTreeNodeOperator(int op);
	virtual ~SyntaxTreeNodeOperator();
	const int GetOp()const { return this->op; }
private:
	int op;
};



inline SyntaxTreeNodeOperator::SyntaxTreeNodeOperator(int op)
	:SyntaxTreeNode(0), op(op)
{}


inline SyntaxTreeNodeOperator::~SyntaxTreeNodeOperator()
{}
