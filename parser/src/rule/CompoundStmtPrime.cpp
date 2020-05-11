#include <iostream>

#include "CompoundStmtPrime.h"

using std::cout;

CompoundStmtPrime::CompoundStmtPrime(Rule *localDecls, Rule *stmtList)
    : localDecls(localDecls), stmtList(stmtList)
{

}

CompoundStmtPrime::CompoundStmtPrime(Rule *localDecls, Rule *stmtList, Rule *compoundStmtPrime)
    : localDecls(localDecls), stmtList(stmtList), compoundStmtPrime(compoundStmtPrime)
{

}

void CompoundStmtPrime::print()
{
    localDecls->print();
    stmtList->print();
    if(compoundStmtPrime)
        compoundStmtPrime->print();
}

CompoundStmtPrime::~CompoundStmtPrime()
{
    delete localDecls;
    delete stmtList;
    if(compoundStmtPrime)
        delete compoundStmtPrime;
}