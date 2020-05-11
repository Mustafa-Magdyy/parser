#ifndef BREAKPARSER_H_
#define BREAKPARSER_H_

#include "TokenParser.h"

class BreakParser : public TokenParser
{
public:
    Token* parse();
};

#endif