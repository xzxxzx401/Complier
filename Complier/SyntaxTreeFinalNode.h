#pragma once
#include "SyntaxTreeNode.h"
class SyntaxTreeFinalNode :
	public SyntaxTreeNode
{
public:
	SyntaxTreeFinalNode(int block, int ptr);
	SyntaxTreeFinalNode(int value);
protected:
	int value;
	int block;
	int ptr;
};



inline SyntaxTreeFinalNode::SyntaxTreeFinalNode(int block, int ptr)
	:SyntaxTreeNode(0), block(block), ptr(ptr)
{
}

inline SyntaxTreeFinalNode::SyntaxTreeFinalNode(int value)
	: SyntaxTreeNode(0), value(value)
{
}
