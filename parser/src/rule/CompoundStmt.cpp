#include <iostream>

#include "CompoundStmt.h"

using std::cout;

CompoundStmt::CompoundStmt(Token *openCurlyBracket, Rule *compoundStmtPrime, Token *closeCurlyBracket)
    :openCurlyBracket(openCurlyBracket), compoundStmtPrime(compoundStmtPrime), closeCurlyBracket(closeCurlyBracket)
{

}

void CompoundStmt::print()
{
    cout << openCurlyBracket->value << '\n';
    compoundStmtPrime->print();
    cout << closeCurlyBracket->value << '\n';
}

CompoundStmt::~CompoundStmt()
{
    delete openCurlyBracket;
    delete compoundStmtPrime;
    delete closeCurlyBracket;
}