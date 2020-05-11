#include "LocalDeclsParser.h"
#include "LocalDeclParser.h"

extern Token *nxt;

LocalDeclsParser::LocalDeclsParser()
    :localDeclParser(new LocalDeclParser()), localDeclsParser(new LocalDeclsParser())
{

}

Rule* LocalDeclsParser::parse()
{
    Token *copy = nxt;

    Rule *localDecl = localDeclParser->parse();
    if(localDecl)
    {
        Rule *localDecls = localDeclsParser->parse();
        if(localDecls)
            return new LocalDecls(localDecl, localDecls);
    }
    nxt = copy;
    return new LocalDecls();
}

LocalDeclsParser::~LocalDeclsParser()
{
    delete localDeclParser;
    delete localDeclsParser;
}