#ifndef BREAKSTMT_H_
#define BREAKSTMT_H_

#include "Rule.h"
#include "Token.h"

class BreakStmt : public Rule
{
private:
    Token *breakk;
    Token *semicolon;
public:
    BreakStmt(Token *breakk, Token *semicolon);
    void print();
    ~BreakStmt();
};

#endif