#ifndef TOKEN_H_
#define TOKEN_H_

#include<string>

using std::string;

class Token
{
public:
    string type;
    string value;
    
    Token();
    Token(string type, string value);
};

#endif
