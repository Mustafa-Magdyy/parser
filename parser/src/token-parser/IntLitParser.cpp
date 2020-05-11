#include "IntLitParser.h"

extern Token *nxt;

Token* IntLitParser::parse()
{
    if(nxt->type == "INTEGRAL_LITERAL")
        return new Token(*nxt++);
    return 0;
}