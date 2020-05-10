#ifndef PROGRAM_H_
#define PROGRAM_H_

#include "Token.h"
#include "Rule.h"

class Program : public Rule
{
private:
    Rule *declList;
public:
    Program(Rule *declList);
    void print();
    virtual ~Program();
};

#endif
