#ifndef PROGRAMPARSER_H_
#define PROGRAMPARSER_H_

#include "RuleParser.h"
#include "Program.h"

class ProgramParser : public RuleParser
{    
private:
    RuleParser *declListParser;
public:
    ProgramParser();
    Rule* parse();
    virtual ~ProgramParser();
};

#endif
