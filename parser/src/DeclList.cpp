#include "DeclList.h"

DeclList::DeclList()
{
    decl = new Decl();
    declList = new DeclList();
}

Rule* DeclList::parse()
{
    Token *copy = nxt;
    
    decl = decl->parse();
    if(decl)
    {
        declList = declList->parse();
        return this;
    }
    nxt = copy;
    return 0;
}

void DeclList::print()
{
    if(decl)
        decl->print();
    if(declList)
        declList->print();
}

DeclList::~DeclList()
{
    delete decl;
    delete declList;
}
