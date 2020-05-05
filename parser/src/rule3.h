#ifndef RULE3_H_
#define RULE3_H_

#include "node.h"

// decl
class rule3 : public node
{
private:
	// var_decl or fun_decl
	node *obj1;

public:
	rule3(node *obj1);
	void print();
	virtual ~rule3();
};

#endif /* RULE3_H_ */
