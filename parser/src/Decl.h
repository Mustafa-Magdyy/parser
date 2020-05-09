#ifndef DECL_H_
#define DECL_H_

#include "Rule.h"

class Decl : public Rule
{
private:
    Rule *varDecl;
    Rule *funDecl;
public:
    Decl();
    Rule* parse();
    void print();
    virtual ~Decl();
};

#endif
