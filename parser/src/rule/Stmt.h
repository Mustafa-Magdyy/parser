#ifndef STMT_H_
#define STMT_H_

#include "Rule.h"
#include "Token.h"

class Stmt : public Rule
{
private:
    Rule *statement;
public:
    Stmt(Rule *statement);
    void print();
    ~Stmt();
};

#endif