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
	cout << "Rule2_:\n";
	if(obj1 != 0)
	{
		cout << '\t';
		obj1->print();
		cout << '\t';
		obj2->print();
	}
	else
	{
		cout << "\teps\n";
	}
}

rule2_::~rule2_(){}


