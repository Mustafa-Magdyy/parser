#ifndef SEMICOLONPARSER_H_
#define SEMICOLONPARSER_H_

#include "TokenParser.h"

class SemicolonParser : public TokenParser
{
public:
    Token* parse();
};

#endif