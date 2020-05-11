#ifndef TOKENPARSER_H_
#define TOKENPARSER_H_

#include "Token.h"

class TokenParser 
{
public:
    virtual Token* parse() = 0;
};

#endif 
