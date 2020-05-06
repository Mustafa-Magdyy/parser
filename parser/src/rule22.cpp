#include <iostream>

#include "rule22.h"

using std::cout;

rule22::rule22(node *obj1, node *obj2)
{
	// TODO Auto-generated constructor stub
	this->obj1 = obj1;
	this->obj2 = obj2;
}

void rule22::print()
{
	obj1->print();
	obj2->print();
}


rule22::~rule22()
{
	delete obj1;
	delete obj2;
}

