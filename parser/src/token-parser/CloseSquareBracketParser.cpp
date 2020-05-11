#include "CloseSquareBracketParser.h"

extern Token *nxt;

Token* CloseSquareBracketParser::parse()
{
    if(nxt->value == "]")
        return new Token(*nxt++);
    return 0;
}