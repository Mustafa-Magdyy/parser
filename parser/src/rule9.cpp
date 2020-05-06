#include<iostream>

#include "rule9.h"

using std::cout;

rule9::rule9(node *obj1, Token *IDENT)
{
	this->obj1 = obj1;
	this->IDENT = IDENT;
	this->openSquareBracket = 0;
	this->closeSquareBracket = 0;
}

rule9::rule9(node *obj1, Token *IDENT, Token *openSquareBracket, Token *closeSquareBracket)
{
	this->obj1 = obj1;
	this->IDENT = IDENT;
	this->openSquareBracket = openSquareBracket;
	this->closeSquareBracket = closeSquareBracket;
}

void rule9::print()
{
	obj1->print();
	cout << IDENT->value << '\n';

	if (openSquareBracket != NULL) {
		cout << openSquareBracket->value << '\n';
	}
	if (closeSquareBracket != NULL) {
		cout << closeSquareBracket->value << '\n';
	}
}

rule9::~rule9() {
	// TODO Auto-generated destructor stub
}

