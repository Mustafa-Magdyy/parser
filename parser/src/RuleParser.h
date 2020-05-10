#ifndef RULEPARSER_H_
#define RULEPARSER_H_

#include "Token.h"
#include "Rule.h"

class RuleParser 
{
public:
    virtual Rule* parse() = 0;
    virtual ~RuleParser();
};

#endif
