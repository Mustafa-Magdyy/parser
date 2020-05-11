#ifndef COMPOUNDSTMTPRIMEPARSER_H_
#define COMPOUNDSTMTPRIMEPARSER_H_

#include "RuleParser.h"
#include "TokenParser.h"
#include "CompoundStmtPrime.h"

class CompoundStmtPrimeParser : public RuleParser 
{
private:
    RuleParser *localDeclsParser;
    RuleParser *stmtListParser;
    RuleParser *compoundStmtPrimeParser;
public:
    CompoundStmtPrimeParser();
    Rule* parse();
    ~CompoundStmtPrimeParser();
};

#endif