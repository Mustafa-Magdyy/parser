#include <iostream>

#include "WhileStmt.h"

using std::cout;

WhileStmt::WhileStmt(Token *whil, Token *openRoundBracket, Rule *expr, Token *closeRoundBracket, Rule *compoundStmt)
    : whil(whil), openRoundBracket(openRoundBracket), expr(expr), closeRoundBracket(closeRoundBracket), compoundStmt(compoundStmt)
{

}

void WhileStmt::print()
{
    cout << whil->value << '\n';
    cout << openRoundBracket->value << '\n';
    expr->print();
    cout << closeRoundBracket->value << '\n';
    compoundStmt->print();
}

WhileStmt::~WhileStmt()
{
    delete whil;
    delete openRoundBracket;
    delete expr;
    delete closeRoundBracket;
    delete compoundStmt;
}