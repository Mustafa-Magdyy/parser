#include <iostream>

#include "LocalDecls.h"

using std::cout;

LocalDecls::LocalDecls()
    :localDecl(0), localDecls(0)
{

}

LocalDecls::LocalDecls(Rule *localDecl, Rule *localDecls)
    :localDecl(localDecl), localDecls(localDecls)
{

}

void LocalDecls::print()
{
    if(localDecl)
    {
        localDecl->print();
        localDecls->print();
    }
}

LocalDecls::~LocalDecls()
{
    if(localDecl)
    {
        delete localDecl;
        delete localDecls;
    }
}
