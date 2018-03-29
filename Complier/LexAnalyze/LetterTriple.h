#ifndef _LETTERTRIPLE_
#define _LETTERTRIPLE_

#include <string>

struct LetterTriple
{
	std::string value;
	int attribute;
	int row;

	LetterTriple(std::string _v, int _at, int _row)
		:value(_v), attribute(_at), row(_row)
	{}

	std::string toString()
	{
		return "<" + value + "," + std::to_string(attribute)
			+ "," + std::to_string(row) + ">";
	}
};


#endif
