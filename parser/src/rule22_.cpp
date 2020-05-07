#include <iostream>

#include "rule22_.h"

using std::cout;

rule22_::rule22_()
{
	// TODO Auto-generated constructor stub
	this->LE_or_LT_or_GE_or_GT = 0;
	this->obj1 = 0;
}

rule22_::rule22_(Token *LE_or_LT_or_GE_or_GT, node *obj1)
{
	this->LE_or_LT_or_GE_or_GT = LE_or_LT_or_GE_or_GT;
	this->obj1 = obj1;
}

void rule22_::print()
{
	if(obj1 != 0)
	{
		cout << LE_or_LT_or_GE_or_GT->value << "\n";
		obj1->print();
	}

}

rule22_::~rule22_()
{
	if(obj1)
	{
		delete LE_or_LT_or_GE_or_GT;
		delete obj1;
	}
}

