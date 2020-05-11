#ifndef LOCALDECLS_H_
#define LOCALDECLS_H_

#include "Rule.h"
#include "Token.h"

class LocalDecls : public Rule 
{
private:
    Rule *localDecl;
    Rule *localDecls;
public:
    LocalDecls();
    LocalDecls(Rule *localDecl, Rule *localDecls);
    void print();
    ~LocalDecls();
};

#endif