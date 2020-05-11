#include "CompoundStmtParser.h"
#include "OpenCurlyBracketParser.h"
#include "CompoundStmtPrimeParser.h"
#include "CloseCurlyBracketParser.h"

extern Token *nxt;

CompoundStmtParser::CompoundStmtParser()
    : openCurlyBracketParser(new OpenCurlyBracketParser()), compoundStmtPrimeParser(new CompoundStmtPrimeParser()), closeCurlyBracketParser(new CloseCurlyBracketParser())
{

}

Rule* CompoundStmtParser::parse()
{
    Token *copy = nxt;

    Token *openCurlyBracket = openCurlyBracketParser->parse();
    if(openCurlyBracket)
    {
        Rule *compoundStmtPrime = compoundStmtPrimeParser->parse();
        Token *closeCurlyBracket = closeCurlyBracketParser->parse();
        if(compoundStmtPrime && closeCurlyBracket)
            return new CompoundStmt(openCurlyBracket, compoundStmtPrime, closeCurlyBracket);
    }
    nxt = copy;
    return 0;
}

CompoundStmtParser::~CompoundStmtParser()
{
    delete openCurlyBracketParser;
    delete compoundStmtPrimeParser;
    delete closeCurlyBracketParser;
}