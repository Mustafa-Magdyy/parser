#ifndef RULE15_H_
#define RULE15_H_

#include "node.h"
#include "Token.h"

//local_decls
class rule15 : public node
{
private:
	// local_decl - rule16
	node *obj1;
	// local_delcs - rule15
	node *obj2;
public:
	rule15();
	rule15(node *obj1, node *obj2);
	void print();
	virtual ~rule15();
};

#endif /* RULE15_H_ */
