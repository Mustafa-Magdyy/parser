#ifndef WHILESTMTPARSER_H_
#define WHILESTMTPARSER_H_

#include "RuleParser.h"
#include "TokenParser.h"
#include "WhileStmt.h"

class WhileStmtParser : public RuleParser 
{
private:
    TokenParser *whileParser;
    TokenParser *openRoundBracketParser;
    RuleParser *exprParser;
    TokenParser *closeRoundBracketParser;
    RuleParser *compoundStmtParser;
public:
    WhileStmtParser();
    Rule* parse();
    ~WhileStmtParser();
};

#endif