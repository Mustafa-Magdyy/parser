#ifndef RULE5_H_
#define RULE5_H_

#include "node.h"
#include "Token.h"

// type_spec
class rule5 : public node
{
private:
	Token *dataType;
public:
	rule5(Token *dataType);
	void print();
	virtual ~rule5();
};

#endif /* RULE5_H_ */
