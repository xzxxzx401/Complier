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
		return new SyntaxTreeNodeTypeA(type, *tmp, *ttmp);
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
		SyntaxTreeNodeFinal* ttmp = dynamic_cast<SyntaxTreeNodeFinal*>(*tmp);
		assert(ttmp != nullptr);
		return new SyntaxTreeNodeTypeB(type, ttmp);
	}
	case 3:
	{
		assert(args.size() == 4);
		SyntaxTreeNode* args_[4]; int i = 0;
		for (auto k = args.begin(); k != args.end(); k++)
			args_[i++] = *k;
		return new SyntaxTreeNodeTypeC(type, args_[0], args_[1], args_[2], args_[3]);
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
		return new SyntaxTreeNodeTypeD(type, args_[0]);
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
		return new SyntaxTreeNodeTypeE(type);
	}
	case 6:
	{
		assert(args.size() == 3);
		SyntaxTreeNode* args_[3]; int i = 0;
		for (auto k = args.begin(); k != args.end(); k++)
			args_[i++] = *k;
		SyntaxTreeNodeFinal* carg1 = dynamic_cast<SyntaxTreeNodeFinal*>(args_[1]);
		assert(carg1 != nullptr);

		return new SyntaxTreeNodeTypeN(type, args_[0], carg1, args_[2]);
	}
	case 23:
	{
		assert(args.size() == 3);
		SyntaxTreeNode* args_[3]; int i = 0;
		for (auto k = args.begin(); k != args.end(); k++)
			args_[i++] = *k;
		SyntaxTreeNodeFinal* carg1 = dynamic_cast<SyntaxTreeNodeFinal*>(args_[1]);
		SyntaxTreeNodeFinal* carg2 = dynamic_cast<SyntaxTreeNodeFinal*>(args_[2]);
		assert(carg1 != nullptr&&carg2 != nullptr);

		return new SyntaxTreeNodeTypeF(type, args_[0], carg1, carg2);
	}
	case 24:
	{
		assert(args.size() == 2);
		SyntaxTreeNode* args_[2]; int i = 0;
		for (auto k = args.begin(); k != args.end(); k++)
			args_[i++] = *k;

		SyntaxTreeNodeFinal* carg0 = dynamic_cast<SyntaxTreeNodeFinal*>(args_[0]);
		SyntaxTreeNodeFinal* carg1 = dynamic_cast<SyntaxTreeNodeFinal*>(args_[1]);
		assert(carg0 != nullptr&&carg1 != nullptr);

		return new SyntaxTreeNodeTypeG(type, carg0, carg1);
	}
	case 13:
	case 38:
	case 45:
	{
		assert(args.size() == 3);
		SyntaxTreeNode* args_[3]; int i = 0;
		for (auto k = args.begin(); k != args.end(); k++)
			args_[i++] = *k;
		return new SyntaxTreeNodeTypeH(type, args_[0], args_[1], args_[2]);
	}
	case 15:
	{
		assert(args.size() == 2);
		SyntaxTreeNode* args_[2]; int i = 0;
		for (auto k = args.begin(); k != args.end(); k++)
			args_[i++] = *k;

		SyntaxTreeNodeFinal* carg1 = dynamic_cast<SyntaxTreeNodeFinal*>(args_[1]);

		assert(carg1 != nullptr);

		return new SyntaxTreeNodeTypeI(type, args_[0], carg1);
	}
	case 7:
	case 28:
	case 48:
	case 52:
	case 65:
	{
		assert(args.size() == 2);
		SyntaxTreeNode* args_[2]; int i = 0;
		for (auto k = args.begin(); k != args.end(); k++)
			args_[i++] = *k;

		SyntaxTreeNodeFinal* carg0 = dynamic_cast<SyntaxTreeNodeFinal*>(args_[0]);

		assert(carg0 != nullptr);
		return new SyntaxTreeNodeTypeJ(type, carg0, args_[1]);
	}
	case 29:
	{
		assert(args.size() == 3);
		SyntaxTreeNode* args_[3]; int i = 0;
		for (auto k = args.begin(); k != args.end(); k++)
			args_[i++] = *k;

		SyntaxTreeNodeFinal* carg0 = dynamic_cast<SyntaxTreeNodeFinal*>(args_[0]);

		assert(carg0 != nullptr);

		return new SyntaxTreeNodeTypeK(type, carg0, args_[1], args_[2]);
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

		SyntaxTreeNodeOperator* carg1 = dynamic_cast<SyntaxTreeNodeOperator*>(args_[1]);

		assert(carg1 != nullptr);

		return new SyntaxTreeNodeTypeL(type, args_[0], carg1, args_[2]);
	}
	case 46:
	{
		assert(args.size() == 5);
		SyntaxTreeNode* args_[5]; int i = 0;
		for (auto k = args.begin(); k != args.end(); k++)
			args_[i++] = *k;

		SyntaxTreeNodeFinal* carg0 = dynamic_cast<SyntaxTreeNodeFinal*>(args_[0]);
		SyntaxTreeNodeOperator* carg1 = dynamic_cast<SyntaxTreeNodeOperator*>(args_[1]);
		assert(carg1 != nullptr&&carg0 != nullptr);

		return new SyntaxTreeNodeTypeM(type, carg0, carg1, args_[2], args_[3], args_[4]);
	}
	default:
		break;
	}
	return nullptr;
}

///新建叶节点，会分配内存
///type为0（标识符叶节点）
SyntaxTreeNodeFinal* MakeLeaf(std::string name, int linenum)
{
	return new SyntaxTreeNodeFinal(0, name, linenum);
}

///新建叶节点，会分配内存
///type为1（整形叶节点）
SyntaxTreeNodeFinal * MakeLeaf(int val, int linenum)
{
	SyntaxTreeNodeFinalValue tmp; tmp.intValue = val;
	return new SyntaxTreeNodeFinal(1, tmp, linenum);
}

///新建叶节点，会分配内存
///type为2（实数叶节点）
SyntaxTreeNodeFinal * MakeLeaf(double val, int linenum)
{
	SyntaxTreeNodeFinalValue tmp; tmp.realValue = val;
	return new SyntaxTreeNodeFinal(2, tmp, linenum);
}

///新建叶节点，会分配内存
///type为3（布尔叶节点）
SyntaxTreeNodeFinal * MakeLeaf(bool val, int linenum)
{
	SyntaxTreeNodeFinalValue tmp; tmp.boolValue = val;
	return new SyntaxTreeNodeFinal(3, tmp, linenum);
}

///新建叶节点，会分配内存
///type为4（字符叶节点）
SyntaxTreeNodeFinal * MakeLeaf(char val, int linenum)
{
	SyntaxTreeNodeFinalValue tmp; tmp.charValue = val;
	return new SyntaxTreeNodeFinal(4, tmp, linenum);
}

SyntaxTreeNodeOperator * MakeOperator(int opnum, int linenum)
{
	return new SyntaxTreeNodeOperator(opnum, linenum);
}

#include<iostream>
void printTab(int lev) { while (lev--) std::cout << '\t'; }
void trans(const SyntaxTreeNode* rt, int lev)
{
	if (rt == nullptr) return;
	int type = rt->GetType();
	switch (type)
	{
	case 0:
	{
		const SyntaxTreeNodeFinal* tmp = dynamic_cast<const SyntaxTreeNodeFinal*>(rt);
		assert(tmp != nullptr);
		switch (tmp->GetType())
		{
		case 0:
		{
			printTab(lev);
			std::cout << "[" << tmp->GetLineNum() << "]" << "Variable:" << tmp->VariableName() << std::endl;
			break;
		}
		case 1:
		{
			printTab(lev);
			std::cout << "[" << tmp->GetLineNum() << "]" << "Integer:" << tmp->Value().intValue << std::endl;
			break;
		}
		case 2:
		{
			printTab(lev);
			std::cout << "[" << tmp->GetLineNum() << "]" << "Real:" << tmp->Value().realValue << std::endl;
			break;
		}
		case 3:
		{
			printTab(lev);
			std::cout << "[" << tmp->GetLineNum() << "]" << "Boolean:" << tmp->Value().boolValue << std::endl;
			break;
		}
		case 4:
		{
			printTab(lev);
			std::cout << "[" << tmp->GetLineNum() << "]" << "Char:" << tmp->Value().charValue << std::endl;
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
		assert(tmp != nullptr);
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
		assert(tmp != nullptr);
		printTab(lev);
		std::cout << tmp->GetType() << std::endl;
		trans(tmp->First(), lev + 1);
		break;
	}
	case 3:
	{
		const SyntaxTreeNodeTypeC* tmp = dynamic_cast<const SyntaxTreeNodeTypeC*> (rt);
		assert(tmp != nullptr);
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
		assert(tmp != nullptr);
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
		assert(tmp != nullptr);
		printTab(lev);
		std::cout << tmp->GetType() << std::endl;
		break;
	}
	case 23:
	{
		const SyntaxTreeNodeTypeF* tmp = dynamic_cast<const SyntaxTreeNodeTypeF*> (rt);
		assert(tmp != nullptr);
		printTab(lev);
		std::cout << tmp->GetType() << std::endl;
		trans(tmp->First(), lev + 1);
		trans(tmp->Second(), lev + 1);
		trans(tmp->Third(), lev + 1);
		break;
	}
	case 6:
	{
		const SyntaxTreeNodeTypeN* tmp = dynamic_cast<const SyntaxTreeNodeTypeN*> (rt);
		assert(tmp != nullptr);
		printTab(lev);
		std::cout << tmp->GetType() << std::endl;
		trans(tmp->First(), lev + 1);
		trans(tmp->Second(), lev + 1);
		trans(tmp->Third(), lev + 1);
		break;
	}
	case 24:
	{
		const SyntaxTreeNodeTypeG* tmp = dynamic_cast<const SyntaxTreeNodeTypeG*> (rt);
		assert(tmp != nullptr);
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
		assert(tmp != nullptr);
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
		assert(tmp != nullptr);
		printTab(lev);
		std::cout << tmp->GetType() << std::endl;
		trans(tmp->First(), lev + 1);
		trans(tmp->Second(), lev + 1);
		break;
	}
	case 7:
	case 28:
	case 48:
	case 52:
	case 65:
	{
		const SyntaxTreeNodeTypeJ* tmp = dynamic_cast<const SyntaxTreeNodeTypeJ*> (rt);
		assert(tmp != nullptr);
		printTab(lev);
		std::cout << tmp->GetType() << std::endl;
		trans(tmp->First(), lev + 1);
		trans(tmp->Second(), lev + 1);
		break;
	}
	case 29:
	{
		const SyntaxTreeNodeTypeK* tmp = dynamic_cast<const SyntaxTreeNodeTypeK*> (rt);
		assert(tmp != nullptr);
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
		assert(tmp != nullptr);
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
		assert(tmp != nullptr);
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