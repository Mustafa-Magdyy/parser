#include "IdentifierParser.h"

extern Token *nxt;

Token* IdentifierParser::parse()
{
    if(nxt->type == "ID")
        return new Token(*nxt++);
    return 0;
}