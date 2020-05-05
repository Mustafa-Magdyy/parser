#ifndef RULE20__H_
#define RULE20__H_

#include "node.h"
#include "Token.h"

class rule20_ : public node
{
private:
	Token *AND_or_OR;
	node *obj1;
public:
	rule20_();
	rule20_(Token *AND_or_OR, node *obj1);
	void print();
	virtual ~rule20_();
};

#endif /* RULE20__H_ */
