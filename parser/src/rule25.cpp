#include <iostream>

#include "rule25.h"

using std::cout;

rule25::rule25(Token *not_or_uplus_or_uminus, node *obj1)
{
	// TODO Auto-generated constructor stub
	this->NOT_or_UPLUS_or_UMINUS = not_or_uplus_or_uminus;
	this->obj1 = obj1;
}

rule25::rule25(node *obj1)
{
	this->NOT_or_UPLUS_or_UMINUS = 0;
	this->obj1 = obj1;
}

void rule25::print()
{
	cout << "Rule25:\n";
	if(NOT_or_UPLUS_or_UMINUS != 0)
	{
		cout << '\t' << NOT_or_UPLUS_or_UMINUS->value << "\n\t";
		obj1->print();
	}
	else
	{
		cout << '\n';
		obj1->print();
	}
}

rule25::~rule25() {
	// TODO Auto-generated destructor stub
}

