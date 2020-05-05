#include<iostream>

#include "rule18.h"

using std::cout;

rule18::rule18(Token *RETURN, Token *semiColon)
{
	this->RETURN = RETURN;
	this->semiColon = semiColon;
	this->obj1 = 0;
}

rule18::rule18(Token *RETURN, node *obj1, Token *semiColon)
{
	this->RETURN = RETURN;
	this->obj1 = obj1;
	this->semiColon = semiColon;
}

void rule18::print()
{
	cout << "Rule18:\n\t" << RETURN->value << '\n';
	if(obj1 != 0)
	{
		cout << '\t';
		obj1->print();
	}
	cout << '\t' << semiColon->value << '\n';
}

rule18::~rule18() {
	// TODO Auto-generated destructor stub
}

