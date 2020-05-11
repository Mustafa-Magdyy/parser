#include <iostream>

#include "StmtList.h"

using std::cout;

StmtList::StmtList()
    : stmt(0), stmtList(0)
{

}

StmtList::StmtList(Rule *stmt, Rule *stmtList)
    : stmt(stmt), stmtList(stmtList)
{

}

void StmtList::print()
{
    if(stmt)
    {
        stmt->print();
        stmtList->print();
    }
}

StmtList::~StmtList()
{
    delete stmt;
    delete stmtList;
}