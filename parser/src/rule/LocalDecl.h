#ifndef LOCALDECL_H_
#define LOCALDECL_H_

#include "Rule.h"
#include "Token.h"

class LocalDecl : public Rule
{
private:
    Rule *typeSpec;
    Token *identifier;
    Token *openSquareBracket;
    Token *intLit;
    Token *closeSquareBracket;
    Token *semicolon;
public:
    LocalDecl(Rule *typeSpec, Token *identifier, Token *semicolon);
    LocalDecl(Rule *typeSpec, Token *identifier, Token *openSqureBracket, Token *intLit, Token *closeSqureBracket, Token *semicolon);
    void print();
    ~LocalDecl();
};

#endif