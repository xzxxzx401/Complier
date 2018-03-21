#pragma once

#include "SyntaxTreeNode.h"
#include <string>
union SyntaxTreeFinalNodeValue
{
	int intValue;
	double realValue;
	bool boolValue;
	char charValue;
};
struct SyntaxTreeFinalNodeVariable
{
	std::string name;
	int block, ptr;
};
class SyntaxTreeNodeFinal :
	public SyntaxTreeNode
{
public:
	SyntaxTreeNodeFinal(const int type, const  SyntaxTreeFinalNodeValue val);
	SyntaxTreeNodeFinal(const int type, const  std::string name);
	int& VariableBlock();
	int& VariablePtr();
	const int VariableBlock()const;
	const int VariablePtr()const;
	const std::string VariableName()const;
	const SyntaxTreeFinalNodeValue Value()const;
	const int GetType()const { return type; }
protected:
	int type;//0位符号表变量,1为int常量,2为double常量,3为boolean常量,4为char常量
	SyntaxTreeFinalNodeValue value;
	SyntaxTreeFinalNodeVariable variable;
};


//type 0位符号表变量,1为int常量,2为double常量,3为boolean常量,4为char常量
inline SyntaxTreeNodeFinal::SyntaxTreeNodeFinal(int type, SyntaxTreeFinalNodeValue val)
	:SyntaxTreeNode(0), value(val), type(type)
{
}

inline SyntaxTreeNodeFinal::SyntaxTreeNodeFinal(int type, std::string name)
	: SyntaxTreeNode(0), type(type)
{
	variable.name = name;
}

inline int & SyntaxTreeNodeFinal::VariableBlock()
{
	return this->variable.block;
}

inline int & SyntaxTreeNodeFinal::VariablePtr()
{
	return this->variable.ptr;
}

inline const int SyntaxTreeNodeFinal::VariableBlock() const
{
	return this->variable.block;
}

inline const int SyntaxTreeNodeFinal::VariablePtr() const
{
	return this->variable.ptr;
}

inline const std::string SyntaxTreeNodeFinal::VariableName() const
{
	return this->variable.name;
}

inline const SyntaxTreeFinalNodeValue SyntaxTreeNodeFinal::Value() const
{
	return this->value;
}

