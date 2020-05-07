#include <iostream>
#include "rule20.h"

using std::cout;

rule20::rule20(node *obj1, node *obj2)
{
	this->obj1 = obj1;
	this->obj2 = obj2;

}

void rule20::print()
{
	obj1->print();
	obj2->print();
}

rule20::~rule20()
{
	delete obj1;
	delete obj2;
}

