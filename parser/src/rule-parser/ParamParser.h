#ifndef PARAMPARSER_H_
#define PARAMPARSER_H_

#include "RuleParser.h"
#include "TokenParser.h"
#include "Param.h"

class ParamParser : public RuleParser
{
private:
    RuleParser *typeSpecParser;
    TokenParser *identifierParser;
    TokenParser *openSquareBracketParser;
    TokenParser *closeSquareBracketParser;
public:
    ParamParser();
    Rule* parse_p1();
    Rule* parse_p2();
    Rule* parse();
    ~ParamParser();
};

#endif