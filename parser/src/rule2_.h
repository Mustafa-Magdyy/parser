#ifndef RULE2__H_
#define RULE2__H_

#include "node.h"

// decl_list_
class rule2_ : public node
{
private:
	// decl_list' - rule2_
	node *obj1;
	// decl - rule3
	node *obj2;
public:
	rule2_();
	rule2_(node *obj1, node *obj2);
	void print();
	virtual ~rule2_();
};

#endif /* RULE2__H_ */
