#pragma once

//语法树的叶子节点

#include "SyntaxTreeNode.h"
#include <string>

//联合体，定义了节点的值类型
union SyntaxTreeNodeFinalValue
{
    int intValue;
    double realValue;
    bool boolValue;
    char charValue;
};

//定义了节点的变量
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
    SyntaxTreeNodeFinal(const int type, const SyntaxTreeNodeFinalValue val, const int linenum);
    SyntaxTreeNodeFinal(const int type, const std::string name, const int linenum);
    int& VariableBlock();//变量作用域
    int& VariablePtr();//变量的符号表指针
    const int VariableBlock()const;//变量作用域
    const int VariablePtr()const;//变量的符号表指针
    const std::string VariableName()const;//变量名
    const SyntaxTreeNodeFinalValue Value()const;//常量值
    const int GetType() const //0位符号表变量,1为int常量,2为double常量,3为boolean常量,4为char常量
    {
        return type;
    }
    const int GetLineNum()const { return linenum; }
protected:
    int type;//0位符号表变量,1为int常量,2为double常量,3为boolean常量,4为char常量
    SyntaxTreeNodeFinalValue value;//值类型
    SyntaxTreeNodeFinalVariable variable;//变量
    int linenum;//行号
};


//type 0位符号表变量,1为int常量,2为double常量,3为boolean常量,4为char常量
inline SyntaxTreeNodeFinal::SyntaxTreeNodeFinal(const int type, SyntaxTreeNodeFinalValue val, const int linenum)
    :SyntaxTreeNode(0), value(val), type(type), linenum(linenum)
{}

inline SyntaxTreeNodeFinal::SyntaxTreeNodeFinal(const int type, std::string name, const int linenum)
    : SyntaxTreeNode(0), type(type), linenum(linenum)
{
    variable.name = name;
}

inline int & SyntaxTreeNodeFinal::VariableBlock()//变量作用域
{
    return this->variable.block;
}

inline int & SyntaxTreeNodeFinal::VariablePtr()//变量的符号表指针
{
    return this->variable.ptr;
}

inline const int SyntaxTreeNodeFinal::VariableBlock() const//变量作用域
{
    return this->variable.block;
}

inline const int SyntaxTreeNodeFinal::VariablePtr() const//变量的符号表指针
{
    return this->variable.ptr;
}

inline const std::string SyntaxTreeNodeFinal::VariableName() const//变量名
{
    return this->variable.name;
}

inline const SyntaxTreeNodeFinalValue SyntaxTreeNodeFinal::Value() const//常量值
{
    return this->value;
}

