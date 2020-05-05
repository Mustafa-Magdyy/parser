#ifndef RULE22_H_
#define RULE22_H_

#include "node.h"
#include "Token.h"

// expr3
class rule22 : public node
{
private:
	// expr4 - rule23
	node *obj1;
	// expr3_ - rule22_
	node *obj2;
public:
	rule22(node *obj1, node *obj2);
	void print();
	virtual ~rule22();
};

#endif /* RULE22_H_ */
