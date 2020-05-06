#include <iostream>

#include "rule14.h"

using std::cout;

rule14::rule14(Token *openbracket, node *obj1, Token *closebracket)
{
	this->opencurlybracket = openbracket;
	this->obj1 = obj1;
	this->closecurlybracket = closebracket;
}

void rule14::print()
{
	cout << opencurlybracket->value << '\n';
	obj1->print();
	cout << closecurlybracket->value << '\n';
}

rule14::~rule14()
{
	delete opencurlybracket;
	delete obj1;
	delete closecurlybracket;
}
