#pragma once

///节点基类
///是语法树节点的抽象
///节点内指明了使用的产生式序号
class SyntaxTreeNode
{
protected:
	//节点类型，也指明了使用的产生式号，0表示叶节点
	int typenumber;
public:
	SyntaxTreeNode(const int typenumber) :typenumber(typenumber) {}
	virtual ~SyntaxTreeNode() {};
	const int GetType()const { return typenumber; }
};

