#ifndef PARAMSPARSER_H_
#define PARAMSPARSER_H_

#include "RuleParser.h"
#include "Params.h"

class ParamsParser : public RuleParser
{
private:
    RuleParser *paramListParser;
public:
    ParamsParser();
    Rule* parse();
    ~ParamsParser();
};

#endif 
