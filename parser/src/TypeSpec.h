#ifndef TYPESPEC_H_
#define TYPESPEC_H_

#include "Rule.h"
#include "Token.h"

class TypeSpec : public Rule
{
private:
    Token *dataType;
public:
    TypeSpec(Token *dataType);
    void print();
    ~TypeSpec();
};

#endif
