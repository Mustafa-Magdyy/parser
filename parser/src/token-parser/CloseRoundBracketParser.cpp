#include "CloseRoundBracketParser.h"

extern Token *nxt;

Token* CloseRoundBracketParser::parse()
{
    if(nxt->value == ")")
        return new Token(*nxt++);
    return 0;
}