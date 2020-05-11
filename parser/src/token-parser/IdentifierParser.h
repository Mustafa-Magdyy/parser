#ifndef IDENTIFIERPARSER_H_
#define IDENTIFIERPARSER_H_

#include "TokenParser.h"

class IdentifierParser : public TokenParser
{
public:
    IdentifierParser();
    Token* parse();
};

#endif