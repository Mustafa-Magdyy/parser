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
	cout << "Rule2:\n";
	if (obj1 != NULL && obj2 != NULL)
	{
		cout << '\t';
		obj1->print();
		cout << '\t';
		obj2->print();
	}
	else
	{
		std::cout << "NULL\n";
	}
}

rule2::~rule2()
{
	delete obj1;
	delete obj2;
}
