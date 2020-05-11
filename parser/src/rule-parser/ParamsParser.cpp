#include "ParamsParser.h"
#include "ParamListParser.h"

extern Token *nxt;

ParamsParser::ParamsParser()
    :paramListParser(new ParamListParser())
{
    
}

Rule* ParamsParser::parse()
{
    Token *copy = nxt;
    
    Rule *paramList = paramListParser->parse();
    if(paramList)
        return new Params(paramList);
    nxt = copy;
    return new Params();
}

ParamsParser::~ParamsParser()
{
    delete paramListParser;
}
