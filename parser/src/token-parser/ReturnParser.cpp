#include "ReturnParser.h"

extern Token *nxt;

Token* ReturnParser::parse()
{
    if(nxt->value == "return")
        return new Token(*nxt++);
    return 0;
}