#include<iostream>

#include "rule16.h"

using std::cout;

rule16::rule16(node *obj1, Token *IDENT, Token *semiColon)
{
	this->obj1 = obj1;
	this->IDENT = IDENT;
	this->semiColon = semiColon;
	this->openSquareBracket = 0;
	this->closeSquareBracket = 0;
}

rule16::rule16(node *obj1, Token *IDENT, Token *openSquareBracket, Token *closeSquareBracket, Token *semiColon)
{
	this->obj1 = obj1;
	this->IDENT = IDENT;
	this->openSquareBracket = openSquareBracket;
	this->closeSquareBracket = closeSquareBracket;
	this->semiColon = semiColon;
}

void rule16::print()
{
	obj1->print();
	cout << IDENT->value << '\n';
	if(openSquareBracket)
	{
		cout << openSquareBracket->value << '\n';
		cout << closeSquareBracket->value << '\n';
	}
	cout << semiColon->value << '\n';
}

rule16::~rule16()
{
	delete obj1;
	delete IDENT;
	delete semiColon;
	if(openSquareBracket)
	{
		delete openSquareBracket;
		delete closeSquareBracket;
	}
}

