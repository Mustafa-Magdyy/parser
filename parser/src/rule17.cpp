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
	cout << "Rule17:\n\t" << IF->value << "\n\t" << openBracket->value << "\n\t";
	obj1->print();
	cout << '\t' << closeBracket->value << "\n\t";
	obj2->print();
	if(ELSE != 0)
	{
		cout << '\t' << ELSE->value << "\n\t";
		obj3->print();
	}
}

rule17::~rule17()
{
	delete IF;
	delete openBracket;
	delete obj1;
	delete closeBracket;
	delete obj2;
	if(ELSE)
	{
		delete ELSE;
		delete obj3;
	}
}

