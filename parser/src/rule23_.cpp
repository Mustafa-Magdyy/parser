#include <iostream>

#include "rule23_.h"

using std::cout;

rule23_::rule23_()
{
	// TODO Auto-generated constructor stub
	this->PLUS_or_MINUS = 0;
	this->obj1 = 0;
}

rule23_::rule23_(Token *plus_or_minus, node *obj1)
{
	this->PLUS_or_MINUS = plus_or_minus;
	this->obj1 = obj1;
}

void rule23_::print()
{
	cout << "Rule23_:\n";
	if(obj1 != 0)
	{
		cout << '\t' << PLUS_or_MINUS->value << "\n\t";
		obj1->print();
	}
	else
	{
		cout << "eps\n";
	}
}

rule23_::~rule23_()
{
	if(obj1)
	{
		delete PLUS_or_MINUS;
		delete obj1;
	}
}

