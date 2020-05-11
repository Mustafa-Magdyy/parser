#ifndef BREAKSTMTPARSER_H_
#define BREAKSTMTPARSER_H_

#include "RuleParser.h"
#include "TokenParser.h"

class BreakStmtParser : public RuleParser
{
private:
    TokenParser *breakParser;
    TokenParser *semicolonParser;
public:
    BreakStmtParser();
    Rule* parse();
    ~BreakStmtParser();
};

#endif