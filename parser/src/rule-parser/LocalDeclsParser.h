#ifndef LOCALDECLSPARSER_H_
#define LOCALDECLSPARSER_H_

#include "RuleParser.h"
#include "TokenParser.h"
#include "LocalDecls.h"

class LocalDeclsParser : public RuleParser
{
private:
    RuleParser *localDeclParser;
    RuleParser *localDeclsParser;
public:
    LocalDeclsParser();
    Rule* parse();
    ~LocalDeclsParser();
};

#endif