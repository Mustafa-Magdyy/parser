#include "WhileStmtParser.h"
#include "WhileParser.h"
#include "OpenRoundBracketParser.h"
#include "ExprParser.h"
#include "CloseRoundBracketParser.h"
#include "CompoundStmtParser.h"

extern Token *nxt;

WhileStmtParser::WhileStmtParser()
    : whileParser(new WhileParser()), openRoundBracketParser(new OpenRoundBracketParser()), exprParser(new ExprParser()), closeRoundBracketParser(new CloseRoundBracketParser()), compoundStmtParser(new CompoundStmtParser())
{

}

Rule* WhileStmtParser::parse()
{
    Token *copy = nxt;

    Token *whil = whileParser->parse();
    Token *openRoundBracket = openRoudnBracketParser->parse();
    if(whil && openRoundBracket)
    {
        Rule *epxr = exprParser->parse();
        Token *closeRoundBracket = closeRoundBracketParser->parse();
        if(expr && closeRoundBracket)
        {
            Rule *compoundStmt = compoundStmtParser->parse();
            if(compoundStmt)
                return new WhileStmt(whil, openRoudnBracket, expr, closeRoundBracket, compoundStmt);
        }
    }
    nxt = copy;
    return 0;
}

WhileStmtParser::~WhileStmtParser()
{
    delete whileParser;
    delete openRoundBracketParser;
    delete exprParser;
    delete closeRoundBracketParser;
    delete compoundStmtParser;
}