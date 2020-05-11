#include "Token.h"

Token::Token()
{
    type = "";
    value = "";
}

Token::Token(string type, string value)
    : type(type), value(value)
{
    
}
