#ifndef IFSTMTPARSER_H_
#define IFSTMTPARSER_H_

#include "RuleParser.h"
#include "TokenParser.h"

class IfStmtParser : public RuleParser 
{
private:
    TokenParser *ifParser;
    TokenParser *openRoundBracketParser;
    RuleParser *exprParser;
    TokenParser *closeRoundBracketParser;
    RuleParser *compoundStmtParser;
public:
    IfStmtParser();
    Rule* parse();
    ~IfStmtParser();
};

#endif