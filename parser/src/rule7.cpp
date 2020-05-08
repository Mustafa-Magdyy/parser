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
	if(obj1)
	{
		obj1->print();
	}
	else
	{
		cout << dataType->value << '\n';
	}
}

rule7::~rule7()
{
	if(obj1)
		delete obj1;
	else
		delete dataType;
}

