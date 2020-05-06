#include<iostream>

#include "rule7.h"

using std::cout;

rule7::rule7(node *obj1)
{
	this->obj1 = obj1;
	this->dataType = NULL;
}

rule7::rule7(Token *dataType)
{
	this->obj1 = NULL;
	this->dataType = dataType;
}

void rule7::print()
{
	if (obj1 != NULL)
	{
		obj1->print();
	}
	if (dataType != NULL)
	{
		cout << dataType->value << '\n';
	}
}

rule7::~rule7(){}

