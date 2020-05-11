#ifndef STMTLIST_H_
#define STMTLIST_H_

#include "Rule.h"
#include "Token.h"

class StmtList : public Rule
{
private:
    Rule *stmt;
    Rule *stmtList;
public:
    StmtList();
    StmtList(Rule *stmt, Rule *stmtList);
    void print();
    ~StmtList();
};

#endif 