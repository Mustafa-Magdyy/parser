#include<iostream>

#include "rule13.h"

using std::cout;

rule13::rule13(Token *WHILE, Token *openPara, node *obj1, Token *closePara, node *obj2)
{
	this->WHILE = WHILE;
	this->openPara = openPara;
	this->obj1 = obj1;
	this->closePara = closePara;
	this->obj2 = obj2;
}

void rule13::print()
{
	cout << "Rule13:\n";
	cout << '\t' << WHILE->value << '\n\t' << openPara->value << '\n\t';
	obj1->print();
	cout << closePara->value << '\n\t';
	obj2->print();
}

rule13::~rule13() {
	// TODO Auto-generated destructor stub
}

