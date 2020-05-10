#ifndef VARDECLPARSER_H_
#define VARDECLPARSER_H_

#include "RuleParser.h"
#include "TokenParser.h"
#include "VarDecl.h"

class VarDeclParser : public RuleParser
{
private:
    RuleParser *typeSpecParser;
    TokenParser *identifierParser;
    TokenParser *openSquareBracketParser;
    TokenParser *intLitParser;
    TokenParser *closeSquareBracketParser;
    TokenParser *semicolonParser;
public:
    VarDeclParser();
    Rule* parse_p1();
    Rule* parse_p2();
    Rule* parse();
    ~VarDeclParser();
};

#endif 
