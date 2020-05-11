#include <iostream>

#include "Stmt.h"

using std::cout;

Stmt::Stmt(Rule *statement)
    :statement(statement)
{

}

void Stmt::print()
{
    statement->print();
}

Stmt::~Stmt()
{
    delete statement;
}