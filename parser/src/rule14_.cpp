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
	cout << "Rule14_:\n\t";
	obj1->print();
	cout << '\t';
	obj2->print();
	if(obj3)
	{
		cout << '\t';
		obj3->print();
	}
}

rule14_::~rule14_()
{
	// TODO Auto-generated destructor stub
}

