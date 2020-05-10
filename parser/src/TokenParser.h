#ifndef TOKENPARSER_H_
#define TOKENPARSER_H_

#include "Token.h"

class TokenParser 
{
public:
    Token* parse();
    virtual ~TokenParser();
};

#endif 
