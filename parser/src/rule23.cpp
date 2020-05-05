#include <iostream>

#include "rule23.h"

using std::cout;

rule23::rule23(node *obj1, node *obj2)
{
	// TODO Auto-generated constructor stub
	this->obj1 = obj1;
	this->obj2 = obj2;
}

void rule23::print()
{
	cout << "Rule23:\n\t";
	obj1->print();
	cout << '\t';
	obj2->print();
}

rule23::~rule23() {
	// TODO Auto-generated destructor stub
}

