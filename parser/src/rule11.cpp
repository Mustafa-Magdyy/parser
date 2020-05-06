#include<iostream>

#include "rule11.h"

using std::cout;

rule11::rule11(node *obj1)
{
	this->obj1 = obj1;
	this->b_stmt = 0;
}

rule11::rule11(Token *b_stmt)
{
    this->b_stmt = b_stmt;
    this->obj1 = 0;
}

void rule11::print()
{
	if (obj1 != NULL) {
        obj1->print();
	} else {
	    cout << b_stmt->value << '\n';
	}
}

rule11::~rule11()
{
	if(obj1)
		delete obj1;
	if(b_stmt)
		delete b_stmt;
}

