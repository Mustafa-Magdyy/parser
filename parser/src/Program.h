#ifndef PROGRAM_H_
#define PROGRAM_H_

#include "Token.h"
#include "Rule.h"

class Program : public Rule
{
private:
    Rule *declList;
public:
    Program();
    Rule* parse();
    void print();
    virtual ~Program();
};

#endif
