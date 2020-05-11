#ifndef DATATYPEPARSER_H_
#define DATATYPEPARSER_H_

#include "TokenParser.h"

class DataTypeParser : public TokenParser
{
public:
    Token* parse();
};

#endif