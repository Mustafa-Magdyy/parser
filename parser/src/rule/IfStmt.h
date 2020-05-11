#ifndef IFSTMT_H_
#define IFSTMT_H_

#include "Rule.h"
#include "Token.h"

class IfStmt : public Rule
{
private:
    Token *iff;
    Token *openRoundBracket;
    Rule *expr;
    Token *closeRoundBracket;
    Rule *compoundStmt1;
    Token *elsee;
    Rule *compoundStmt2;
public:
    IfStmt(Token *iff, Token *openRoundBracket, Rule *expr, Token *closeRoundBracket, Rule *compoundStmt);
    IfStmt(Token *iff, Token *openRoundBracket, Rule *expr, Token *closeRoundBracket, Rule *compoundStmt1, Token *elsee, Rule *compoundStmt2);
    void print();
    ~IfStmt();
};

#endif