#include <iostream>

#include "rule26.h"

using std::cout;

rule26::rule26(Token *openBracket, node *obj1, Token *closeBracket)
{
	// TODO Auto-generated constructor stub
	this->openBracket = openBracket;
	this->obj1 = obj1;
	this->closeBracket = closeBracket;
}

rule26::rule26(node *obj1)
{
	this->obj1 = obj1;
	openBracket = closeBracket = 0;
}

void rule26::print()
{
	cout << "Rule26:\n";
	if(openBracket != 0)
	{
		cout << '\t' << openBracket->value << "\n\t";
		obj1->print();
		cout << '\t' << closeBracket->value << '\n';
	}
	else
	{
		cout << '\n';
		obj1->print();
	}
}

rule26::~rule26() {
	// TODO Auto-generated destructor stub
}

