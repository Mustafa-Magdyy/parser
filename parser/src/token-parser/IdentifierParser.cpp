#include "IdnetifierParser.h"

extern Token *nxt;

IdentifierParser::IdentifierParser()
{
    
}

Token* IdentifierParser::parse()
{
    if(nxt->type == "ID")
        return new Token(*nxt++);
    return 0;
}