#include <iostream>

#include "BreakStmt.h"

using std::cout;

BreakStmt::BreakStmt(Token *breakk, Token *semicolon)
    :breakk(breakk), semicolon(semicolon)
{

}

void BreakStmt::print()
{
    cout << breakk->value << '\n';
    cout << semicolon->value << '\n';
}

BreakStmt::~BreakStmt()
{
    delete breakk;
    delete semicolon;
}