#include <iostream>

#include "ExprStmt.h"

using std::cout;

ExprStmt::ExprStmt(Token *semicolon)
    : semicolon(semicolon)
{

}

ExprStmt::ExprStmt(Rule *expr, Token *semicolon)
    : expr(expr), semicolon(semicolon)
{

}

void ExprStmt::print()
{
    if(expr)
        expr->print();
    cout << semicolon->value << '\n';
}

ExprStmt::~ExprStmt()
{
    if(expr)
        delete expr;
    delete semicolon;
}