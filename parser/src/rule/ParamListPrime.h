#ifndef PARAMLISTPRIME_H_
#define PARAMLISTPRIME_H_

#include "Rule.h"
#include "Token.h"

class ParamListPrime : public Rule
{
private:
    Token *comma;
    Rule *paramList;
public:
    ParamListPrime();
    ParamListPrime(Token *comma, Rule *paramList);
    void print();
    ~ParamListPrime();
};

#endif