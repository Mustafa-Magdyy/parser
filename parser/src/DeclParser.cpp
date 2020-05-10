#include "DeclParser.h"
#include "VarDeclParser.h"
#include "FunDeclParser.h"

extern Token *nxt;

DeclParser::DeclParser()
    : varDeclParser(new VarDeclParser()) , funDeclParser(new FunDeclParser())
{
    
}

Rule* DeclParser::parse_p1()
{
    Token *copy = nxt;
    
    Rule *varDecl = varDeclParser->parse();
    if(varDecl)
        return new Decl(varDecl);
    nxt = copy;
    return 0;
}

Rule* DeclParser::parse_p2()
{
    Token *copy = nxt;
    
    Rule *funDecl = funDeclParser->parse();
    if(funDecl)
        return new Decl(funDecl);
    nxt = copy;
    return 0;
}

Rule* DeclParser::parse()
{
    Rule *ret;
    if((ret = parse_p1()))
        return ret;
    else if((ret = parse_p2()))
        return ret;
    else 
        return 0;
}

DeclParser::~DeclParser()
{
    delete varDeclParser;
    delete funDeclParser;
}
