#include "StmtParser.h"
#include "ExprStmtParser.h"
#include "WhileStmtParser.h"
#include "IfStmtParser.h"
#include "ReturnStmtParser.h"
#include "BreakStmtParser.h"

extern Token *nxt;

StmtParser::StmtParser()
    : exprStmtParser(new ExprStmtParser()), whileStmtParser(new WhileStmtParser()), ifStmtParser(new IfStmtParser()), returnStmtParser(new ReturnStmtParser()), breakStmtParser(new BreakStmtParser()) 
{

}

Rule* StmtParser::parse_p1()
{
    Token *copy = nxt;

    Rule *exprStmt = exprStmtParser->parse();
    if(exprStmt)
        return new Stmt(exprStmt);
    nxt = copy;
    return 0;
}

Rule* StmtParser::parse_p2()
{
    Token *copy = nxt;

    Rule *whileStmt = whileStmtParser->parse();
    if(whileStmt)
        return new Stmt(whileStmt);
    nxt = copy;
    return 0;
}

Rule* StmtParser::parse_p3()
{
    Token *copy = nxt;

    Rule *ifStmt = ifStmtParser->parse();
    if(ifStmt)
        return new Stmt(ifStmt);
    nxt = copy;
    return 0;
}

Rule* StmtParser::parse_p4()
{
    Token *copy = nxt;

    Rule *returnStmt = returnStmtParser->parse();
    if(returnStmt)
        return new Stmt(returnStmt);
    nxt = copy;
    return 0;
}

Rule* StmtParser::parse_p5()
{
    Token *copy = nxt;

    Rule *breakStmt = breakStmtParser->parse();
    if(breakStmt)
        return new Stmt(breakStmt);
    nxt = copy;
    return 0;
}

Rule* StmtParser::parse()
{
    Rule *ret;
    if((ret = parse_p1()))
        return ret;
    else if((ret = parse_p2()))
        return ret;
    else if((ret = parse_p3()))
        return ret;
    else if((ret = parse_p4()))
        return ret;
    else if((ret = parse_p5()))
        return ret;
    else 
        return 0;
}

StmtParser::~StmtParser()
{
    delete exprStmtParser;
    delete whileStmtParser;
    delete ifStmtParser;
    delete returnStmtParser;
    delete breakStmtParser;
}