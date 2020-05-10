#include <iostream>

#include "TypeSpec.h"

using std::cout;

TypeSpec::TypeSpec(Token *dataType)
    : dataType(dataType)
{
    
}

void TypeSpec::print()
{
    cout << dataType->value << '\n';
}

TypeSpec::~TypeSpec()
{
    delete dataType;
}
