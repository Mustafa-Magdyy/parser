#include "CloseCurlyBracketParser.h"

extern Token *nxt;

Token* CloseCurlyBracketParser::parse()
{
    if(nxt->value == "}")
        return new Token(*nxt++);
    return 0;
}