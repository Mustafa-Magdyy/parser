#ifndef RULE28_H_
#define RULE28_H_

#include "node.h"
#include "Token.h"

//arg_list
class rule28 : public node
{
private:
	// expr - rule19
	node *obj1;
	// arg_list_ - rule28_
	node *obj2;
public:
	rule28(node *obj1, node *obj2);
	void print();
	virtual ~rule28();
};

#endif /* RULE28_H_ */
