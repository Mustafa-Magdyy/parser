#include "ParamListPrimeParser.h"
#include "CommaParser.h"
#include "ParamListParser.h"

extern Token *nxt;

ParamListPrimeParser::ParamListPrimeParser()
    : commaParser(new CommaParser()), paramListParser(new ParamListParser())
{

}

Rule* ParamListPrimeParser::parse()
{
    Token *copy = nxt;

    Token *comma = commaParser->parse();
    Rule *paramList = paramListParser->parse();

    if(comma && paramList)
        return new ParamListPrime(comma, paramList);
    nxt = copy;
    return new ParamListPrime();
}

ParamListPrimeParser::~ParamListPrimeParser()
{
    delete commaParser;
    delete paramListParser;
}