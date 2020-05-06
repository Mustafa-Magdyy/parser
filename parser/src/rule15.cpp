#include<iostream>

#include "rule15.h"

using std::cout;

rule15::rule15() : obj1(0), obj2(0){}

rule15::rule15(node *obj1, node *obj2)
{
	this->obj1 = obj1;
	this->obj2 = obj2;
}

void rule15::print()
{
	if(obj1 != 0)
	{
		obj1->print();
		obj2->print();
	}
	else
	{
		cout << "eps\n";
	}
}


rule15::~rule15() {
	// TODO Auto-generated destructor stub
}

