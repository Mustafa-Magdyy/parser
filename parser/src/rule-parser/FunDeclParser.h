#ifndef FUNDECLPARSER_H_
#define FUNDECLPARSER_H_

#include "RuleParser.h"
#include "TokenParser.h"
#include "FunDecl.h"

class FunDeclParser : public RuleParser
{
private:
    RuleParser *typeSpecParser;
    TokenParser *identifierParser;
    TokenParser *openRoundBracketParser;
    RuleParser *paramsParser;
    TokenParser *closeRoundBracketParser;
    RuleParser *compoundStmtParser;
public:
    FunDeclParser();
    Rule* parse();
    ~FunDeclParser();
};

#endif
