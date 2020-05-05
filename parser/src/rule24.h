#ifndef RULE24_H_
#define RULE24_H_

#include "node.h"
#include "Token.h"

//expr5
class rule24: public node {
private:
	// expr6 - rule25
	node *obj1;
	// expr5_ - rule24_
	node *obj2;
public:
	rule24(node *obj1, node *obj2);
	void print();
	virtual ~rule24();
};

#endif /* RULE24_H_ */

