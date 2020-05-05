#include <iostream>

#include "rule22.h"

using std::cout;

rule22::rule22(node *obj1, node *obj2)
{
	// TODO Auto-generated constructor stub
	this->obj1 = obj1;
	this->obj2 = obj2;
}

void rule22::print()
{
	cout << "Rule22 :\n\t";
	obj1->print();
	cout << "\t";
	obj2->print();
}


rule22::~rule22() {
	// TODO Auto-generated destructor stub
}

