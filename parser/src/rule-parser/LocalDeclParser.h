#ifndef LOCALDECLPARSER_H_
#define LOCALDECLPARSER_H_

#include "RuleParser.h"
#include "TokenParser.h"
#include "LocalDecl.h"

class LocalDeclParser : public RuleParser
{
private:
    RuleParser *typeSpecParser;
    TokenParser *identifierParser;
    TokenParser *openSquareBracketParser;
    TokenParser *intLitParser;
    TokenParser *closeSquareBracketParser;
    TokenParser *semicolonParser;
public:
    LocalDeclParser();
    Rule* parse_p1();
    Rule* parse_p2();
    Rule* parse();
    ~LocalDeclParser();
};

#endif