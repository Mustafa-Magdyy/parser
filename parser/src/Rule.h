#ifndef RULE_H_
#define RULE_H_

class Rule
{
public:
    virtual Rule* parse() = 0;
    virtual void print() = 0;
};

#endif
