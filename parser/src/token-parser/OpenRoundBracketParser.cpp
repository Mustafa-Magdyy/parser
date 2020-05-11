#include "OpenRoundBracketParser.h"

extern Token *nxt;

Token* OpenRoundBracketParser::parse()
{
    if(nxt->value == "(")
        return new Token(*nxt++);
    return 0;
}