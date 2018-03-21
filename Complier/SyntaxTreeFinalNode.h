#pragma once

///�﷨����Ҷ�ӽڵ�
///

#include "SyntaxTreeNode.h"
#include <string>

///�����壬�����˽ڵ��ֵ����
union SyntaxTreeNodeFinalValue
{
	int intValue;
	double realValue;
	bool boolValue;
	char charValue;
};

///�����˽ڵ�ı���
struct SyntaxTreeNodeFinalVariable
{
	std::string name;//������
	int block, ptr;//�飬���ű�ָ�루���������д��
};

//Ҷ�ӽڵ�
class SyntaxTreeNodeFinal :
	public SyntaxTreeNode
{
public:
	SyntaxTreeNodeFinal(const int type, const  SyntaxTreeNodeFinalValue val);
	SyntaxTreeNodeFinal(const int type, const  std::string name);
	int& VariableBlock();//����������
	int& VariablePtr();//�����ķ��ű�ָ��
	const int VariableBlock()const;//����������
	const int VariablePtr()const;//�����ķ��ű�ָ��
	const std::string VariableName()const;//������
	const SyntaxTreeNodeFinalValue Value()const;//����ֵ
	const int GetType()const { return type; }
protected:
	int type;//0λ���ű����,1Ϊint����,2Ϊdouble����,3Ϊboolean����,4Ϊchar����
	SyntaxTreeNodeFinalValue value;//ֵ����
	SyntaxTreeNodeFinalVariable variable;//����
};


//type 0λ���ű����,1Ϊint����,2Ϊdouble����,3Ϊboolean����,4Ϊchar����
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

