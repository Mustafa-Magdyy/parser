#include<iostream>

#include "rule2_.h"

using std::cout;

rule2_::rule2_(node *obj1, node *obj2)
{
	this->obj1 = obj1;
	this->obj2 = obj2;
}

rule2_::rule2_()
{
	this->obj1 = 0;
	this->obj2 = 0;
}

void rule2_::print()
{
	if(obj1 != 0)
	{
		obj1->print();
		obj2->print();
	}

}

rule2_::~rule2_()
{
	if(obj1)
	{
		delete obj1;
		delete obj2;
	}
}


