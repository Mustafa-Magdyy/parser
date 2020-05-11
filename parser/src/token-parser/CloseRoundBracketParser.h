#ifndef CLOSEROUNDBRACKETPARSER_H_
#define CLOSEROUNDBRACKETPARSER_H_

#include "TokenParser.h"

class CloseRoundBracketParser : public TokenParser
{
public:
    Token* parse();
};

#endif