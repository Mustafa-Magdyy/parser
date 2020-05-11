#ifndef EXPRSTMT_H_
#define EXPRSTMT_H_

#include "Rule.h"
#include "Token.h"

class ExprStmt : public Rule 
{
private:
    Rule *expr;
    Token *semicolon;
public:
    ExprStmt(Token *semicolon);
    ExprStmt(Rule *expr, Token *semicolon);
    void print();
    ~ExprStmt();
};

#endif