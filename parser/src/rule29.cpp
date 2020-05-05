#include <iostream>

#include "rule29.h"

using std::cout;

rule29::rule29()
{
	// TODO Auto-generated constructor stub
	this->obj1 = 0;
}

rule29::rule29(node *obj1)
{
	this->obj1 = obj1;
}

void rule29::print()
{
	cout << "Rule29:\n";
	if(obj1 != 0)
	{
		cout << '\t';
		obj1->print();
	}
	else
	{
		cout << "\teps\n";
	}
}

rule29::~rule29() {
	// TODO Auto-generated destructor stub
}

