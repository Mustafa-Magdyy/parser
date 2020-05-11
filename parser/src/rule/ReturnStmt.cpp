#include <iostream>

#include "ReturnStmt.h"

using std::cout;

ReturnStmt::ReturnStmt(Token *returnn, Token *semicolon)
    :returnn(returnn), semicolon(semicolon)
{

}

ReturnStmt::ReturnStmt(Token *returnn, Rule *expr, Token *semicolon)
    :returnn(returnn), expr(expr), semicolon(semicolon)
{

}

void ReturnStmt::print()
{
    cout << returnn->value << '\n';
    if(expr)
        expr->print();
    cout << semicolon->value << '\n';
}

ReturnStmt::~ReturnStmt()
{
    delete returnn;
    if(expr) 
        delete expr;
    delete semicolon;
}