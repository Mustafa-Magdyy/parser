#ifndef PARAM_H_
#define PARAM_H_

#include "Rule.h"
#include "Token.h"

class Param : public Rule 
{
private:
    Rule *typeSpec;
    Token *identifier;
    Token *openSquareBracket;
    Token *closeSquareBracket;
public:
    Param(Rule *typeSpec, Token *identifier);
    Param(Rule *typeSpec, Token *identifier, Token *openSquareBracket, Token *closeSquareBracket);
    void print();
    ~Param();
};

#endif 