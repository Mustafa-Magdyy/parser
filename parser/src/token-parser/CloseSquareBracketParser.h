#ifndef CLOSESQUAREBRACKETPARSER_H_
#define CLOSESQUAREBRACKETPARSER_H_

#include "TokenParser.h"

class CloseSquareBracketParser : public TokenParser
{
public:
    Token* parse();
};

#endif