#include <iostream>

#include "rule23.h"

using std::cout;

rule23::rule23(node *obj1, node *obj2)
{
	this->obj1 = obj1;
	this->obj2 = obj2;
}

void rule23::print()
{
	obj1->print();
	obj2->print();
}

rule23::~rule23()
{
	delete obj1;
	delete obj2;
}

