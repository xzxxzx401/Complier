#pragma once

///�������﷨���ķ��ս�ڵ�
///��������̬������13�ֽڵ�
///��ϸ�����ڲ���ʽ��Tree.jpg

#include "SyntaxTreeNode.h"
#include "SyntaxTreeFinalNode.h"
#include "SyntaxTreeNodeOperator.h"

///TreeNodeTypeA
///        *
///      *   *
///���������ս��ӽڵ�
///����ʽ 1 14 18 25 27 32 37 40 55 ʹ��

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
///��һ�ս��ӽڵ�
///����ʽ 2 8 9 10 16 51 63 ʹ��

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
///���ĸ����ս��ӽڵ�
///����ʽ 3 ʹ��

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
///��һ�����ս��ӽڵ�
///����ʽ 4 11 17 30 33 34 35 36 39 41 43
///      44 49 53 56 58 60 62 64 66 67 68 ʹ��

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
///û���ӽڵ�
///����ʽ 5 12 19 20 21 22 26 31 47 50 54 ʹ��

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
///��һ�����ս��ӽڵ㣬�����ս��ӽڵ�
///����ʽ 6 23 ʹ��

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
///�������ս��ӽڵ�
///����ʽ 7 24 ʹ��

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
///���������ս��ӽڵ�
///����ʽ 13 38 45 ʹ��

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
///��һ�����ս�Ҷ�ӽڵ㣬һ���ս�Ҷ�ӽڵ�
///����ʽ 15 ʹ��

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
///��һ���ս�Ҷ�ӽڵ㣬һ�����ս�Ҷ�ӽڵ�
///����ʽ 28 48 52 65 ʹ��

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
///��һ���ս�Ҷ�ӽڵ㣬�������ս�Ҷ�ӽڵ�
///����ʽ 29 ʹ��

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
///��һ�����ս�Ҷ�ӽڵ㣬һ���������һ�����ս�Ҷ�ӽڵ�
///����ʽ 42 57 59 61 ʹ��

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
///��һ���ս�Ҷ�ӽڵ㣬һ��������������ս�Ҷ�ӽڵ�
///����ʽ 46 ʹ��

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

//type 0λ���ű����,1Ϊint����,2Ϊdouble����,3Ϊboolean����,4Ϊchar����
SyntaxTreeNodeFinal* MakeLeaf(std::string name,int linenum);

//type 0λ���ű����,1Ϊint����,2Ϊdouble����,3Ϊboolean����,4Ϊchar����
SyntaxTreeNodeFinal* MakeLeaf(int val, int linenum);

//type 0λ���ű����,1Ϊint����,2Ϊdouble����,3Ϊboolean����,4Ϊchar����
SyntaxTreeNodeFinal* MakeLeaf(double val, int linenum);

//type 0λ���ű����,1Ϊint����,2Ϊdouble����,3Ϊboolean����,4Ϊchar����
SyntaxTreeNodeFinal* MakeLeaf(bool val, int linenum);

//type 0λ���ű����,1Ϊint����,2Ϊdouble����,3Ϊboolean����,4Ϊchar����
SyntaxTreeNodeFinal* MakeLeaf(char val, int linenum);

//opnum��ʾ��������
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