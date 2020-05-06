#include<iostream>

#include "rule14_.h"

using std::cout;

rule14_::rule14_(node *obj1, node *obj2, node *obj3)
{
	this->obj1 = obj1;
	this->obj2 = obj2;
	this->obj3 = obj3;
}

rule14_::rule14_(node *obj1, node *obj2)
{
	this->obj1 = obj1;
	this->obj2 = obj2;
	this->obj3 = 0;
}

void rule14_::print()
{
	obj1->print();
	obj2->print();
	if(obj3)
	{
		obj3->print();
	}
}

rule14_::~rule14_()
{
	delete obj1;
	delete obj2;
	if(obj3)
		delete obj3;
}

