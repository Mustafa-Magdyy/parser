#include "BreakParser.h"

extern Token *nxt;

Token* BreakParser::parse()
{
    if(nxt->value == "break")
        return new Token(*nxt++);
    return 0;
}