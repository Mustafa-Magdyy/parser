#include "TypeSpecParser.h"
#include "DataTypeParser.h"

extern Token *nxt;

TypeSpecParser::TypeSpecParser()
    : dataTypeParser(new DataTypeParser())
{
    
}

Rule* TypeSpecParser::parse()
{
    Token *copy = nxt;
    
    Token *dataType = dataTypeParser->parse();
    if(dataType)
        return new TypeSpec(dataType);
    nxt = copy;
    return 0;
}

TypeSpecParser::~TypeSpecParser()
{
    delete dataTypeParser;
}
