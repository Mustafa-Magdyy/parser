#ifndef IFPARSER_H_
#define IFPARSER_H_

#include "TokenParser.h"

class IfParser : public TokenParser
{
public:
    Token* parse();
};

#endif