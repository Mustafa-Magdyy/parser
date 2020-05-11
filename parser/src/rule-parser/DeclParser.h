#ifndef DECLPARSER_H_
#define DECLPARSER_H_

#include "RuleParser.h"
#include "Decl.h"

class DeclParser : public RuleParser
{
private:
    RuleParser *varDeclParser;
    RuleParser *funDeclParser;
public:
    DeclParser();
    Rule* parse_p1();
    Rule* parse_p2();
    Rule* parse();
    ~DeclParser();
};

#endif 
