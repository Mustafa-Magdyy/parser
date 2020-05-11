#include <iostream>

#include "LocalDecl.h"

using std::cout;

LocalDecl::LocalDecl(Rule *typeSpec, Token *identifier, Token *semicolon)
    : typeSpec(typeSpec), identifier(identifier), semicolon(semicolon)
{
    
}

LocalDecl::LocalDecl(Rule *typeSpec, Token *identifier, Token *openSquareBracket, Token *intLit, Token *closeSquareBracket, Token 
*semicolon)
    : typeSpec(typeSpec), identifier(identifier), openSquareBracket(openSquareBracket), intLit(intLit), closeSquareBracket(closeSquareBracket), semicolon(semicolon)
{
    
}

void LocalDecl::print()
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

LocalDecl::~LocalDecl()
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
