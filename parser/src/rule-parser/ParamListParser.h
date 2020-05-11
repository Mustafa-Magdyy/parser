#ifndef PARAMLISTPARSER_H_
#define PARAMLISTPARSER_H_

#include "RuleParser.h"
#include "ParamList.h"

class ParamListParser : public RuleParser 
{
private:
    RuleParser *paramParser;
    RuleParser *paramListPrimeParser;
public:
    ParamListParser();
    Rule* parse();
    ~ParamListParser();
};

#endif 