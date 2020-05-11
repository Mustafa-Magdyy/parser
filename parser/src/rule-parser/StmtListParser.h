#ifndef STMTLISTPARSER_H_
#define STMTLISTPARSER_H_

#include "RuleParser.h"
#include "TokenParser.h"
#include "StmtList.h"

class StmtListParser : public RuleParser
{
private:
    RuleParser *stmtParser;
    RuleParser *stmtListParser;
public:
    StmtListParser();
    Rule* parse();
    ~StmtListParser();
};

#endif 