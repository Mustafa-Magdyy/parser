#include <iostream>

#include "rule24.h"

using std::cout;

rule24::rule24(node *obj1, node *obj2) {
	// TODO Auto-generated constructor stub
	this->obj1 = obj1;
	this->obj2 = obj2;
}

void rule24::print() {
	cout << "Rule24 : \n\t";
	obj1->print();
	cout << '\t';
	obj2->print();
}

rule24::~rule24()
{

}
