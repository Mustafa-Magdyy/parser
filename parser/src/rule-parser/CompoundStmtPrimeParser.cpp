#include "CompoundStmtPrimeParser.h"
#include "LocalDeclsParser.h"
#include "StmtListParser.h"

extern Token *nxt;

CompoundStmtPrimeParser::CompoundStmtPrimeParser()
    :localDeclsParser(new LocalDeclsParser()), stmtListParser(new StmtListParser()), compoundStmtPrimeParser(new CompoundStmtPrimeParser())
{

}

Rule* CompoundStmtPrimeParser::parse()
{
    Token *copy = nxt;

    Rule *localDecls = localDeclsParser->parse();
    if(localDecls)
    {
        Rule *stmtList = stmtListParser->parse();
        if(stmtList)
        {
            copy = nxt;
            Rule *compoundStmtPrime = compoundStmtPrimeParser->parse();
            if(compoundStmtPrime)
                return new CompoundStmtPrime(localDecls, stmtList, compoundStmtPrime);
            else
            {
                nxt = copy;
                return new CompoundStmtPrime(localDecls, stmtList);
            }
        }
    }
    nxt = copy;
    return 0;
}

CompoundStmtPrimeParser::~CompoundStmtPrimeParser()
{
    delete localDeclsParser;
    delete stmtListParser;
    delete compoundStmtPrimeParser;
}