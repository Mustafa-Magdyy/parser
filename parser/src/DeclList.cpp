#include "DeclList.h"

DeclList::DeclList(Rule *decl)
    : decl(decl)
{
    
}

DeclList::DeclList(Rule *decl, Rule *declList)
    : decl(decl), declList(declList)
{
    
}

void DeclList::print()
{
    decl->print();
    declList->print();
}

DeclList::~DeclList()
{
    if(decl)
    {
        delete decl;
        delete declList;
    }
}
