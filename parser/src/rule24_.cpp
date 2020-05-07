#include <iostream>

#include "rule24_.h"

using std::cout;

rule24_::rule24_()
{
	// TODO Auto-generated constructor stub
	this->MUL_or_DIV_or_MOD = 0;
	this->obj1 = 0;
}

rule24_::rule24_(Token *mul_or_div_or_mod, node *obj1)
{
	this->MUL_or_DIV_or_MOD = mul_or_div_or_mod;
	this->obj1  = obj1;
}

void rule24_::print()
{
	cout << "Rule24_:\n";
	if(obj1 != 0)
	{
		cout << '\t' << MUL_or_DIV_or_MOD->value << '\n';
		obj1->print();
	}
	else
	{
		cout << "eps\n";
	}
}

rule24_::~rule24_()
{
	if(obj1)
	{
		delete MUL_or_DIV_or_MOD;
		delete obj1;
	}
}

