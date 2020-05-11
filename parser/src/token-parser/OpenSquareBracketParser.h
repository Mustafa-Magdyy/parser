#ifndef OPENSQUAREBRACKETPARSER_H_
#define OPENSQUAREBRACKETPARSER_H_

#include "TokenParser.h"

class OpenSquareBracketParser : public TokenParser
{
public:
    Token* parse();
};

#endif