#include<iostream>

#include "rule21.h"

using std::cout;

rule21::rule21(node *obj1, node *obj2)
{
	// TODO Auto-generated constructor stub
	this->obj1 = obj1;
	this->obj2 = obj2;
}

void rule21::print()
{
	cout << "Rule21 :\n\t";
	obj1->print();
	cout << '\t';
	obj2->print();
}

rule21::~rule21() {
	// TODO Auto-generated destructor stub
}

