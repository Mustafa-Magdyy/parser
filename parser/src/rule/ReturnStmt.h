#ifndef RETURNSTMT_H_
#define RETURNSTMT_H_

#include "Rule.h"
#include "Token.h"

class ReturnStmt : public Rule 
{
private:
    Token *returnn;
    Rule *expr;
    Token *semicolon;
public:
    ReturnStmt(Token *returnn, Token *semicolon);
    ReturnStmt(Token *returnn, Rule *expr, Token *semicolon);
    void print();
    ~ReturnStmt();
};

#endif