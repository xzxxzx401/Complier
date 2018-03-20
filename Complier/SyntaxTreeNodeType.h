#pragma once
#include "SyntaxTreeNode.h"
#include"SyntaxTreeFinalNode.h"

///TreeNodeTypeA
///        *
///      *   *
///有两个非终结子节点
///产生式 1 14 18 25 27 32 37 40 55 使用

class SyntaxTreeNodeTypeA :
	public SyntaxTreeNode
{
public:
	SyntaxTreeNodeTypeA(int typenumber, SyntaxTreeNode* first, SyntaxTreeNode *second)
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
	SyntaxTreeNodeTypeB(int typenumber, SyntaxTreeFinalNode* first)
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
	const SyntaxTreeFinalNode* First()const { return first; }
protected:
	SyntaxTreeFinalNode * first;
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
		:SyntaxTreeNode(typenumber) {}
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
	SyntaxTreeNodeTypeF(int typenumber, SyntaxTreeNode* first, SyntaxTreeFinalNode * second, SyntaxTreeFinalNode * third)
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
	const SyntaxTreeFinalNode* Second()const { return second; }
	const SyntaxTreeFinalNode* Third()const { return third; }
protected:
	SyntaxTreeNode * first;
	SyntaxTreeFinalNode * second;
	SyntaxTreeFinalNode * third;
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
	SyntaxTreeNodeTypeG(int typenumber, SyntaxTreeFinalNode* first, SyntaxTreeFinalNode * second)
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
	const SyntaxTreeFinalNode* First()const { return first; }
	const SyntaxTreeFinalNode* Second()const { return second; }
protected:
	SyntaxTreeFinalNode * first;
	SyntaxTreeFinalNode * second;
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
	SyntaxTreeNodeTypeI(int typenumber, SyntaxTreeNode* first, SyntaxTreeFinalNode * second)
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
	const SyntaxTreeFinalNode* Second()const { return second; }
protected:
	SyntaxTreeNode * first;
	SyntaxTreeFinalNode * second;
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
	SyntaxTreeNodeTypeJ(int typenumber, SyntaxTreeFinalNode * first, SyntaxTreeNode* second)
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
	const SyntaxTreeFinalNode* First()const { return first; }
	const SyntaxTreeNode* Second()const { return second; }
protected:
	SyntaxTreeFinalNode * first;
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
	SyntaxTreeNodeTypeK(int typenumber, SyntaxTreeFinalNode* first, SyntaxTreeNode * second, SyntaxTreeNode * third)
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
	const SyntaxTreeFinalNode* First()const { return first; }
	const SyntaxTreeNode* Second()const { return second; }
	const SyntaxTreeNode* Third()const { return third; }
protected:
	SyntaxTreeFinalNode * first;
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
	SyntaxTreeNodeTypeL(int typenumber, SyntaxTreeNode* first, int second, SyntaxTreeNode * third)
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
	const int Second() { return second; }
	const SyntaxTreeNode* Second()const { return third; }
protected:
	SyntaxTreeNode * first;
	int second;
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
	SyntaxTreeNodeTypeM(int typenumber, SyntaxTreeFinalNode* first, int second, SyntaxTreeNode * third, SyntaxTreeNode* forth, SyntaxTreeNode* fifth)
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
	const SyntaxTreeFinalNode* First()const { return first; }
	const int Second()const { return second; }
	const SyntaxTreeNode* Third()const { return third; }
	const SyntaxTreeNode* Forth()const { return forth; }
	const SyntaxTreeNode* Fifth()const { return fifth; }
protected:
	SyntaxTreeFinalNode * first;
	int second;
	SyntaxTreeNode * third;
	SyntaxTreeNode * forth;
	SyntaxTreeNode * fifth;
};

SyntaxTreeNode* MakeNode(int type, ...);
SyntaxTreeFinalNode* MakeLeaf(int val1, ...);