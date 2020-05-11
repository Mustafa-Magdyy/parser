#ifndef RETURNPARSER_H_
#define RETURNPARSER_H_

#include "TokenParser.h"

class ReturnParser : public TokenParser
{
public:
    Token* parse();
};

#endif