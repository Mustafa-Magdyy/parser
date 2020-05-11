#include "SemicolonParser.h"

extern Token *nxt;

Token* SemicolonParser::parse()
{
    if(nxt->value == ";")
        return new Token(*nxt++);
    return 0;
}