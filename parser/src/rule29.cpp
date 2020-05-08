#include <iostream>

#include "rule29.h"

using std::cout;

rule29::rule29()
{
	this->obj1 = 0;
}

rule29::rule29(node *obj1)
{
	this->obj1 = obj1;
}

void rule29::print()
{
	if(obj1 != 0)
	{
		obj1->print();
	}
}

rule29::~rule29()
{
	if(obj1)
		delete obj1;
}

