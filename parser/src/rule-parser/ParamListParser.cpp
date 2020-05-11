#include "ParamListParser.h"
#include "ParamParser.h"
#include "ParamListPrimeParser.h"

extern Token *nxt;

ParamListParser::ParamListParser()
    : paramParser(new ParamParser()), paramListPrimeParser(new ParamListPrimeParser())
{

}

Rule* ParamListParser::parse()
{
    Token *copy = nxt;

    Rule *param = paramParser->parse();
    if(param)
    {
        Rule *paramListPrime = paramListPrimeParser->parse();
        if(paramListPrime)
            return new ParamList(param, paramListPrime);
    }
    nxt = copy;
    return 0;
}

ParamListParser::~ParamListParser()
{
    delete paramParser;
    delete paramListPrimeParser;
}