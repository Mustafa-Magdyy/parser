#include <iostream>

#include "IfStmt.h"

using std::cout;

IfStmt::IfStmt(Token *iff, Token *openRoundBracket, Rule *expr, Token *closeRoundBracket, Rule *compoundStmt)
    :iff(iff), openRoundBracket(openRoundBracket), expr(expr), closeRoundBracket(closeRoundBracket), compoundStmt1(compoundStmt), elsee(0), compoundStmt2(0)
{

}

IfStmt::IfStmt(Token *iff, Token *openRoundBracket, Rule *expr, Token *closeRoundBracket, Rule *compoundStmt1, Token *elsee, Rule *compoundStmt2)
    :iff(iff), openRoundBracket(openRoundBracket), expr(expr), closeRoundBracket(closeRoundBracket), compoundStmt1(compoundStmt1), elsee(elsee), compoundStmt2(compoundStmt2)
{

}

void IfStmt::print()
{
    cout << iff->value << '\n';
    cout << openRoundBracket->value << '\n';
    expr->print();
    cout << closeRoundBracket->value << '\n';
    compoundStmt1->print();
    if(elsee)
    {
        cout << elsee->value << '\n';
        compoundStmt2->print();
    }
}

IfStmt::~IfStmt()
{
    delete iff;
    delete openRoundBracket;
    delete expr;
    delete closeRoundBracket;
    delete compoundStmt1;
    if(elsee)
    {
        delete elsee;
        delete compoundStmt2;
    }
}