#ifndef DECLLIST_H_
#define DECLLIST_H_

#include "Token.h"
#include "Rule.h"

class DeclList : public Rule
{
private:
        Rule *decl;
        Rule *declList;
public:
    DeclList();
    Rule* parse();
    void print();
    virtual ~DeclList();
};

#endif
