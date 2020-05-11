#include <iostream>

#include "FunDecl.h"

using std::cout;

FunDecl::FunDecl(Rule *typeSpec, Token *identifier, Token *openRoundBracket, Rule *params, Token *closeRoundBracket, Rule *compoundStmt)
    :typeSpec(typeSpec), identifier(identifier), openRoundBracket(openRoundBracket), params(params), closeRoundBracket(closeRoundBracket), compoundStmt(compoundStmt)
{
    
}

void FunDecl::print()
{
    typeSpec->print();
    cout << identifier->value << '\n';
    cout << openRoundBracket->value << '\n';
    params->print();
    cout << closeRoundBracket->value << '\n';
    compoundStmt->print();
}

FunDecl::~FunDecl()
{
    delete typeSpec;
    delete identifier;
    delete openRoundBracket;
    delete params;
    delete closeRoundBracket;
    delete compoundStmt;
}
