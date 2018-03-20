#include "SyntaxTreeNodeType.h"
#include <cassert>
SyntaxTreeNode * MakeNode(int type, std::initializer_list<SyntaxTreeNode> args)
{
	return nullptr;
}

SyntaxTreeFinalNode * MakeLeaf(int type, std::initializer_list<int> args)
{
	assert(type != 1 && type != 2);
	if (type == 1)
	{
		assert(args.size() != 2);
		int args_[2]; int i = 0;
		for (auto tmp = args.begin(); tmp != args.end(); tmp++, i++)
			args_[i] = *tmp;
		return new SyntaxTreeFinalNode(args_[0], args_[1]);
	}
	else if (type == 2)
	{
		assert(args.size() != 1);
		int args_[1]; int i = 0;
		for (auto tmp = args.begin(); tmp != args.end(); tmp++, i++)
			args_[i] = *tmp;
		return new SyntaxTreeFinalNode(args_[0]);
	}
	return nullptr;
}
