#include "ParamParser.h"
#include "TypeSpecParser.h"
#include "IdentifierParser.h"
#include "OpenSquareBracketParser.h"
#include "CloseSquareBracketParser.h"

extern Token *nxt;

ParamParser::ParamParser()
    :typeSpecParser(new TypeSpecParser()), identifierParser(new IdentifierParser()), openSquareBracketParser(new OpenSquareBracketParser()), closeSquareBracketParser(new CloseSquareBracketParser())
{

}

Rule* ParamParser::parse_p1()
{
    Token *copy = nxt;

    Rule *typeSpec = typeSpecParser->parse();
    Token *identifier = identifierParser->parse();
    Token *openSquareBracket = openSquareBracketParser->parse();
    Token *closeSquareBracket = closeSquareBracketParser->parse();
    if(typeSpec && identifier && openSquareBracket && closeSquareBracket)
        return new Param(typeSpec, identifier, openSquareBracket, closeSquareBracket);
    nxt = copy;
    return 0;
}

Rule* ParamParser::parse_p2()
{
    Token *copy = nxt;

    Rule *typeSpec = typeSpecParser->parse();
    Token *identifier = identifierParser->parse();
    if(typeSpec && identifier)
        return new Param(typeSpec, identifier);
    nxt = copy;
    return 0;
}

Rule* ParamParser::parse()
{
    Rule *ret;
    if((ret = parse_p1()))
        return ret;
    else if((ret = parse_p2()))
        return ret;
    else 
        return 0;
}

ParamParser::~ParamParser()
{
    delete typeSpecParser;
    delete identifierParser;
    delete openSquareBracketParser;
    delete closeSquareBracketParser;
}