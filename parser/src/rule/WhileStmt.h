#ifndef WHILESTMT_H_
#define WHILESTMT_H_

#include "Rule.h"
#include "Token.h"

class WhileStmt : public Rule
{
private:
    Token *whil;
    Token *openRoundBracket;
    Rule *expr;
    Token *closeRoundBracket;
    Rule *compoundStmt;
public:
    WhileStmt(Token *whil, Token *openRoundBracket, Rule *expr, Token *closeRoundBracket, Rule *compoundStmt);
    void print();
    ~WhileStmt();
};

#endif