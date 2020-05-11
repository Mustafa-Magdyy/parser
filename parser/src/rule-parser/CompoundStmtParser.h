#ifndef COMPOUNDSTMTPARSER_H_
#define COMPOUNDSTMTPARSER_H_

#include "RuleParser.h"
#include "TokenParser.h"
#include "CompoundStmt.h"

class CompoundStmtParser : public RuleParser 
{
private:
    TokenParser *openCurlyBracketParser;
    RuleParser *compoundStmtPrimeParser;
    TokenParser *closeCurlyBracketParser;
public:
    CompoundStmtParser();
    Rule* parse();
    ~CompoundStmtParser();
};

#endif 