#include <iostream>

#include "rule27.h"

using std::cout;

rule27::rule27(Token *ident, Token *openBracket, node *obj1, Token *closeBracket)
{
	this->IDENT_or_LIT = ident;
	this->openBracket = openBracket;
	this->obj1 = obj1;
	this->closeBracket = closeBracket;
}

rule27::rule27(Token *ident_or_lit)
{
	this->IDENT_or_LIT = ident_or_lit;
	openBracket = closeBracket = 0;
	obj1 = 0;
}

void rule27::print()
{
	cout << "Rule27:\n";
	if(obj1 != 0)
	{
		cout << '\t' << IDENT_or_LIT->value << ' ' << openBracket->value << "\n\t";
		obj1->print();
		cout << '\t' << closeBracket->value << '\n';
	}
	else
	{
		cout << '\t' << IDENT_or_LIT->value << '\n';
	}
}

rule27::~rule27() {
	// TODO Auto-generated destructor stub
}

