#include "ExprStmtParser.h"
#include "ExprParser.h"
#include "SemicolonParser.h"

extern Token *nxt;

ExprStmtParser::ExprStmtParser()
    : exprParser(new ExprParser()), semicolonParser(new SemicolonParser())
{

}

Rule* ExprStmtParser::parse()
{
    Token *copy = nxt;

    Rule *expr = exprParser->parse();
    Token *semicolon = semicolonParser->parse();
    if(expr && semicolon)
        return new ExprStmt(expr, semicolon);
    else if(semicolon)
        return new ExprStmt(semicolon);
    nxt = copy;
    return 0;
}

ExprStmtParser::~ExprStmtParser()
{
    delete exprParser;
    delete semicolonParser;
}