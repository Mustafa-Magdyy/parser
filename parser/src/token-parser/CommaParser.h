#ifndef COMMAPARSER_H_
#define COMMAPARSER_H_

#include "TokenParser.h"

class CommaParser : public TokenParser
{
public:
    Token* parse();
};

#endif