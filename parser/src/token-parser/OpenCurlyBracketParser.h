#ifndef OPENCURLYBRACKETPARSER_H_
#define OPENCURLYBRACKETPARSER_H_

#include "TokenParser.h"

class OpenCurlyBracketParser : public TokenParser
{
public:
    Token* parse();
};

#endif