#include<iostream>

#include "rule8_.h"

using std::cout;

rule8_::rule8_()
{
	this->COMMA = 0;
	this->obj1 = 0;
}

rule8_::rule8_(Token *comma, node *obj1)
{
	COMMA = comma;
	this->obj1 = obj1;
}

void rule8_::print()
{
	cout << "Rule8_ :\n\t";
	if(obj1 != 0)
	{
		cout << COMMA->value << '\n';
		obj1->print();
	}
	else
	{
		cout << "eps\n";
	}
}

rule8_::~rule8_(){}
