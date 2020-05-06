#include<iostream>

#include "rule2.h"

using std::cout;

rule2::rule2(node *obj1, node *obj2)
{
	this->obj1 = obj1;
	this->obj2 = obj2;
}

void rule2::print()
{
	if (obj1 != NULL && obj2 != NULL)
	{
		obj1->print();
		obj2->print();
	}

}

rule2::~rule2(){}
