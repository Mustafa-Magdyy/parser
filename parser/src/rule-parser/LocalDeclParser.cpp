#include "LocalDeclParser.h"
#include "TypeSpecParser.h"
#include "IdentifierParser.h"
#include "OpenSquareBracketParser.h"
#include "IntLitParser.h"
#include "CloseSquareBracketParser.h"
#include "SemicolonParser.h"

extern Token *nxt;

LocalDeclParser::LocalDeclParser()
    : typeSpecParser(new TypeSpecParser()), identifierParser(new IdentifierParser()),
        openSquareBracketParser(new OpenSquareBracketParser()), intLitParser(new IntLitParser()),
        closeSquareBracketParser(new CloseSquareBracketParser()), semicolonParser(new SemicolonParser())
{
    
}

Rule* LocalDeclParser::parse_p1()
{
    Token *copy = nxt;
    
    Rule *typeSpec = typeSpecParser->parse();
    Token *identifier = identifierParser->parse();
    Token *openSquareBracket = openSquareBracketParser->parse();
    Token *intLit = intLitParser->parse();
    Token *closeSquareBracket = closeSquareBracketParser->parse();
    Token *semicolon = semicolonParser->parse();
    if(typeSpec && identifier && openSquareBracket && intLit && closeSquareBracket && semicolon)
        return new LocalDecl(typeSpec, identifier, openSquareBracket, intLit, closeSquareBracket, semicolon);
    nxt = copy;
    return 0;
}

Rule* LocalDeclParser::parse_p2()
{
    Token *copy = nxt;
    
    Rule *typeSpec = typeSpecParser->parse();
    Token *identifier = identifierParser->parse();
    Token *semicolon = semicolonParser->parse();
    if(typeSpec && identifier && semicolon)
        return new LocalDecl(typeSpec, identifier, semicolon);
    nxt = copy;
    return 0;
}

Rule* LocalDeclParser::parse()
{
    Rule *ret;
    if((ret = parse_p1()))
        return ret;
    else if((ret = parse_p2()))
        return ret;
    else 
        return 0;
}

LocalDeclParser::~LocalDeclParser()
{
    delete typeSpecParser;
    delete identifierParser;
    delete openSquareBracketParser;
    delete intLitParser;
    delete closeSquareBracketParser;
    delete semicolonParser;
}
