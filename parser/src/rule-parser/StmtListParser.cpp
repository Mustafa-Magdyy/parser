#include "StmtListParser.h"
#include "StmtParser.h"

extern Token *nxt;

StmtListParser::StmtListParser()
    : stmtParser(new StmtParser()), stmtListParser(new StmtListParser())
{

}

Rule* StmtListParser::parse()
{
    Token *copy = nxt;

    Rule *stmt = stmtParser->parse();
    if(stmt)
    {
        Rule *stmtList = stmtListParser->parse();
        if(stmtList)
            return new StmtList(stmt, stmtList);
    }
    nxt = copy;
    return new StmtList();
}

StmtListParser::~StmtListParser()
{
    delete stmtParser;
    delete stmtListParser;
}