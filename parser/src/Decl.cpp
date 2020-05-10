#include "Decl.h"

Decl::Decl(Rule *vfDecl)
    : vfDecl(vfDecl)
{

}

void Decl::print()
{
    vfDecl->print();
}

Decl::~Decl()
{
    delete vfDecl;
}
