#include "ReturnStmtParser.h"
#include "ReturnParser.h"
#include "ExprParser.h"
#include "SemicolonParser.h"

extern Token *nxt;

ReturnStmtParser::ReturnStmtParser()
    :returnParser(new ReturnParser()), exprParser(new ExprParser()), semicolonParser(new SemicolonParser())
{

}

Rule* ReturnStmtParser::parse_p1()
{
    Token *copy = nxt;

    Token *returnn = returnParser->parse();
    if(returnn)
    {
        Rule *expr = exprStmtParser->parse();
        Token *semicolon = semicolonParser->parse();
        if(expr && semicolon)
            return new ReturnStmt(returnn, expr, semicolon);
    }
    nxt = copy;
    return 0;
}

Rule* ReturnStmtParser::parse_p2()
{
    Token *copy = nxt;

    Token *returnn = returnParser->parse();
    Token *semicolon = semicolonParser->parse();

    if(returnn && semicolon)
        return new ReturnStmt(returnn, semicolon);
    nxt = copy;
    return 0;
}

Rule* ReturnStmtParser::parse()
{
    Rule *ret;
    if((ret = parse_p1()))
        return ret;
    else if((ret = parse_p2()))
        return ret;
    else 
        return 0;
}

ReturnStmtParser::~ReturnStmtParser()
{
    delete returnParser;
    delete exprParser;
    delete semicolonParser;
}