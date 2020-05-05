#include "Token.h"

Token::Token()
{
	type = "";
	value = "";
}

Token::Token(std::string type, std::string value)
{
	this->type = type;
	this->value = value;
}
