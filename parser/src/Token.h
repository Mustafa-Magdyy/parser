#ifndef TOKEN_H_
#define TOKEN_H_

#include<string>

class Token
{
public:
	std::string type;
	std::string value;

	Token();
	Token(std::string type, std::string value);
};

#endif /* TOKEN_H_ */
