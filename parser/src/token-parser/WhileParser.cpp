#include "WhileParser.h"

extern Token *nxt;

Token* WhileParser::parse()
{
    if(nxt->value == "while")
        return new Token(*nxt++);
    return 0;
}