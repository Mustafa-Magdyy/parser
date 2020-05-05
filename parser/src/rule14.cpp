#include <iostream>

#include "rule14.h"

using std::cout;

rule14::rule14(Token *openbracket, node *obj1, Token *closebracket)
{
	this->opencurlybracket = openbracket;
	this->obj1 = obj1;
	this->obj2 = 0;
	this->closecurlybracket = closebracket;
}

void rule14::print()
{
	cout << "Rule14:\n\t" << opencurlybracket->value << '\n\t';
	obj1->print();
	if(obj2)
	{
		cout << '\t';
		obj2->print();
	}
	cout << '\t' << closecurlybracket->value << '\n';
}

rule14::~rule14(){}
