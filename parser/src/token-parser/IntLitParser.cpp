#include "IntLitParser.h"

extern Token *nxt;

IntLitParser::IntLitParser()
{

}

Token* IntLitParser::parse()
{
    if(nxt->type == "INTEGRAL_LITERAL")
        return new Token(*nxt++);
    return 0;
}