#ifndef FUNDDECL_H_
#define FUNDDECL_H_

#include "Rule.h"
#include "Token.h"

class FunDecl : public Rule
{
private:
    Rule *typeSpec;
    Token *identifier;
    Token *openRoundBracket;
    Rule *params;
    Token *closeRoundBracket;
    Rule *compoundStmt;
public:
    FunDecl(Rule *typeSpec, Token *identifier, Token *openRoundBracket, Rule *params, Token *closeRoundBracket, Rule *compoundStmt);
    void print();
    ~FunDecl();
};

#endif 
