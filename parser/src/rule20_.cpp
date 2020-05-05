#include <iostream>

#include "rule20_.h"

using std::cout;

rule20_::rule20_() {
	// TODO Auto-generated constructor stub
	AND_or_OR = 0;
	obj1 = 0;
}

rule20_::rule20_(Token *AND_or_OR, node *obj1)
{
	this->AND_or_OR  = AND_or_OR;
	this->obj1 = obj1;
}

void rule20_::print()
{
	cout << "Rule20_:\n";

	if(obj1 != 0)
	{
		cout << '\t' << AND_or_OR->value << "\n\t";
		obj1->print();
	}
	else
	{
		cout << "\teps\n";
	}
}

rule20_::~rule20_() {
	// TODO Auto-generated destructor stub
}

