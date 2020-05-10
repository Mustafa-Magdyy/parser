#ifndef TYPESPECPARSER_H_
#define TYPESPECPARSER_H_

#include "RuleParser.h"
#include "TokenParser.h"
#include "TypeSpec.h"

class TypeSpecParser : public RuleParser
{
private:
    TokenParser *dataTypeParser;
public:
    TypeSpecParser();
    Rule* parse();
    ~TypeSpecParser();
};

#endif 
