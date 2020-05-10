#include "ProgramParser.h"
#include "DeclListParser.h"

extern Token *nxt;

ProgramParser::ProgramParser()
    : declListParser(new DeclListParser())
{
    
}

// program
Rule* ProgramParser::parse()
{
    Token *copy = nxt;
    
    Rule* declList = declListParser->parse();
    if(declList)
        return new Program(declList);
    nxt = copy;
    return 0;
}

ProgramParser::~ProgramParser()
{
    delete declListParser;
}
