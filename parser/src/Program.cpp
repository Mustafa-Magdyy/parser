#include "Program.h"

Program::Program(Rule *declList)
    : declList(declList)
{
    
}

void Program::print()
{
    declList->print();
}

Program::~Program()
{
    delete declList;
}
