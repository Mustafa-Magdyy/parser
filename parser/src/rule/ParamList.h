#ifndef PARAMLIST_H_
#define PARAMLIST_H_

#include "Rule.h"
#include "Token.h"

class ParamList : public Rule 
{
private:
    Rule *param;
    Rule *paramListPrime;
public:
    ParamList(Rule *param, Rule *paramListPrime);
    void print();
    ~ParamList();
};

#endif 
