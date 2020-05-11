#include "BreakStmtParser.h"
#include "BreakParser.h"
#include "SemicolonParser.h"

extern Token *nxt;

BreakStmtParser::BreakStmtParser()
    :breakParser(new BreakParser()), semicolonParser(new SemicolonParser())
{

}

Rule* BreakStmtParser::parse()
{
    Token *copy = nxt;

    Token *breakk = breakParser->parse();
    Token *semicolon = semicolonParser->parse();
    if(break && semicolon)
        return new BreakStmt(breakk, semicolon);
    nxt = copy;
    return 0;
}

BreakStmtParser::~BreakStmtParser()
{
    delete breakParser;
    delete semicolonParser;
}