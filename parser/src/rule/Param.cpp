#include <iostream>

#include "Param.h"

using std::cout;

Param::Param(Rule *typeSpec, Token *identifier)
    : typeSpec(typeSpec), identifier(identifier)
{

}

Param::Param(Rule *typeSpec, Token *identifier, Token *openSquareBracket, Token *closeSquareBracket)
    : typeSpec(typeSpec), identifier(identifier), openSquareBracket(openSquareBracket), closeSquareBracket(closeSquareBracket)
{

}

void Param::print()
{
    typeSpec->print();
    cout << identifier->value << '\n';
    if(openSquareBracket)
    {
        cout << openSquareBracket->value << '\n';
        cout << closeSquareBracket->value << '\n';
    }
}

Param::~Param()
{
    delete typeSpec;
    delete identifier;
    if(openSquareBracket)
    {
        delete openSquareBracket;
        delete closeSquareBracket;
    }
}