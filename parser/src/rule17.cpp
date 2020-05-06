#include<iostream>

#include "rule17.h"

using std::cout;

rule17::rule17(Token *IF, Token *openBracket, node *obj1, Token *closeBracket, node *obj2)
{
	this->IF = IF;
	this->openBracket = openBracket;
	this->obj1 = obj1;
	this->closeBracket = closeBracket;
	this->obj2 = obj2;
	this->ELSE = 0;
	this->obj3 = 0;
}

rule17::rule17(Token *IF, Token *openBracket, node *obj1, Token *closeBracket, node *obj2, Token *ELSE, node *obj3)
{
	this->IF = IF;
	this->openBracket = openBracket;
	this->obj1 = obj1;
	this->closeBracket = closeBracket;
	this->obj2 = obj2;
	this->ELSE = ELSE;
	this->obj3 = obj3;
}

void rule17::print()
{
	cout << IF->value << "\n" << openBracket->value << "\n";
	obj1->print();
	cout << closeBracket->value << "\n";
	obj2->print();
	if(ELSE != 0)
	{
		cout << ELSE->value << "\n";
		obj3->print();
	}
}

rule17::~rule17() {
	// TODO Auto-generated destructor stub
}

