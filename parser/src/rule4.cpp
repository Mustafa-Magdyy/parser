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
	cout << "Rule4 :\n";
	if (obj1 != NULL) {
		cout << '\t';
		obj1->print();
	}
	if (IDENT != NULL) {
		std::cout << '\t' << IDENT->value << "\n\t";
	}
	if (openSquareBracket != NULL) {
		std::cout << openSquareBracket->value << "\n\t";
	}
	if (closeSquareBracket != NULL) {
		std::cout << closeSquareBracket->value << "\n\t";
	}
	if (SEMICOLON != NULL) {
		std::cout << SEMICOLON->value << "\n\t";
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

