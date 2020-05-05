#ifndef RULE10_H_
#define RULE10_H_

#include "node.h"
#include "Token.h"

//stmt_list
class rule10 : public node
{
private:
	//stmt - rule11
	node *obj1;
	//stmt_list - rule10
	node *obj2;
public:
	rule10();
	rule10(node *obj1, node *obj2);
	void print();
	virtual ~rule10();
};

#endif /* RULE10_H_ */
