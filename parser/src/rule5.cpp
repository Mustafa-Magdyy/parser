#include<iostream>

#include "rule5.h"

using std::cout;

rule5::rule5(Token *dataType)
{
	this->dataType = dataType;
}

void rule5::print()
{
	std::cout << dataType->value << '\n';
}

rule5::~rule5()
{
	delete dataType;
}

