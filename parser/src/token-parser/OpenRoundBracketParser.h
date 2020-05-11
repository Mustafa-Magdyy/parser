#ifndef OPENROUNDBRACKETPARSER_H_
#define OPENROUNDBRACKETPARSER_H_

#include "TokenParser.h"

class OpenRoundBracketParser : public TokenParser
{
public:
    Token* parse();
};

#endif