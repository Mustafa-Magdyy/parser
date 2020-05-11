#include "CommaParser.h"

extern Token *nxt;

Token* CommaParser::parse()
{
    if(nxt->value == ",")
        return new Token(*nxt++);
    return 0;
}