#pragma once

//�﷨����Ҷ�ӽڵ�

#include "SyntaxTreeNode.h"
#include <string>

//�����壬�����˽ڵ��ֵ����
union SyntaxTreeNodeFinalValue
{
    int intValue;
    double realValue;
    bool boolValue;
    char charValue;
};

//�����˽ڵ�ı���
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
    SyntaxTreeNodeFinal(const int type, const SyntaxTreeNodeFinalValue val, const int linenum);
    SyntaxTreeNodeFinal(const int type, const std::string name, const int linenum);
    int& VariableBlock();//����������
    int& VariablePtr();//�����ķ��ű�ָ��
    const int VariableBlock()const;//����������
    const int VariablePtr()const;//�����ķ��ű�ָ��
    const std::string VariableName()const;//������
    const SyntaxTreeNodeFinalValue Value()const;//����ֵ
    const int GetType() const //0λ���ű����,1Ϊint����,2Ϊdouble����,3Ϊboolean����,4Ϊchar����
    {
        return type;
    }
    const int GetLineNum()const { return linenum; }
protected:
    int type;//0λ���ű����,1Ϊint����,2Ϊdouble����,3Ϊboolean����,4Ϊchar����
    SyntaxTreeNodeFinalValue value;//ֵ����
    SyntaxTreeNodeFinalVariable variable;//����
    int linenum;//�к�
};


//type 0λ���ű����,1Ϊint����,2Ϊdouble����,3Ϊboolean����,4Ϊchar����
inline SyntaxTreeNodeFinal::SyntaxTreeNodeFinal(const int type, SyntaxTreeNodeFinalValue val, const int linenum)
    :SyntaxTreeNode(0), value(val), type(type), linenum(linenum)
{}

inline SyntaxTreeNodeFinal::SyntaxTreeNodeFinal(const int type, std::string name, const int linenum)
    : SyntaxTreeNode(0), type(type), linenum(linenum)
{
    variable.name = name;
}

inline int & SyntaxTreeNodeFinal::VariableBlock()//����������
{
    return this->variable.block;
}

inline int & SyntaxTreeNodeFinal::VariablePtr()//�����ķ��ű�ָ��
{
    return this->variable.ptr;
}

inline const int SyntaxTreeNodeFinal::VariableBlock() const//����������
{
    return this->variable.block;
}

inline const int SyntaxTreeNodeFinal::VariablePtr() const//�����ķ��ű�ָ��
{
    return this->variable.ptr;
}

inline const std::string SyntaxTreeNodeFinal::VariableName() const//������
{
    return this->variable.name;
}

inline const SyntaxTreeNodeFinalValue SyntaxTreeNodeFinal::Value() const//����ֵ
{
    return this->value;
}

