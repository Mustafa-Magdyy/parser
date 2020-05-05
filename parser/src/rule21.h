#ifndef RULE21_H_
#define RULE21_H_

#include "node.h"
#include "Token.h"

// expr2
class rule21 : public node
{
private:
	// expr3 - rule22
	node *obj1;
	// expr2_ - rule21_
	node *obj2;
public:
	rule21(node *obj1, node *obj2);
	void print();
	virtual ~rule21();
};

#endif /* RULE21_H_ */
