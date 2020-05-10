#include <iostream>

#include "VarDecl.h"

using std::cout;

VarDecl::VarDecl(Rule *typeSpec, Token *identifier, Token *semicolon)
    : typeSpec(typeSpec), identifier(identifier), semicolon(semicolon)
{
    
}

VarDecl::VarDecl(Rule *typeSpec, Token *identifier, Token *openSquareBracket, Token *intLit, Token *closeSquareBracket, Token 
*semicolon)
    : typeSpec(typeSpec), identifier(identifier), openSquareBracket(openSquareBracket), intLit(intLit), closeSquareBracket(closeSquareBracket), semicolon(semicolon)
{
    
}

void VarDecl::print()
{
    typeSpec->print();
    cout << identifier->value << '\n';
    if(openSquareBracket)
    {
        cout << openSquareBracket->value << '\n';
        cout << intLit->value << '\n';
        cout << closeSquareBracket->value << '\n';
    }
    cout << semicolon->value << '\n';
}

VarDecl::~VarDecl()
{
    delete typeSpec;
    delete identifier;
    if(openSquareBracket)
    {
        delete openSquareBracket;
        delete intLit;
        delete closeSquareBracket;
    }
    delete semicolon;
}
