#ifndef INTLITPARSER_H_
#define INTLITPARSER_H_

#include "TokenParser.h"

class IntLitParser : public TokenParser
{
public:
    IntLitParser();
    Token* parse();
};

#endif