#ifndef WHILEPARSER_H_
#define WHILEPARSER_H_

#include "TokenParser.h"

class WhileParser : public TokenParser
{
public:
    Token* parse();
};

#endif