#include<iostream>

#include "rule21.h"

using std::cout;

rule21::rule21(node *obj1, node *obj2)
{
	this->obj1 = obj1;
	this->obj2 = obj2;
}

void rule21::print()
{
	obj1->print();
	obj2->print();
}

rule21::~rule21()
{
	delete obj1;
	delete obj2;
}

