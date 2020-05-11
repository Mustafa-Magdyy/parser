#ifndef RETURNSTMTPARSER_H_
#define RETURNSTMTPARSER_H_

#include "RuleParser.h"
#include "TokenParser.h"

class ReturnStmtParser : public RuleParser
{
private:
    TokenParser *returnParser;
    RuleParser *exprParser;
    TokenParser *semicolonParser;
public:
    ReturnStmtParser();
    Rule* parse_p1();
    Rule* parse_p2();
    Rule* parse();
    ~ReturnStmtParser();
};

#endif