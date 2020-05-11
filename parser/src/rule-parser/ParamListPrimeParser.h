#ifndef PARAMLISTPRIMEPARSER_H_
#define PARAMLISTPRIMEPARSER_H_

#include "RuleParser.h"
#include "TokenParser.h"
#include "ParamListPrime.h"

class ParamListPrimeParser : public RuleParser
{
private:
    TokenParser *commaParser;
    RuleParser *paramListParser;
public:
    ParamListPrimeParser();
    Rule* parse();
    ~ParamListPrimeParser();
};

#endif 