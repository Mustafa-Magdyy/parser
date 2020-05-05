#ifndef RULE7_H_
#define RULE7_H_

#include "node.h"
#include "Token.h"

// params
class rule7 : public node
{
private:
	//param_list - rule8
	node *obj1;
	Token *dataType;
public:
	rule7(node *obj1);
	rule7(Token *dataType);
	void print();
	virtual ~rule7();
};

#endif /* RULE7_H_ */
