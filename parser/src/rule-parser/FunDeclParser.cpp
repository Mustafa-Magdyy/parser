#include "FunDeclParser.h"
#include "TypeSpecParser.h"
#include "IdentifierParser.h"
#include "OpenRoundBracketParser.h"
#include "ParamsParser.h"
#include "CloseRoundBracketParser.h"
#include "CompoundStmtParser.h"

extern Token *nxt;

FunDeclParser::FunDeclParser()
    :typeSpecParser(new TypeSpecParser()), identifierParser(new IdentifierParser()), openRoundBracketParser(new OpenRoundBracketParser()), paramsParser(new ParamsParser()), closeRoundBracketParser(new CloseRoundBracketParser()), compoundStmtParser(new CompoundStmtParser())
{
    
}

Rule* FunDeclParser::parse()
{
    Token *copy = nxt;
    
    Rule *typeSpec = typeSpecParser->parse();
    Token *identifier = identifierParser->parse();
    Token *openRoundBracket = openRoundBracketParser->parse();
    if(typeSpec && identifier && openRoundBracket)
    {
        Rule *params = paramsParser->parse();
        Token *closeRoundBracket = closeRoundBracketParser->parse();
        if(params && closeRoundBracket)
        {
            Rule *compoundStmt = compoundStmtParser->parse();
            if(compoundStmt)
                return new FunDecl(typeSpec, identifier, openRoundBracket, params, closeRoundBracket, compoundStmt);
    
        }
    }
    nxt = copy;
    return 0;
}

FunDeclParser::~FunDeclParser()
{
    delete typeSpecParser;
    delete identifierParser;
    delete openRoundBracketParser;
    delete params;
    delete closeRoundBracket;
    delete compoundStmt;
}
