#ifndef RULE20_H_
#define RULE20_H_

#include "node.h"
#include "Token.h"

// expr1
class rule20 : public node
{
private:
	// expr2 - rule21
	node *obj1;
	// expr1_ - rule20_
	node *obj2;
public:
	rule20(node *obj1, node *obj2);
	void print();
	virtual ~rule20();
};

#endif /* RULE20_H_ */
