#ifndef COMPOUNDSTMTPRIME_H_
#define COMPOUNDSTMTPRIME_H_

#include "Rule.h"
#include "Token.h"

class CompoundStmtPrime : public Rule 
{
private:
    Rule *localDecls;
    Rule *stmtList;
    Rule *compoundStmtPrime;
public:
    CompoundStmtPrime(Rule *localDecls, Rule *stmtList);
    CompoundStmtPrime(Rule *localDecls, Rule *stmtList, Rule *compoundStmtPrime);
    void print();
    ~CompoundStmtPrime();
};

#endif