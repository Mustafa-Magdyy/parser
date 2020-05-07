#include<iostream>

#include "rule6.h"

using std::cout;

rule6::rule6(node *obj1, Token *IDENT, Token *openPara, node *obj2, Token *closePara, node *obj3)
{
	this->obj1 = obj1;
	this->IDENT = IDENT;
	this->openPara = openPara;
	this->obj2 = obj2;
	this->closePara = closePara;
	this->obj3 = obj3;
}

void rule6::print() {
	cout << "Rule6 :\n\t";
	obj1->print();
	std::cout << IDENT->value << '\n';
	cout << openPara->value << '\n';
	obj2->print();
	cout << closePara->value << '\n';
	obj3->print();
}

rule6::~rule6()
{
	delete obj1;
	delete IDENT;
	delete openPara;
	delete obj2;
	delete closePara;
	delete obj3;
}

