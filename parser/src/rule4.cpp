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
		obj1->print();
	}
	if (IDENT != NULL) {
		std::cout << IDENT->value << "\n";
	}
	if (openSquareBracket != NULL) {
		std::cout << openSquareBracket->value << "\n";
	}
	if (closeSquareBracket != NULL) {
		std::cout << closeSquareBracket->value << "\n";
	}
	if (SEMICOLON != NULL) {
		std::cout << SEMICOLON->value << "\n";
	}
}

rule4::~rule4()
{

}

