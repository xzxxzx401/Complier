#pragma once

///�ڵ����
///���﷨���ڵ�ĳ���
///�ڵ���ָ����ʹ�õĲ���ʽ���
class SyntaxTreeNode
{
protected:
	//�ڵ����ͣ�Ҳָ����ʹ�õĲ���ʽ�ţ�0��ʾҶ�ڵ�
	int typenumber;
public:
	SyntaxTreeNode(const int typenumber) :typenumber(typenumber) {}
	virtual ~SyntaxTreeNode() {};
	const int GetType()const { return typenumber; }
};

