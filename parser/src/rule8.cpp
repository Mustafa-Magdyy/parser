#include<iostream>

#include "rule8.h"

using std::cout;

rule8::rule8(node *obj1, node *obj2) {
	this->obj1 = obj1;
	this->obj2 = obj2;
}

void rule8::print() {
	cout << "Rule8 :\n\t";
	obj1->print();
	obj2->print();
}

rule8::~rule8()
{
	delete obj1;
	delete obj2;
}
