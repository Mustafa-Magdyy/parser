#ifndef VARDECL_H_
#define VARDECL_H_

#include "Token.h"
#include "Rule.h"

class VarDecl : public Rule
{
private:
    Rule *typeSpec;
    Token *identifier;
    Token *openSquareBracket;
    Token *intLit;
    Token *closeSquareBracket;
    Token *semicolon;
public:
    VarDecl(Rule *typeSpec, Token *identifier, Token *semicolon);
    VarDecl(Rule *typeSpec, Token *identifier, Token *openSqureBracket, Token *intLit, Token *closeSqureBracket, Token *semicolon);
    void print();
    ~VarDecl();
};

#endif
