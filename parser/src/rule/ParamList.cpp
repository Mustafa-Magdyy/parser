#include <iostream>

#include "ParamList.h"

using std::cout;

ParamList::ParamList(Rule *param, Rule *paramListPrime)
    : param(param), paramListPrime(paramListPrime)
{

}

void ParamList::print()
{
    param->print();
    paramListPrime->print();
}

ParamList::~ParamList()
{
    delete param;
    delete paramListPrime;
}