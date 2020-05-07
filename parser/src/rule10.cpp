#include<iostream>

#include "rule10.h"

using std::cout;

rule10::rule10()
{
	obj1 = obj2 = 0;
}

rule10::rule10(node *obj1, node *obj2)
{
	this->obj1 = obj1;
	this->obj2 = obj2;
}

void rule10::print()
{
	cout << "Rule10:\n";
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

rule10::~rule10() {
	if(obj1)
	{
		delete obj1;
		delete obj2;
	}
}

