#include <iostream>

#include "rule28.h"

using std::cout;

rule28::rule28(node *obj1, node *obj2)
{
	// TODO Auto-generated constructor stub
	this->obj1 = obj1;
	this->obj2 = obj2;
}

void rule28::print()
{
	obj1->print();
	obj2->print();
}

rule28::~rule28()
{
	delete obj1;
	delete obj2;
}

