#ifndef COMPOUNDSTMT_H_
#define COMPOUNDSTMT_H_

#include "Rule.h"
#include "Token.h"

class CompoundStmt : public Rule
{
private:
    Token *openCurlyBracket;
    Rule *compoundStmtPrime;
    Token *closeCurlyBracket;
public:
    CompoundStmt(Token *openCurlyBracket, Rule *compoundStmtPrime, Token *closeCurlyBracket);
    void print();
    ~CompoundStmt();
};

#endif