#include<iostream>

#include "rule21_.h"

using std::cout;

rule21_::rule21_() {
	// TODO Auto-generated constructor stub
	this->NE_or_EQ = 0;
	this->obj1 = 0;
}

rule21_::rule21_(Token *NE_or_Eq, node *obj1)
{
	this->NE_or_EQ = NE_or_Eq;
	this->obj1 = obj1;
}

void rule21_::print()
{
	if(obj1 != 0)
	{
		cout << NE_or_EQ->value << "\n";
		obj1->print();
	}

}

rule21_::~rule21_()
{
	if(obj1)
	{
		delete NE_or_EQ;
		delete obj1;
	}
}

