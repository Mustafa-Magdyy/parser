#ifndef CLOSECURLYBRACKETPARSER_H_
#define CLOSECURLYBRACKETPARSER_H_

#include "TokenParser.h"

class CloseCurlyBracketParser : public TokenParser
{
public:
    Token* parse();
};

#endif