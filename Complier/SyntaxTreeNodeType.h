#pragma once

///定义了语法树的非终结节点
///按树的形态定义了13种节点
///详细分类于产生式见Tree.jpg

#include "SyntaxTreeNode.h"
#include "SyntaxTreeFinalNode.h"
#include "SyntaxTreeNodeOperator.h"

///TreeNodeTypeA
///        *
///      *   *
///有两个非终结子节点
///产生式 1 14 18 25 27 32 37 40 55 使用

class SyntaxTreeNodeTypeA :
	public SyntaxTreeNode
{
public:
	SyntaxTreeNodeTypeA(const int typenumber, SyntaxTreeNode* first, SyntaxTreeNode *second)
		:SyntaxTreeNode(typenumber)
	{
		this->first = first;
		this->second = second;
	}
	virtual ~SyntaxTreeNodeTypeA()
	{
		if (this->first)
			delete this->first;
		if (this->second)
			delete this->second;
		this->first = this->second = nullptr;
	}
	const SyntaxTreeNode* First()const { return first; }
	const SyntaxTreeNode* Second()const { return second; }
protected:
	SyntaxTreeNode * first;
	SyntaxTreeNode * second;
};

///TreeNodeTypeB
///        *
///        &
///有一终结子节点
///产生式 2 8 9 10 16 51 63 使用

class SyntaxTreeNodeTypeB :
	public SyntaxTreeNode
{
public:
	SyntaxTreeNodeTypeB(int typenumber, SyntaxTreeNodeFinal* first)
		:SyntaxTreeNode(typenumber)
	{
		this->first = first;
	}
	virtual ~SyntaxTreeNodeTypeB()
	{
		if (this->first)
			delete this->first;
		this->first = nullptr;
	}
	const SyntaxTreeNodeFinal* First()const { return first; }
protected:
	SyntaxTreeNodeFinal * first;
};

///TreeNodeTypeC
///        *
///     * * * *
///有四个非终结子节点
///产生式 3 使用

class SyntaxTreeNodeTypeC :
	public SyntaxTreeNode
{
public:
	SyntaxTreeNodeTypeC(int typenumber, SyntaxTreeNode* first, SyntaxTreeNode *second, SyntaxTreeNode* third, SyntaxTreeNode* forth)
		:SyntaxTreeNode(typenumber)
	{
		this->first = first;
		this->second = second;
		this->third = third;
		this->forth = forth;
	}
	virtual ~SyntaxTreeNodeTypeC()
	{
		if (this->first)
			delete this->first;
		if (this->second)
			delete this->second;
		if (this->third)
			delete this->third;
		if (this->forth)
			delete this->forth;
		this->first = this->second = this->third = this->forth = nullptr;
	}
	const SyntaxTreeNode* First()const { return first; }
	const SyntaxTreeNode* Second()const { return second; }
	const SyntaxTreeNode* Third()const { return third; }
	const SyntaxTreeNode* Forth()const { return forth; }
protected:
	SyntaxTreeNode * first;
	SyntaxTreeNode * second;
	SyntaxTreeNode * third;
	SyntaxTreeNode * forth;
};

///TreeNodeTypeD
///        *
///        *
///有一个非终结子节点
///产生式 4 11 17 30 33 34 35 36 39 41 43
///      44 49 53 56 58 60 62 64 66 67 68 使用

class SyntaxTreeNodeTypeD :
	public SyntaxTreeNode
{
public:
	SyntaxTreeNodeTypeD(int typenumber, SyntaxTreeNode* first)
		:SyntaxTreeNode(typenumber)
	{
		this->first = first;
	}
	virtual ~SyntaxTreeNodeTypeD()
	{
		if (this->first)
			delete this->first;
		this->first = nullptr;
	}
	const SyntaxTreeNode* First()const { return first; }
protected:
	SyntaxTreeNode * first;
};

///TreeNodeTypeE
///        *
///没有子节点
///产生式 5 12 19 20 21 22 26 31 47 50 54 使用

class SyntaxTreeNodeTypeE :
	public SyntaxTreeNode
{
public:
	SyntaxTreeNodeTypeE(int typenumber)
		:SyntaxTreeNode(typenumber)
	{}
	virtual ~SyntaxTreeNodeTypeE() {}
};


///TreeNodeTypeF
///        *
///      * & &
///有一个非终结子节点，两个终结子节点
///产生式 6 23 使用

class SyntaxTreeNodeTypeF :
	public SyntaxTreeNode
{
public:
	SyntaxTreeNodeTypeF(int typenumber, SyntaxTreeNode* first, SyntaxTreeNodeFinal * second, SyntaxTreeNodeFinal * third)
		:SyntaxTreeNode(typenumber)
	{
		this->first = first;
		this->second = second;
		this->third = third;
	}
	virtual ~SyntaxTreeNodeTypeF()
	{
		if (this->first)
			delete this->first;
		if (this->second)
			delete this->second;
		if (this->third)
			delete this->third;
		this->first = nullptr;
		this->second = this->third = nullptr;
	}
	const SyntaxTreeNode* First()const { return first; }
	const SyntaxTreeNodeFinal* Second()const { return second; }
	const SyntaxTreeNodeFinal* Third()const { return third; }
protected:
	SyntaxTreeNode * first;
	SyntaxTreeNodeFinal * second;
	SyntaxTreeNodeFinal * third;
};


///TreeNodeTypeG
///        *
///      &   &
///有两个终结子节点
///产生式 7 24 使用

class SyntaxTreeNodeTypeG :
	public SyntaxTreeNode
{
public:
	SyntaxTreeNodeTypeG(int typenumber, SyntaxTreeNodeFinal* first, SyntaxTreeNodeFinal * second)
		:SyntaxTreeNode(typenumber)
	{
		this->first = first;
		this->second = second;
	}
	virtual ~SyntaxTreeNodeTypeG()
	{
		if (this->first)
			delete this->first;
		if (this->second)
			delete this->second;
		this->first = this->second = nullptr;
	}
	const SyntaxTreeNodeFinal* First()const { return first; }
	const SyntaxTreeNodeFinal* Second()const { return second; }
protected:
	SyntaxTreeNodeFinal * first;
	SyntaxTreeNodeFinal * second;
};


///TreeNodeTypeH
///        *
///     *  *  *
///有三个非终结子节点
///产生式 13 38 45 使用

class SyntaxTreeNodeTypeH :
	public SyntaxTreeNode
{
public:
	SyntaxTreeNodeTypeH(int typenumber, SyntaxTreeNode* first, SyntaxTreeNode * second, SyntaxTreeNode* third)
		:SyntaxTreeNode(typenumber)
	{
		this->first = first;
		this->second = second;
		this->third = third;
	}
	virtual ~SyntaxTreeNodeTypeH()
	{
		if (this->first)
			delete this->first;
		if (this->second)
			delete this->second;
		if (this->third)
			delete this->third;
		this->first = this->second = this->third = nullptr;
	}
	const SyntaxTreeNode* First()const { return first; }
	const SyntaxTreeNode* Second()const { return second; }
	const SyntaxTreeNode* Third() const { return this->third; }
protected:
	SyntaxTreeNode * first;
	SyntaxTreeNode * second;
	SyntaxTreeNode * third;
};


///TreeNodeTypeI
///        *
///      *   &
///有一个非终结叶子节点，一个终结叶子节点
///产生式 15 使用

class SyntaxTreeNodeTypeI :
	public SyntaxTreeNode
{
public:
	SyntaxTreeNodeTypeI(int typenumber, SyntaxTreeNode* first, SyntaxTreeNodeFinal * second)
		:SyntaxTreeNode(typenumber)
	{
		this->first = first;
		this->second = second;
	}
	virtual ~SyntaxTreeNodeTypeI()
	{
		if (this->first)
			delete this->first;
		if (this->second)
			delete this->second;
		this->first = nullptr;
		this->second = nullptr;
	}
	const SyntaxTreeNode* First()const { return first; }
	const SyntaxTreeNodeFinal* Second()const { return second; }
protected:
	SyntaxTreeNode * first;
	SyntaxTreeNodeFinal * second;
};

///TreeNodeTypeJ
///        *
///      &   *
///有一个终结叶子节点，一个非终结叶子节点
///产生式 28 48 52 65 使用

class SyntaxTreeNodeTypeJ :
	public SyntaxTreeNode
{
public:
	SyntaxTreeNodeTypeJ(int typenumber, SyntaxTreeNodeFinal * first, SyntaxTreeNode* second)
		:SyntaxTreeNode(typenumber)
	{
		this->first = first;
		this->second = second;
	}
	virtual ~SyntaxTreeNodeTypeJ()
	{
		if (this->first)
			delete this->first;
		if (this->second)
			delete this->second;
		this->first = nullptr;
		this->second = nullptr;
	}
	const SyntaxTreeNodeFinal* First()const { return first; }
	const SyntaxTreeNode* Second()const { return second; }
protected:
	SyntaxTreeNodeFinal * first;
	SyntaxTreeNode * second;
};

///TreeNodeTypeK
///        *
///      & * *
///有一个终结叶子节点，两个非终结叶子节点
///产生式 29 使用

class SyntaxTreeNodeTypeK :
	public SyntaxTreeNode
{
public:
	SyntaxTreeNodeTypeK(int typenumber, SyntaxTreeNodeFinal* first, SyntaxTreeNode * second, SyntaxTreeNode * third)
		:SyntaxTreeNode(typenumber)
	{
		this->first = first;
		this->second = second;
		this->third = third;
	}
	virtual ~SyntaxTreeNodeTypeK()
	{
		if (this->first)
			delete this->first;
		if (this->second)
			delete this->second;
		if (this->third)
			delete this->third;
		this->first = nullptr;
		this->second = nullptr;
		this->third = nullptr;
	}
	const SyntaxTreeNodeFinal* First()const { return first; }
	const SyntaxTreeNode* Second()const { return second; }
	const SyntaxTreeNode* Third()const { return third; }
protected:
	SyntaxTreeNodeFinal * first;
	SyntaxTreeNode* second;
	SyntaxTreeNode* third;
};

///TreeNodeTypeL
///        *
///      * @ *
///有一个非终结叶子节点，一个运算符，一个非终结叶子节点
///产生式 42 57 59 61 使用

class SyntaxTreeNodeTypeL :
	public SyntaxTreeNode
{
public:
	SyntaxTreeNodeTypeL(int typenumber, SyntaxTreeNode* first, SyntaxTreeNodeOperator* second, SyntaxTreeNode * third)
		:SyntaxTreeNode(typenumber)
	{
		this->first = first;
		this->second = second;
		this->third = third;
	}
	virtual ~SyntaxTreeNodeTypeL()
	{
		if (this->first)
			delete this->first;
		if (this->third)
			delete this->third;
		this->first = nullptr;
		this->third = nullptr;
	}
	const SyntaxTreeNode* First()const { return first; }
	const SyntaxTreeNodeOperator* Second()const { return second; }
	const SyntaxTreeNode* Third()const { return third; }
protected:
	SyntaxTreeNode * first;
	SyntaxTreeNodeOperator* second;
	SyntaxTreeNode * third;
};

///TreeNodeTypeM
///        *
///    & @ * * *
///有一个终结叶子节点，一个运算符，三个终结叶子节点
///产生式 46 使用

class SyntaxTreeNodeTypeM :
	public SyntaxTreeNode
{
public:
	SyntaxTreeNodeTypeM(int typenumber, SyntaxTreeNodeFinal* first, SyntaxTreeNodeOperator* second, SyntaxTreeNode * third, SyntaxTreeNode* forth, SyntaxTreeNode* fifth)
		:SyntaxTreeNode(typenumber)
	{
		this->first = first;
		this->second = second;
		this->third = third;
		this->forth = forth;
		this->fifth = fifth;
	}
	virtual ~SyntaxTreeNodeTypeM()
	{
		if (this->first)
			delete this->first;
		if (this->third)
			delete this->third;
		if (this->forth)
			delete this->forth;
		if (this->fifth)
			delete this->fifth;
		this->first = nullptr;
		this->third = nullptr;
		this->forth = nullptr;
		this->fifth = nullptr;
	}
	const SyntaxTreeNodeFinal* First()const { return first; }
	const SyntaxTreeNodeOperator* Second()const { return second; }
	const SyntaxTreeNode* Third()const { return third; }
	const SyntaxTreeNode* Forth()const { return forth; }
	const SyntaxTreeNode* Fifth()const { return fifth; }
protected:
	SyntaxTreeNodeFinal * first;
	SyntaxTreeNodeOperator* second;
	SyntaxTreeNode * third;
	SyntaxTreeNode * forth;
	SyntaxTreeNode * fifth;
};

#include <initializer_list>
SyntaxTreeNode* MakeNode(int type, std::initializer_list<SyntaxTreeNode*> args);

//type 0位符号表变量,1为int常量,2为double常量,3为boolean常量,4为char常量
SyntaxTreeNodeFinal* MakeLeaf(std::string name,int linenum);

//type 0位符号表变量,1为int常量,2为double常量,3为boolean常量,4为char常量
SyntaxTreeNodeFinal* MakeLeaf(int val, int linenum);

//type 0位符号表变量,1为int常量,2为double常量,3为boolean常量,4为char常量
SyntaxTreeNodeFinal* MakeLeaf(double val, int linenum);

//type 0位符号表变量,1为int常量,2为double常量,3为boolean常量,4为char常量
SyntaxTreeNodeFinal* MakeLeaf(bool val, int linenum);

//type 0位符号表变量,1为int常量,2为double常量,3为boolean常量,4为char常量
SyntaxTreeNodeFinal* MakeLeaf(char val, int linenum);

//opnum表示运算符标号
//			0 1  2 3  4 5
//relop		= <> < <= > >=
//			6 7 8
//addlop	+ - or
//			9 10 11  12  13
//mulop		* /  div mod and
//			14
//assignop	:=
SyntaxTreeNodeOperator* MakeOperator(int opnum);

void trans(const SyntaxTreeNode* rt, int lev);