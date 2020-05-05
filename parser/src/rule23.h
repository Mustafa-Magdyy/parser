#ifndef RULE23_H_
#define RULE23_H_

#include "node.h"
#include "Token.h"

// expr4
class rule23 : public node
{
private:
	// exprt5 - rule24
	node *obj1;
	// expr4_ - rule23_
	node *obj2;
public:
	rule23(node *obj1, node *obj2);
	void print();
	virtual ~rule23();
};

#endif /* RULE23_H_ */
