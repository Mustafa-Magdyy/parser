#include<iostream>

#include "rule1.h"

using std::cout;

rule1::rule1(node *obj1)
{
	this->obj1 = obj1;
}

void rule1::print()
{
	cout << "Rule1:\n";
	if (obj1 != NULL)
	{
		std::cout << '\t';
		obj1->print();
	}
}

rule1::~rule1()
{

}

