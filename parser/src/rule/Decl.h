#ifndef DECL_H_
#define DECL_H_

#include "Rule.h"

class Decl : public Rule
{
private:
    Rule *vfDecl;
public:
    Decl(Rule* vfDecl);
    void print();
    virtual ~Decl();
};

#endif
