#include "Params.h"

Params::Params()
    : paramList(0)
{
    
}

Params::Params(Rule *paramList)
    :paramList(paramList)
{
    
}

void Params::print()
{
    if(paramList)
        paramList->print();
}

Params::~Params()
{
    if(paramList)
        delete paramList;
}
