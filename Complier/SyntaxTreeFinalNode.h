#pragma once

///语法树的叶子节点
///

#include "SyntaxTreeNode.h"
#include <string>

///联合体，定义了节点的值类型
union SyntaxTreeNodeFinalValue
{
	int intValue;
	double realValue;
	bool boolValue;
	char charValue;
};

///定义了节点的变量
struct SyntaxTreeNodeFinalVariable
{
	std::string name;//变量名
	int block, ptr;//块，符号表指针（语义分析填写）
};

//叶子节点
class SyntaxTreeNodeFinal :
	public SyntaxTreeNode
{
public:
	SyntaxTreeNodeFinal(const int type, const  SyntaxTreeNodeFinalValue val);
	SyntaxTreeNodeFinal(const int type, const  std::string name);
	int& VariableBlock();//变量作用域
	int& VariablePtr();//变量的符号表指针
	const int VariableBlock()const;//变量作用域
	const int VariablePtr()const;//变量的符号表指针
	const std::string VariableName()const;//变量名
	const SyntaxTreeNodeFinalValue Value()const;//常量值
	const int GetType()const { return type; }
protected:
	int type;//0位符号表变量,1为int常量,2为double常量,3为boolean常量,4为char常量
	SyntaxTreeNodeFinalValue value;//值类型
	SyntaxTreeNodeFinalVariable variable;//变量
};


//type 0位符号表变量,1为int常量,2为double常量,3为boolean常量,4为char常量
inline SyntaxTreeNodeFinal::SyntaxTreeNodeFinal(int type, SyntaxTreeNodeFinalValue val)
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

inline const SyntaxTreeNodeFinalValue SyntaxTreeNodeFinal::Value() const
{
	return this->value;
}

