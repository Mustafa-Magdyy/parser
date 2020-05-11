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
    DeclList(Rule* decl);
    DeclList(Rule *decl, Rule *declList);
    void print();
    virtual ~DeclList();
};

#endif
