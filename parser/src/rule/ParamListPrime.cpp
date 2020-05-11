#include <iostream>

#include "ParamListPrime.h"

using std::cout;

ParamListPrime::ParamListPrime()
    : comma(0), paramList(0)
{
    
}

ParamListPrime::ParamListPrime(Token *comma, Rule *paramList)
    : comma(comma), paramList(paramList)
{

}

void ParamListPrime::print()
{
    if(comma)
    {
        cout << comma->value << '\n';
        paramList->print();
    }
}

ParamListPrime::~ParamListPrime()
{
    if(comma)
    {
        delete comma;
        delete paramList;
    }
}