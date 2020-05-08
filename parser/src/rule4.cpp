#include<iostream>

#include "rule4.h"

using std::cout;

rule4::rule4(node *obj1, Token *IDENT, Token *SEMICOLON)
{
	this->obj1 = obj1;
	this->IDENT = IDENT;
	this->SEMICOLON = SEMICOLON;
	this->openSquareBracket = 0;
	this->closeSquareBracket = 0;
}

rule4::rule4(node *obj1, Token *IDENT, Token *openSquareBracket, Token *closeSquareBracket, Token *SEMICOLON)
{
	this->obj1 = obj1;
	this->IDENT = IDENT;
	this->openSquareBracket = openSquareBracket;
	this->closeSquareBracket = closeSquareBracket;
	this->SEMICOLON = SEMICOLON;
}

void rule4::print()
{
	if (obj1 != NULL) {
		obj1->print();
		cout << IDENT->value << '\n';
		if(openSquareBracket)
			cout << openSquareBracket->value << '\n';
		cout << SEMICOLON->value << '\n';
		if(closeSquareBracket)
			cout << closeSquareBracket->value << '\n';
	}
}

rule4::~rule4()
{
	delete obj1;
	delete IDENT;
	delete SEMICOLON;
	if(openSquareBracket)
	{
		delete openSquareBracket;
		delete closeSquareBracket;
	}
}

