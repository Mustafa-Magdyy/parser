#ifndef DECLLISTPARSER_H_
#define DECLLISTPARSER_H_

#include "RuleParser.h"
#include "DeclList.h"

class DeclListParser : public RuleParser
{
private:
    RuleParser* declParser;
    RuleParser* declListParser;
public:
    DeclListParser();
    Rule* parse_p1();
    Rule* parse_p2();
    Rule* parse();
    ~DeclListParser();
};
#endif 
