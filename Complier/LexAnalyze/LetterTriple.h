#ifndef _LETTERTRIPLE_
#define _LETTERTRIPLE_

#include <string>

typedef struct _lt
{
	std::string value;
	int attribute;
	int row;

	_lt(string _v, int _at, int _row) :value(_v), attribute(_at), row(_row) {}

	string toString()
	{
		return "<" + value + "," + std::to_string(attribute) 
			+ "," + std::to_string(row) + ">";
	}
}LetterTriple;


#endif
