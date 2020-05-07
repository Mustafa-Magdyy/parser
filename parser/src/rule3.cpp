#include<iostream>

#include "rule3.h"

using std::cout;

rule3::rule3(node *obj1)
{
	this->obj1 = obj1;
}

void rule3::print()
{
	obj1->print();
}

rule3::~rule3()
{
	delete obj1;
}

