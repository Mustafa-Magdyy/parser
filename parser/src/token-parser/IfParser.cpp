#include "IfParser.h"

extern Token *nxt;

Token* IfParser::parse()
{
    if(nxt->value == "if")
        return new Token(*nxt++);
    return 0;
}