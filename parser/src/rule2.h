#ifndef RULE2_H_
#define RULE2_H_

#include "node.h"

// decl_list
class rule2 : public node{
private:
	// decl - rule3
	node *obj1;
	// decl_list' - rule2_
	node *obj2;
public:
	rule2();
	rule2(node *obj1, node *obj2);
	void print();
	virtual ~rule2();
};

#endif /* RULE2_H_ */
