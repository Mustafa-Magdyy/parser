#include<iostream>

#include "rule12.h"

using std::cout;

rule12::rule12(node *obj1, Token *semicolon)
{
	this->obj1 = obj1;
	this->semicolon = semicolon;
}

rule12::rule12(Token *semicolon)
{
	this->obj1 = NULL;
	this->semicolon = semicolon;
}

void rule12::print()
{
	cout << "Rule12:\n";
	if(obj1 != NULL)
	{
		cout << '\t';
		obj1->print();
	}
	cout << '\t' << semicolon->value << '\n';
}

rule12::~rule12() {
	// TODO Auto-generated destructor stub
}

