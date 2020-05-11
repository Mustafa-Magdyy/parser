#ifndef EXPRSTMTPARSER_H_
#define EXPRSTMTPARSER_H_

#include "RuleParser.h"
#include "TokenParser.h"
#include "ExprStmt.h"

class ExprStmtParser : public RuleParser
{
private:
    RuleParser *exprParser;
    TokenParser *semicolonParser;
public:
    ExprStmtParser();
    Rule* parse();
    ~ExprStmtParser();
};

#endif