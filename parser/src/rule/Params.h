#ifndef PARAMS_H_
#define PARAMS_H_

#include "Rule.h"
#include "Token.h"

class Params : public Rule
{
private:
    Rule *paramList;
public:
    Params();
    Params(Rule *paramList);
    void print();
    ~Params();
};

#endif 
