#include<iostream>

#include "rule19.h"

using std::cout;

rule19::rule19(Token *IDENT, Token *ASSIGN, node *obj1)
{
	this->IDENT = IDENT;
	this->ASSIGN = ASSIGN;
	this->obj1 = obj1;
	this->obj2 = this->obj3 = 0;
	this->openSquareBracket = this->closeSquareBracket = 0;
}

rule19::rule19(Token *IDENT, Token *openSquareBracke, node *obj1, Token *closeSquareBracket, Token *ASSIGN, node *obj2)
{
	this->IDENT = IDENT;
	this->openSquareBracket = openSquareBracket;
	this->ASSIGN = ASSIGN;
	this->obj1 = obj1;
	this->closeSquareBracket = closeSquareBracket;
	this->obj2 = obj2;
	this->obj3 = 0;
}

rule19::rule19(node *obj3)
{
	IDENT = ASSIGN = 0;
	openSquareBracket = closeSquareBracket = 0;
	obj1 = obj2 = 0;
	this->obj3 = obj3;
}

void rule19::print()
{
	cout << "Rule19:\n";
	if(IDENT != 0)
	{
		cout << '\t' << IDENT->value << '\n';
		if(openSquareBracket != 0)
		{
			cout << '\t' << openSquareBracket->value << '\n';
			obj1->print();
			cout << '\t' << closeSquareBracket->value << "\n\t" << ASSIGN->value << "\n\t";
			obj2->print();
		}
		else
		{
			cout << '\t' << ASSIGN->value << "\n\t";
			obj1->print();
		}
	}
	else
	{
		cout << "\n\t";
		obj3->print();
	}
}

rule19::~rule19()
{
	if(IDENT)
	{
		delete IDENT;
		delete ASSIGN;
		delete obj1;
		if(obj2)
		{
			delete openSquareBracket;
			delete closeSquareBracket;
			delete obj2;
		}
	}
	else
	{
		delete obj3;
	}
}

