#include "SyntaxTreeNodeType.h"
#include <cassert> 
#include<iostream>

SyntaxTreeNode * MakeNode(int type, std::initializer_list<SyntaxTreeNode*> args)
{
	assert(type >= 1 && type <= 68);
	switch (type)
	{
	case 1:
	case 14:
	case 18:
	case 25:
	case 27:
	case 32:
	case 37:
	case 40:
	case 55:
	{
		assert(args.size() == 2);
		auto tmp = args.begin();
		auto ttmp = tmp; ttmp++;
		return new SyntaxTreeNodeTypeA(1, *tmp, *ttmp);
	}
	case 2:
	case 8:
	case 9:
	case 10:
	case 16:
	case 51:
	case 63:
	{
		assert(args.size() == 1);
		auto tmp = args.begin();
		return new SyntaxTreeNodeTypeB(2, dynamic_cast<SyntaxTreeNodeFinal*>(*tmp));
	}
	case 3:
	{
		assert(args.size() == 4);
		SyntaxTreeNode* args_[4]; int i = 0;
		for (auto k = args.begin(); k != args.end(); k++)
			args_[i++] = *k;
		return new SyntaxTreeNodeTypeC(3, args_[0], args_[1], args_[2], args_[3]);
	}
	case 4:
	case 11:
	case 17:
	case 30:
	case 33:
	case 34:
	case 35:
	case 36:
	case 39:
	case 41:
	case 43:
	case 44:
	case 49:
	case 53:
	case 56:
	case 58:
	case 60:
	case 62:
	case 64:
	case 66:
	case 67:
	case 68:
	{
		assert(args.size() == 1);
		SyntaxTreeNode* args_[1]; int i = 0;
		for (auto k = args.begin(); k != args.end(); k++)
			args_[i++] = *k;
		return new SyntaxTreeNodeTypeD(4, args_[0]);
	}
	case 5:
	case 12:
	case 26:
	case 31:
	case 47:
	case 50:
	case 54:
	case 19:
	case 20:
	case 21:
	case 22:
	{
		assert(args.size() == 0);
		return new SyntaxTreeNodeTypeE(5);
	}
	case 6:
	case 23:
	{
		assert(args.size() == 3);
		SyntaxTreeNode* args_[3]; int i = 0;
		for (auto k = args.begin(); k != args.end(); k++)
			args_[i++] = *k;
		return new SyntaxTreeNodeTypeF(6, args_[0], dynamic_cast<SyntaxTreeNodeFinal*>(args_[1]), dynamic_cast<SyntaxTreeNodeFinal*>(args_[2]));
	}
	case 7:
	case 24:
	{
		assert(args.size() == 2);
		SyntaxTreeNode* args_[2]; int i = 0;
		for (auto k = args.begin(); k != args.end(); k++)
			args_[i++] = *k;
		return new SyntaxTreeNodeTypeG(7, dynamic_cast<SyntaxTreeNodeFinal*>(args_[0]), dynamic_cast<SyntaxTreeNodeFinal*> (args_[1]));
	}
	case 13:
	case 38:
	case 45:
	{
		assert(args.size() == 3);
		SyntaxTreeNode* args_[3]; int i = 0;
		for (auto k = args.begin(); k != args.end(); k++)
			args_[i++] = *k;
		return new SyntaxTreeNodeTypeH(8, args_[0], args_[1], args_[2]);
	}
	case 15:
	{
		assert(args.size() == 2);
		SyntaxTreeNode* args_[2]; int i = 0;
		for (auto k = args.begin(); k != args.end(); k++)
			args_[i++] = *k;
		return new SyntaxTreeNodeTypeI(9, args_[0], dynamic_cast<SyntaxTreeNodeFinal*> (args_[1]));
	}
	case 28:
	case 48:
	case 52:
	case 65:
	{
		assert(args.size() == 2);
		SyntaxTreeNode* args_[2]; int i = 0;
		for (auto k = args.begin(); k != args.end(); k++)
			args_[i++] = *k;
		return new SyntaxTreeNodeTypeJ(10, dynamic_cast<SyntaxTreeNodeFinal*>(args_[0]), args_[1]);
	}
	case 29:
	{
		assert(args.size() == 3);
		SyntaxTreeNode* args_[3]; int i = 0;
		for (auto k = args.begin(); k != args.end(); k++)
			args_[i++] = *k;
		return new SyntaxTreeNodeTypeK(11, dynamic_cast<SyntaxTreeNodeFinal*>(args_[0]), args_[1], args_[2]);
	}
	case 42:
	case 57:
	case 59:
	case 61:
	{
		assert(args.size() == 3);
		SyntaxTreeNode* args_[3]; int i = 0;
		for (auto k = args.begin(); k != args.end(); k++)
			args_[i++] = *k;
		return new SyntaxTreeNodeTypeL(12, args_[0], dynamic_cast<SyntaxTreeNodeOperator*> (args_[1]), args_[2]);
	}
	case 46:
	{
		assert(args.size() == 5);
		SyntaxTreeNode* args_[5]; int i = 0;
		for (auto k = args.begin(); k != args.end(); k++)
			args_[i++] = *k;
		return new SyntaxTreeNodeTypeM(13, dynamic_cast<SyntaxTreeNodeFinal*>(args_[0]), dynamic_cast<SyntaxTreeNodeOperator*> (args_[1]), args_[2], args_[3], args_[4]);
	}
	default:
		break;
	}
	return nullptr;
}

///新建叶节点，会分配内存
///type为0（标识符叶节点）
SyntaxTreeNodeFinal* MakeLeaf(std::string name)
{
	return new SyntaxTreeNodeFinal(0, name);
}

///新建叶节点，会分配内存
///type为1（整形叶节点）
SyntaxTreeNodeFinal * MakeLeaf(int val)
{
	SyntaxTreeNodeFinalValue tmp; tmp.intValue = val;
	return new SyntaxTreeNodeFinal(1, tmp);
}

///新建叶节点，会分配内存
///type为2（实数叶节点）
SyntaxTreeNodeFinal * MakeLeaf(double val)
{
	SyntaxTreeNodeFinalValue tmp; tmp.realValue = val;
	return new SyntaxTreeNodeFinal(2, tmp);
}

///新建叶节点，会分配内存
///type为3（布尔叶节点）
SyntaxTreeNodeFinal * MakeLeaf(bool val)
{
	SyntaxTreeNodeFinalValue tmp; tmp.boolValue = val;
	return new SyntaxTreeNodeFinal(3, tmp);
}

///新建叶节点，会分配内存
///type为4（字符叶节点）
SyntaxTreeNodeFinal * MakeLeaf(char val)
{
	SyntaxTreeNodeFinalValue tmp; tmp.charValue = val;
	return new SyntaxTreeNodeFinal(4, tmp);
}

SyntaxTreeNodeOperator * MakeOperator(int opnum)
{
	return new SyntaxTreeNodeOperator(opnum);
}

#include<iostream>
void printTab(int lev) { while (lev--) std::cout << '\t'; }
void trans(const SyntaxTreeNode* rt, int lev)
{
	int type = rt->GetType();
	switch (type)
	{
	case 0:
	{
		const SyntaxTreeNodeFinal* tmp = dynamic_cast<const SyntaxTreeNodeFinal*>(rt);
		switch (tmp->GetType())
		{
		case 0:
		{
			printTab(lev);
			std::cout << "Variable:" << tmp->VariableName() << std::endl;
			break;
		}
		case 1:
		{
			printTab(lev);
			std::cout << "Integer:" << tmp->Value().intValue << std::endl;
			break;
		}
		case 2:
		{
			printTab(lev);
			std::cout << "Real:" << tmp->Value().realValue << std::endl;
			break;
		}
		case 3:
		{
			printTab(lev);
			std::cout << "Boolean:" << tmp->Value().boolValue << std::endl;
			break;
		}
		case 4:
		{
			printTab(lev);
			std::cout << "Char:" << tmp->Value().charValue << std::endl;
			break;
		}
		}
		break;
	}	
	case 1:
	case 14:
	case 18:
	case 25:
	case 27:
	case 32:
	case 37:
	case 40:
	case 55:
	{
		const SyntaxTreeNodeTypeA* tmp = dynamic_cast<const SyntaxTreeNodeTypeA*> (rt);
		printTab(lev);
		std::cout << tmp->GetType() << std::endl;
		trans(tmp->First(), lev + 1);
		trans(tmp->Second(), lev + 1);
		break;
	}
	case 2:
	case 8:
	case 9:
	case 10:
	case 16:
	case 51:
	case 63:
	{
		const SyntaxTreeNodeTypeB* tmp = dynamic_cast<const SyntaxTreeNodeTypeB*> (rt);
		printTab(lev);
		std::cout << tmp->GetType() << std::endl;
		trans(tmp->First(), lev + 1);
		break;
	}
	case 3:
	{
		const SyntaxTreeNodeTypeC* tmp = dynamic_cast<const SyntaxTreeNodeTypeC*> (rt);
		printTab(lev);
		std::cout << tmp->GetType() << std::endl;
		trans(tmp->First(), lev + 1);
		trans(tmp->Second(), lev + 1);
		trans(tmp->Third(), lev + 1);
		trans(tmp->Forth(), lev + 1);
		break;
	}
	case 4:
	case 11:
	case 17:
	case 30:
	case 33:
	case 34:
	case 35:
	case 36:
	case 39:
	case 41:
	case 43:
	case 44:
	case 49:
	case 53:
	case 56:
	case 58:
	case 60:
	case 62:
	case 64:
	case 66:
	case 67:
	case 68:
	{
		const SyntaxTreeNodeTypeD* tmp = dynamic_cast<const SyntaxTreeNodeTypeD*> (rt);
		printTab(lev);
		std::cout << tmp->GetType() << std::endl;
		trans(tmp->First(), lev + 1);
		break;
	}
	case 5:
	case 12:
	case 26:
	case 31:
	case 47:
	case 50:
	case 54:
	case 19:
	case 20:
	case 21:
	case 22:
	{
		const SyntaxTreeNodeTypeE* tmp = dynamic_cast<const SyntaxTreeNodeTypeE*> (rt);
		printTab(lev);
		std::cout << tmp->GetType() << std::endl;
		break;
	}
	case 6:
	case 23:
	{
		const SyntaxTreeNodeTypeF* tmp = dynamic_cast<const SyntaxTreeNodeTypeF*> (rt);
		printTab(lev);
		std::cout << tmp->GetType() << std::endl;
		trans(tmp->First(), lev + 1);
		trans(tmp->Second(), lev + 1);
		trans(tmp->Third(), lev + 1);
		break;
	}
	case 7:
	case 24:
	{
		const SyntaxTreeNodeTypeG* tmp = dynamic_cast<const SyntaxTreeNodeTypeG*> (rt);
		printTab(lev);
		std::cout << tmp->GetType() << std::endl;
		trans(tmp->First(), lev + 1);
		trans(tmp->Second(), lev + 1);
		break;
	}
	case 13:
	case 38:
	case 45:
	{
		const SyntaxTreeNodeTypeH* tmp = dynamic_cast<const SyntaxTreeNodeTypeH*> (rt);
		printTab(lev);
		std::cout << tmp->GetType() << std::endl;
		trans(tmp->First(), lev + 1);
		trans(tmp->Second(), lev + 1);
		trans(tmp->Third(), lev + 1);
		break;
	}
	case 15:
	{
		const SyntaxTreeNodeTypeI* tmp = dynamic_cast<const SyntaxTreeNodeTypeI*> (rt);
		printTab(lev);
		std::cout << tmp->GetType() << std::endl;
		trans(tmp->First(), lev + 1);
		trans(tmp->Second(), lev + 1);
		break;
	}
	case 28:
	case 48:
	case 52:
	case 65:
	{
		const SyntaxTreeNodeTypeJ* tmp = dynamic_cast<const SyntaxTreeNodeTypeJ*> (rt);
		printTab(lev);
		std::cout << tmp->GetType() << std::endl;
		trans(tmp->First(), lev + 1);
		trans(tmp->Second(), lev + 1);
		break;
	}
	case 29:
	{
		const SyntaxTreeNodeTypeK* tmp = dynamic_cast<const SyntaxTreeNodeTypeK*> (rt);
		printTab(lev);
		std::cout << tmp->GetType() << std::endl;
		trans(tmp->First(), lev + 1);
		trans(tmp->Second(), lev + 1);
		trans(tmp->Third(), lev + 1);
		break;
	}
	case 42:
	case 57:
	case 59:
	case 61:
	{
		const SyntaxTreeNodeTypeL* tmp = dynamic_cast<const SyntaxTreeNodeTypeL*> (rt);
		printTab(lev);
		std::cout << tmp->GetType() << std::endl;
		trans(tmp->First(), lev + 1);
		trans(tmp->Second(), lev + 1);
		trans(tmp->Third(), lev + 1);
		break;
	}
	case 46:
	{
		const SyntaxTreeNodeTypeM* tmp = dynamic_cast<const SyntaxTreeNodeTypeM*> (rt);
		printTab(lev);
		std::cout << tmp->GetType() << std::endl;
		trans(tmp->First(), lev + 1);
		trans(tmp->Second(), lev + 1);
		trans(tmp->Third(), lev + 1);
		trans(tmp->Forth(), lev + 1);
		trans(tmp->Fifth(), lev + 1);
		break;
	}
	default:
		break;
	}
}