#pragma once
class SyntaxTreeNode
{
protected:
	//�ڵ����ͣ�Ҳָ����ʹ�õĲ���ʽ�ţ�0��ʾҶ�ڵ�
	int typenumber;
public:
	//SyntaxTreeNode() {};
	SyntaxTreeNode(int typenumber) :typenumber(typenumber) {}
	virtual ~SyntaxTreeNode() {};
	int GetType() { return typenumber; }
};

