#include <iostream>

#include "rule28_.h"

using std::cout;

rule28_::rule28_()
{
	// TODO Auto-generated constructor stub
	this->COMMA = 0;
	this->obj1 = 0;
}

rule28_::rule28_(Token *comma, node *obj1)
{
	this->COMMA = comma;
	this->obj1 = obj1;
}

void rule28_::print()
{
	if(obj1 != 0)
	{
		cout << COMMA->value << "\n";
		obj1->print();
	}

}

rule28_::~rule28_() {
	// TODO Auto-generated destructor stub
}

