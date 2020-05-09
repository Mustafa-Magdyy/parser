#include "Program.h"

Program::Program()
{
    declList = new DeclList();
}

Rule* Program::parse()
{
        Token *copy = nxt;
        
        declList = declList->parse();
        if(declList)
            return this;
        nxt = copy;
        return 0;
}

void Program::print()
{
    declList->print();
}

Program::~Program()
{
    delete declList;
}
