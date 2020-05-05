#ifndef RULE29_H_
#define RULE29_H_

#include "node.h"
#include "Token.h"

class rule29 : public node
{
private:
	//arg_list - rule28
	node *obj1;
public:
	rule29();
	rule29(node *obj1);
	void print();
	virtual ~rule29();
};

#endif /* RULE29_H_ */
