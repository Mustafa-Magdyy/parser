#include <iostream>

#include "rule25.h"

using std::cout;

rule25::rule25(Token *not_or_uplus_or_uminus, node *obj1)
{
	this->NOT_or_UPLUS_or_UMINUS = not_or_uplus_or_uminus;
	this->obj1 = obj1;
}

rule25::rule25(node *obj1)
{
	this->NOT_or_UPLUS_or_UMINUS = 0;
	this->obj1 = obj1;
}

void rule25::print()
{
	if(NOT_or_UPLUS_or_UMINUS != 0)
	{
		cout << NOT_or_UPLUS_or_UMINUS->value << '\n';
		obj1->print();
	}
	else
	{
		obj1->print();
	}
}

rule25::~rule25()
{
	delete obj1;
	if(NOT_or_UPLUS_or_UMINUS)
		delete NOT_or_UPLUS_or_UMINUS;
}

