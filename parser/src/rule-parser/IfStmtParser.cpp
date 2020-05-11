#include "IfStmtParser.h"
#include "IfParser.h"
#include "OpenRoundBracketParser.h"
#include "ExprParser.h"
#include "CloseRoundBracketParser.h"
#include "CompoundStmtParser.h"
#include "ElseParser.h"

extern Token *nxt;

IfStmtParser::IfStmtParser()
    :ifParser(new IfParser()), openRoundBracketParser(new OpenRoundBracketParser()), exprParser(new ExprParser()), closeRoundBracketParser(new CloseRoundBracketParser()), compoundStmtParser(new CompoundStmtParser()), elseParser(new ElseParser())
{

}

Rule* IfStmtParser::parse()
{
    Token *copy = nxt;

    Token *iff = ifParser->parse();
    Token *openRoundBracket = openRoundBracketParser->parse();
    if(iff && openRoundBracket)
    {
        Rule *expr = exprParser->parse();
        Token *closeRoundBracket = closeRoundBracketParser->parse();
        if(expr && closeRoundBracket)
        {
            Rule *compoundStmt1 = compoundStmtParser->parse();
            if(compoundStmt1)
            {
                copy = nxt;
                Token *elsee = elseParser->parse();
                Rule *compoundStmt2 = compoundStmtParser->parse();
                if(elsee && compoundStmt2)
                    return new IfStmt(iff, openRoundBracket, expr, closeRoundBracket, compoundStmt1, elsee, compoundStmt2);
                else
                {
                    nxt = copy;
                    return new IfStmt(iff, openRoundBracket, expr, closeRoundBracket, compoundStmt1);
                }
            }
        }
    }
    nxt = copy;
    return 0;
}

IfStmtParser::~IfStmtParser()
{
    delete ifParser;
    delete openRoundBracketParser;
    delete exprParser;
    delete closeRoundBracketParser;
    delete compoundStmtParser;
    delete elseParser;
}