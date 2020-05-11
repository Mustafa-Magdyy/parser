#include "DataTypeParser.h"

extern Token *nxt;

Token* DataTypeParser::parse()
{
    if(nxt->value == "void" || nxt->value == "int" || nxt->value == "float" || nxt->value == "double")
        return new Token(*nxt++);
    return 0;
}