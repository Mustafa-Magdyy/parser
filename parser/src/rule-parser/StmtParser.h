#ifndef STMTPARSER_H_
#define STMTPARSER_H_

#include "RuleParser.h"
#include "TokenParser.h"
#include "Stmt.h"

class StmtParser : public RuleParser 
{
private:
    RuleParser *exprStmtParser;
    RuleParser *whileStmtParser;
    RuleParser *ifStmtParser;
    RuleParser *returnStmtParser;
    RuleParser *breakStmtParser;
public:
    StmtParser();
    Rule* parse_p1();
    Rule* parse_p2();
    Rule* parse_p3();
    Rule* parse_p4();
    Rule* parse_p5();
    Rule* parse();
    ~StmtParser();
};

#endif 