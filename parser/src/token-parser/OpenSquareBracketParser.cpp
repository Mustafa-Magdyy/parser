#include "OpenSquareBracketParser.h"

extern Token *nxt;

Token* OpenSquareBracketParser::parse()
{
    if(nxt->value == "[")
        return new Token(*nxt++);
    return 0;
}