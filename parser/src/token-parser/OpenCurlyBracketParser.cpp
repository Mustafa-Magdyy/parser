#include "OpenCurlyBracketParser.h"

extern Token *nxt;

Token* OpenCurlyBracketParser::parse()
{
    if(nxt->value == "{")
        return new Token(*nxt++);
    return 0;
}