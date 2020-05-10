#include "DeclListParser.h"
#include "DeclParser.h"

extern Token *nxt;

DeclListParser::DeclListParser()
    : declParser(new DeclParser()), declListParser(new DeclListParser())
{
    
}

Rule* DeclListParser::parse_p1()
{
    Token *copy = nxt;
    
    Rule *decl = declParser->parse();
    if(decl)
    {
        Rule *declList = declListParser->parse();
        if(declList)
        {
            return new DeclList(decl, declList);
        }
    }
    nxt = copy;
    return 0;
}

Rule* DeclListParser::parse_p2()
{
    Token *copy = nxt;
    
    Rule *decl = declParser->parse();
    if(decl)
    {
        return new DeclList(decl);
    }
    nxt = copy;
    return 0;
}

Rule* DeclListParser::parse()
{
    Rule *ret;
    if((ret = parse_p1()))
        return ret;
    else if((ret = parse_p2()))
        return ret;
    else 
        return 0;
}

DeclListParser::~DeclListParser()
{
    delete declParser;
    delete declListParser;
}
